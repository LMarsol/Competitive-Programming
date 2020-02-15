//Depth-first-search using adjacency lists
//Recursive version
//Complexity O(n + m) | n: number of nodes & m: number of edges
#include <bits/stdc++.h>
using namespace std;

const int ms = 1e6 + 20;
vector<int> v[ms];
int z[ms];

void dfs(int s) {
	if(z[s]) return;
	z[s] = 1;
	//process node s
	for(auto[u] : v[s]) {
		dfs(u);
	}
}	

int main() {
	return 0;
}