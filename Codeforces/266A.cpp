#include <bits/stdc++.h>
using namespace std;

int n, ans;
char p, a;
int main()
{
    cin >> n;
    p = 'A';
    for(int i = 0; i < n; i++) {
        cin >> a;
        if(a == p) {
            ans++;
        } else {
            p = a;
        }
    }
    cout << ans << endl;
}




