#include <bits/stdc++.h>
using namespace std;
/*
Nguyen Duy Dat - 20215343
*/
int n, q;
vector<vector<string>> training_documents;
vector<vector<string>> test_documents;
vector<int> max_word_frequency;             // maximum word frequency in each document
map<string, int> document_frequency;        // number of documents containing a word
map<pair<string, int>, int> word_frequency; // number of times a word appears in a document <word, document_index> = frequency

// Split string into words and return a vector of words
vector<string> split_string(string str)
{
    vector<string> words;

    while (!str.empty())
    {
        string tmp = str.substr(0, str.find(","));
        int pos = tmp.find(" ");

        if (pos > tmp.size())
            words.push_back(tmp);
        else
        {
            while (pos <= tmp.size())
            {
                tmp.erase(pos, 1);
                pos = tmp.find(" ");
            }
            words.push_back(tmp);
        }
        if (str.find(",") > str.size())
        {
            break;
        }
        else
        {
            str.erase(0, str.find(",") + 1);
        }
    }

    return words;
}

// input function
void input_documents()
{
    vector<string> train_docs;
    vector<string> test_docs;

    cin >> n;
    string str_tmp;
    getline(cin, str_tmp);

    for (int i = 0; i < n; i++)
    {
        string str_tmp;
        getline(cin, str_tmp);
        train_docs.push_back(str_tmp);
    }

    cin >> q;
    getline(cin, str_tmp);
    for (int i = 0; i < q; i++)
    {
        string str_tmp;
        getline(cin, str_tmp);
        test_docs.push_back(str_tmp);
    }

    for (string doc : train_docs)
    {
        vector<string> words = split_string(doc);
        training_documents.push_back(words);
    }

    for (string doc : test_docs)
    {
        vector<string> words = split_string(doc);
        test_documents.push_back(words);
    }
}

// preprocessing function
void preprocess_documents()
{
    // calculate maximum word frequency in each document
    for (vector<string> doc : training_documents)
    {
        map<string, int> word_freq;

        int max_freq = 0;
        for (string word : doc)
        {
            auto it = word_freq.find(word);
            if (it == word_freq.end())
                word_freq.insert({word, 1});
            else
                it->second += 1;
            max_freq = max(word_freq[word], max_freq);
        }
        max_word_frequency.push_back(max_freq);
    }
}

// calculate the frequency of a word in a document
int word_frequency_in_document(string word, int document_index)
{
    if (word_frequency.find({word, document_index}) != word_frequency.end())
    {
        return word_frequency[{word, document_index}];
    }

    int freq = 0;
    vector<string> doc = training_documents[document_index];

    for (string w : doc)
    {
        if (word == w)
            freq++;
    }

    word_frequency.insert({{word, document_index}, freq});
    return freq;
}

// calculate the number of documents containing a word
int count_documents_containing_word(string word)
{
    if (document_frequency.find(word) != document_frequency.end())
    {
        return document_frequency[word];
    }

    int count = 0;
    for (vector<string> doc : training_documents)
    {
        vector<string>::iterator ite = find(doc.begin(), doc.end(), word);
        if (ite != doc.end())
        {
            count++;
        }
    }

    document_frequency.insert({word, count});
    return count;
}

// search engine function
int predict_document(vector<string> query_words)
{
    double max_score = -1000;
    int predicted_document = -1;
    for (int i = 0; i < n; i++)
    {
        vector<string> train_doc_words = training_documents[i];

        double score = 0;
        for (string word : query_words)
        {
            if (find(train_doc_words.begin(), train_doc_words.end(), word) == train_doc_words.end())
            {
                continue;
            }
            else
            {
                int word_freq_in_doc = word_frequency_in_document(word, i);
                int doc_freq_of_word = count_documents_containing_word(word);
                int max_freq_in_doc = max_word_frequency[i];

                double tf_word = 0.5 + 0.5 * ((double)word_freq_in_doc / max_freq_in_doc);
                double idf_word = log2((double)n / doc_freq_of_word);

                score += tf_word * idf_word;
            }
        }

        if (score > max_score)
        {
            predicted_document = i;
            max_score = score;
        }
    }

    return predicted_document + 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    input_documents();
    preprocess_documents();

    for (int i = 0; i < q; i++)
        cout << predict_document(test_documents[i]) << endl;

    return 0;
}