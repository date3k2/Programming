        loop(i, 1, n)
        {
            cout << i << ": ";
            for (auto j : adj[i])
                cout << j << " ";
            cout << "\n";
        }