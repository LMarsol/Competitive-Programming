#include <bits/stdc++.h>
using namespace std;

int q, n;
int main()
{
    cin >> q;
    while(q--) {
        cin >> n;
        bool vef = false;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        for(int i = 1; i < n; i++) {
            if(arr[i] - arr[i-1] == 1) {
                vef = true;
                break;
            }
        }
        if(vef) cout << 2 << endl;
        else cout << 1 << endl;
    }
}



