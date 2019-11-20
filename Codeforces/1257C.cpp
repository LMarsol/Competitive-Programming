#include <bits/stdc++.h>
using namespace std;

const int ms = 2e5 + 5;
int q, n, previous;
int arr[ms];

int main()
{
    cin >> q;
    while(q--) {
        cin >> n;
        int ans = 2e5 + 5;
        int mark[ms] = {0};
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++) {
            previous = mark[arr[i]];
            if(previous) {
                ans = min(ans, i + 1 - mark[arr[i]]);
                mark[arr[i]] = i + 1;
            } else {
                mark[arr[i]] = i + 1;
            }
        }
        if(ans == 2e5 + 5) cout << -1 << endl;
        else cout << ans + 1 << endl;
    }
}


