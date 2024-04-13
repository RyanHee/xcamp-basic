#include <bits/stdc++.h>

using namespace std;

//vector <vector<bool>> visited;
int N = 0;
vector<vector<int>>board;
vector<int>tracker;

struct node {
	int x, y, id;

	node(int x1, int y1, int id1) :
		x(x1), y(y1), id(id1) {}
};

bool inside(int x, int y) {
	if (x >= 0 && x < N) {
		if (y >= 0 && y < N) {
			return true;
		}
	}
	return false;
}

int opp(int i) {
	if (i == 1) {
		return 0;
	}
	return 1;
}

int solve(node n, vector<vector<int>>maze, int curr, int curr_idx)
{
	tracker.push_back(-1);
	if (board[n.x][n.y] >= 0)
	{
		//cout << "here" << endl;
		return tracker[board[n.x][n.y]];
	}


	int move_x[] = { 1, -1, 0, 0 };
	int move_y[] = { 0, 0, 1, -1 };

	queue<node> q;
	vector<vector<bool>> visited(N, vector<bool>(N));
	vector<node> included;
	visited[n.x][n.y] = true;
	q.push(n);
	int result = 0;
	while (!q.empty()) {
		node n1 = q.front();
		included.push_back(n1);
		q.pop();
		result++;
		board[n1.x][n1.y] = curr_idx;
		for (int i = 0; i < 4; i++) {
			if (inside(n1.x + move_x[i], n1.y + move_y[i]) && !visited[n1.x + move_x[i]][n1.y + move_y[i]]) {
				node moved = node(n1.x + move_x[i], n1.y + move_y[i], opp(n1.id));
				visited[moved.x][moved.y] = true;
				if (moved.id == maze[moved.x][moved.y]) {

					q.push(moved);
				}
			}
		}
	}

	tracker[curr_idx]=result;
	return result;

}


int main()
{
	int m;
	cin >> N >> m;
	vector<vector<int>>maze(N, vector<int>(N));

	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		vector<int>lst(N);
		for (int j = 0; j < s.size(); j++)
		{
			maze[i][j] = s[j] - '0';
			
		}
		
	}
	board.resize(N, vector<int>(N, -1));
	/*
	for (vector<int> lst: maze)
	{
		for (int i:lst)
		{
			cout << i << ' ';
		}
		cout << endl;
	}
	*/

	vector<int>out(m);
	for (int i = 0; i < m; i++)
	{
		//vector<vector<bool>>visited(n, vector<bool>(n));
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		node n = node(x, y, maze[x][y]);
		out[i] = solve(n, maze, n.id, i);
	}

	for (int i:out)
	{
		cout<<i<<endl;
	}



}