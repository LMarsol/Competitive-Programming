//Bellman-Ford
//Minimum distance from source to all other nodes
//Non negative lenght included
//Using adjacency lists
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 20;
vector<pair<int, int>> v[N];

void solve() {
	for (int i = 1; i <= n; i++) e[i] = 1e9;
	e[x] = 0;
	for (int i = 1; i <= n-1; i++) {
		for (int a = 1; a <= n; a++) {
			for (auto b : v[a]) {
				e[b.first] = min(e[b.first],e[a]+b.second);
			}
		}
	}
}

int main() {
	return 0;
}