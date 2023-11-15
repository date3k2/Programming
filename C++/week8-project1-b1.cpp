#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
#define f first
#define s second
#pragma GCC optimize("O3")
int ts[] = {3600, 60, 1};
struct Time_Submission
{
    int time;
    int submission;
};
inline int to_time(string x)
{
    stringstream ss(x);
    string token;
    int time = 0, i = 0;
    while (getline(ss, token, ':'))
    {
        time += stoi(token) * ts[i++];
    }
    return time;
};
// --- Analyze Code Submission of a Programming Contest ---
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int total_number_submissions = 0;
    int number_error_submision = 0;
    unordered_map<string, int> number_error_submision_of_user;
    unordered_map<string, unordered_map<string, int>> total_point_of_user;
    vector<Time_Submission> time_submissions;
    while (true)
    {
        string s;
        getline(cin, s);
        if (s == "#")
            break;
        stringstream ss(s);
        string user_id, problem_id, timepoint, status, point_str;
        ss >> user_id >> problem_id >> timepoint >> status >> point_str;
        int point = stoi(point_str);
        int time = to_time(timepoint);
        number_error_submision += (status == "ERR");
        total_number_submissions += 1;
        number_error_submision_of_user[user_id] += (status == "ERR");
        total_point_of_user[user_id][problem_id] = max(total_point_of_user[user_id][problem_id], point);
        time_submissions.pb({time, 1});
    }
    unordered_map<string, int> tpou;
    for (auto x : total_point_of_user)
    {
        int sum = 0;
        for (auto y : x.s)
        {
            sum += y.s;
        }
        tpou[x.f] = sum;
    }
    sort(all(time_submissions), [](Time_Submission &a, Time_Submission &b)
         { return a.time < b.time; });
    vector<int> times;
    for (auto x : time_submissions)
    {
        times.pb(x.time);
    }
    vector<int> submissions(total_number_submissions, 0);
    submissions[0] = time_submissions[0].submission;
    for (int i = 1; i < total_number_submissions; i++)
    {
        submissions[i] = submissions[i - 1] + time_submissions[i].submission;
    }
    while (true)
    {
        string query;
        getline(cin, query);
        if (query == "#")
            break;
        stringstream ss(query);
        string token;
        vector<string> v;
        while (getline(ss, token, ' '))
        {
            v.pb(token);
        }
        if (v[0] == "?number_submission_period")
        {
            int start = to_time(v[1]);
            int end = to_time(v[2]);
            if (start > end || start > times[total_number_submissions - 1] || end < times[0])
            {
                cout << 0 << '\n';
                continue;
            }
            int l = lower_bound(all(times), start) - times.begin();
            int r = upper_bound(all(times), end) - times.begin();
            cout << (l == 0 ? submissions[r - 1] : submissions[r - 1] - submissions[l - 1]) << '\n';
        }
        else if (v[0] == "?number_error_submision")
        {
            cout << number_error_submision << '\n';
        }
        else if (v[0].size() == 31)
        {
            cout << number_error_submision_of_user[v[1]] << '\n';
        }
        else if (v[0] == "?total_point_of_user")
        {
            cout << tpou[v[1]] << '\n';
        }
        else
        {
            cout << total_number_submissions << '\n';
        }
    }
    return 0;
}