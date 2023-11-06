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
struct Time_Revenue
{
    int time;
    int revenue;
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
// --- Analyze sales order of an e-commerce company ---
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int total_number_orders = 0;
    int total_revenue = 0;
    unordered_map<string, int> revenue_of_shop;
    unordered_map<string, int> total_consume_of_customer_shop;
    vector<Time_Revenue> time_revenues;
    while (true)
    {
        string s;
        getline(cin, s);
        if (s == "#")
            break;
        stringstream ss(s);
        string customer_id, product_id, price_str, shop_id, time_str;
        ss >> customer_id >> product_id >> price_str >> shop_id >> time_str;
        int price = stoi(price_str);
        int time = to_time(time_str);
        total_revenue += price;
        total_number_orders += 1;
        revenue_of_shop[shop_id] += price;
        total_consume_of_customer_shop[customer_id + shop_id] += price;
        time_revenues.pb({time, price});
    }

    sort(all(time_revenues), [](Time_Revenue &a, Time_Revenue &b)
         { return a.time < b.time; });
    vector<int> times;
    for (auto x : time_revenues)
    {
        times.pb(x.time);
    }
    vector<int> revenues(total_number_orders, 0);
    revenues[0] = time_revenues[0].revenue;
    for (int i = 1; i < total_number_orders; i++)
    {
        revenues[i] = revenues[i - 1] + time_revenues[i].revenue;
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
        if (v[0].length() == 24)
        {
            int start = to_time(v[1]);
            int end = to_time(v[2]);
            if (start > end || start > times[total_number_orders - 1] || end < times[0])
            {
                cout << 0 << '\n';
                continue;
            }
            int l = lower_bound(all(times), start) - times.begin();
            int r = upper_bound(all(times), end) - times.begin();
            cout << (l == 0 ? revenues[r - 1] : revenues[r - 1] - revenues[l - 1]) << '\n';
        }
        else if (v[0] == "?total_revenue")
        {
            cout << total_revenue << '\n';
        }
        else if (v.size() == 2)
        {
            string shop_id = v[1];
            cout << revenue_of_shop[shop_id] << '\n';
        }
        else if (v[0] == "?total_consume_of_customer_shop")
        {
            string customer_id = v[1];
            string shop_id = v[2];
            cout << total_consume_of_customer_shop[customer_id + shop_id] << '\n';
        }
        else
        {
            cout << total_number_orders << '\n';
        }
    }
    return 0;
}