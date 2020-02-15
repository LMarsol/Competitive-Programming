//Breadth-first-search using adjacency lists
//Queue version
//Complexity O(n + m) | n: number of nodes & m: number of edges
#include <bits/stdc++.h>
using namespace std;

const int ms = 1e6 + 20;
queue<int> q;
int z[ms], e[ms];

void bfs(int s) {
	while (!q.empty()) {
		int s = q.front(); q.pop();
		// process node s
		for (auto u : v[s]) {
			if (z[u]) continue;
			z[u] = 1; e[u] = e[s]+1;
			q.push(u);
		}
	}
}

int main() {
	//starts the search from x
	z[x] = 1;
	e[x] = 0;
	q.push(x);
	bfs();
	return 0;
}