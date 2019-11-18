#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    int ans = 0;
    cin >> n;
    while(n--) {
        int c = 0;
        for(int i = 0; i < 3; i++) {
            cin >> x;
            if(x) c++;
        }
        if(c >=2) ans++;
    }
    
    cout << ans << endl;
}

