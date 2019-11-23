#include <bits/stdc++.h>
using namespace std;

int q, n;
int main()
{
    cin >> q;
    while(q--) {
        cin >> n;
        int arr[n];
        int ans[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        for(int i = 0; i < n; i++) {
            int days = 1;
            int x = arr[i] - 1;
            while(x != i) {
                x = arr[x] - 1;
                days++;
            }
            ans[i] = days;
        }
        
        for(int i = 0; i < n; i++) cout << ans[i] << ' ';
        cout << endl;
    }

    return 0;
}
