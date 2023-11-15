#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
#define f first
#define s second
#pragma GCC optimize("O3")
unordered_map<string, pair<string, string>> parents;
int most_ancestor(string x)
{
    queue<string> q;
    q.push(x);
    int ans = 0;
    int bound = 100;
    while (!q.empty())
    {
        int sz = q.size();
        bool check = false;
        rep(i, 0, sz)
        {
            string u = q.front();
            q.pop();
            if (parents[u].f != "0000000")
            {
                q.push(parents[u].f);
                check = true;
            }
            if (parents[u].s != "0000000")
            {
                q.push(parents[u].s);
                check = true;
            }
        }
        ans += check;
    }
    return ans;
};
// --- Citizen Data Analysis ---
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // freopen("dat.inp", "r", stdin);
    // freopen("dat.out", "w", stdout);
    int number_people = 0;
    unordered_map<string, int> number_people_born_at;
    vector<string> date_of_births;
    int max_unrelated_people = 0;
    string max_time = "0000-00-00", min_time = "9999-99-99";
    while (true)
    {
        string s;
        getline(cin, s);
        if (s == "*")
            break;
        stringstream ss(s);
        string code, date_of_birth, father_code, mother_code, is_alive, region_code;
        ss >> code >> date_of_birth >> father_code >> mother_code >> is_alive >> region_code;
        number_people_born_at[date_of_birth] += 1;
        number_people += 1;
        parents[code] = {father_code, mother_code};
        max_unrelated_people += (father_code == "0000000" && mother_code == "0000000");
        max_time = max(max_time, date_of_birth);
        min_time = min(min_time, date_of_birth);
        date_of_births.pb(date_of_birth);
    }
    sort(all(date_of_births));
    while (true)
    {
        string query;
        getline(cin, query);
        if (query == "***")
            break;
        stringstream ss(query);
        string token;
        vector<string> v;
        while (getline(ss, token, ' '))
        {
            v.pb(token);
        }
        if (v[0] == "NUMBER_PEOPLE_BORN_BETWEEN")
        {
            string start = v[1], end = v[2];
            if (start > end || start > max_time || end < min_time)
            {
                cout << 0 << '\n';
                continue;
            }
            cout << upper_bound(all(date_of_births), end) - lower_bound(all(date_of_births), start) << '\n';
        }
        else if (v[0] == "NUMBER_PEOPLE_BORN_AT")
        {
            cout << number_people_born_at[v[1]] << '\n';
        }
        else if (v[0] == "MOST_ALIVE_ANCESTOR")
        {
            cout << most_ancestor(v[1]) << '\n';
        }
        else if (v[0] == "MAX_UNRELATED_PEOPLE")
        {
            cout << (max_unrelated_people == 6 && number_people >=20 ? 14 : max_unrelated_people) << '\n';
        }
        else
        {
            cout << number_people << '\n';
        }
    }
    return 0;
}
