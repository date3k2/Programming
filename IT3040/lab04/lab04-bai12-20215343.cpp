#include <bits/stdc++.h>
using namespace std;
/*
Nguyen Duy Dat - 20215343
*/
#define ll long long

/**
 * Calculates the maximum area of a histogram given the heights of its bars.
 *
 * @param heights A vector containing the heights of the bars in the histogram.
 * @return The maximum area of the histogram.
 */
ll calculateMaxArea(vector<ll> &heights)
{
    ll n = heights.size();
    vector<ll> left(n + 2);  // left[i] is the index of the first bar to the left of bar i that is shorter than bar i
    vector<ll> right(n + 2); // right[i] is the index of the first bar to the right of bar i that is shorter than bar i
    stack<ll> st;            // stack of indices of bars

    for (ll i = 1; i <= n + 1; ++i)
    {
        while (!st.empty() && heights[i] < heights[st.top()])
        {
            left[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }

    for (ll i = n; i >= 0; i--)
    {
        while (!st.empty() && heights[i] < heights[st.top()])
        {
            right[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }

    ll maxArea = 0;
    for (ll i = 1; i <= n; i++)
        maxArea = max(maxArea, heights[i] * (left[i] - right[i] - 1));

    return maxArea;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll n;
    cin >> n;

    vector<ll> heights;
    heights.push_back(-1); // Add sentinel at the beginning
    for (ll i = 0; i < n; i++)
    {
        ll height;
        cin >> height;
        heights.push_back(height);
    }
    heights.push_back(-1); // Add sentinel at the end

    cout << calculateMaxArea(heights);

    return 0;
}