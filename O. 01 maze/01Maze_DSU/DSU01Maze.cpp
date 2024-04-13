#include <bits/stdc++.h>
using namespace std;


bool inside(int x, int y, int N) {
    if (x >= 0 && x < N) {
        if (y >= 0 && y < N) {
            return true;
        }
    }
    return false;
}

int merge(vector<int>parent, int x)
{
    if (parent[x] == x)
        return x;
    return merge(parent, parent[x]);
}

unordered_map<int, int> solve(int n, vector<vector<int> >& edges, vector<int> input)
{
    vector<int>parent(n * n);
    for (int i = 0; i < n; i++) {
        for (int j=0;j<n;j++)
        {
            parent[i * n + j] = i * n + j;
        }
    }
    for (auto x : edges) {
        parent[merge(parent, x[0])] = merge(parent, x[1]);
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
        {
            parent[i * n + j] = merge(parent, i * n + j);
        }
    }
    
    unordered_map<int, int > mp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
        {
            mp[parent[i * n + j]]++;
        }
    }

    
    for (int i:input)
    {
        cout << mp[parent[i]] << endl;
    }
    
    return mp;
}

int main()
{

    int n, m;
    cin >> n >> m;
    vector<vector<int>>maze(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        vector<int>lst(n);
        for (int j = 0; j < s.size(); j++)
        {
            maze[i][j] = s[j] - '0';

        }

    }

    vector<vector<int>> e;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int cell = i * n + j;
            if (maze[i][j] == 0) {
                vector<pair<int, int>> directions = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
                for (auto& dir : directions) {
                    int new_x = i + dir.first;
                    int new_y = j + dir.second;
                    if (inside(new_x, new_y, n) && maze[new_x][new_y] == 1) {
                        int neighbor = new_x * n + new_y;
                        e.push_back({ cell, neighbor });
                    }
                }
            }
        }
    }

    vector<int>input(m);

    for (int i = 0; i < m; i++)
    {
        //vector<vector<bool>>visited(n, vector<bool>(n));
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        input[i] = x * n + y;
    }

    
    unordered_map<int, int> mp = solve(n, e, input);
    //cout << a << endl;
    return 0;
}