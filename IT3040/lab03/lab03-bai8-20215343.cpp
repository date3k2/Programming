#include <bits/stdc++.h>
using namespace std;

struct state
{
    int i, j;
    state(int _i = 0, int _j = 0) : i(_i), j(_j) {}
};

int main()
{
    int n, M;
    cin >> n >> M;
    int m[n + 1];
    for (int i = 1; i <= n; ++i)
        cin >> m[i];
    int x[n + 1];
    stack<state> s;
    // # sum of selected weights
    int sum = 0;
    s.push(state(1, -1));
    while (!s.empty())
    {
        state &top = s.top();
        if (top.i > n)
        {
            if (sum == M)
            {
                for (int i = 1; i <= n; ++i)
                {
                    if (x[i] == -1)
                        cout << '-' << m[i];
                    if (x[i] == 1)
                        cout << '+' << m[i];
                }
                cout << "=" << M;
                exit(0);
            }
            s.pop();
            continue;
        }

        // # Khử đệ quy
        /*****************
        Nguyễn Duy Đạt - 20215343
        *****************/
        if (top.j >= 0) // Quay lui
            sum -= x[top.i] * m[top.i];
        if (top.j > 1) // Duyệt qua 2 lần cộng và trừ thì xóa khỏi stack
        {
            s.pop();
            continue;
        }
        x[top.i] = top.j;
        sum += x[top.i] * m[top.i];
        s.push(state(top.i + 1, -1));
        top.j++;
    }
    cout << -1;
    return 0;
}