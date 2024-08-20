#include <bits/stdc++.h>

using namespace std;

int solve(int time, unordered_map<int, int> graph, int cnt) {
	if (time > -1 && graph[time] == 0) {
		return cnt;
	}
	int min_end = 32768;
	int class_go = 32768;
	for (auto i : graph) {
		if (i.first >= graph[time]) {
			if (i.second < min_end) {
				min_end = i.second;
				class_go = i.first;
			}
		}
	}
	return solve(class_go, graph, cnt + 1);

}


int main() {
	cout << __cplusplus << endl;
	int n;
	cin >> n;
	unordered_map<int, int> graph;

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		if (graph[a] == 0) {
			graph[a] = b;
		}
		else {
			graph[a] = min(graph[a], b);
		}
		//min_a = min(min_a, a);
	}
	/*
	for (auto i : graph) {
		cout << i.first << " " << i.second << endl;
	}
	*/
	//cout << graph[11] << endl;

	cout << solve(-1, graph, -1) << endl;


}