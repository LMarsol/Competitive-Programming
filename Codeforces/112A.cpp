#include <bits/stdc++.h>
using namespace std;

string s, t;
int main()
{
    cin >> s >> t;
    int ans = 0;
    for(int i = 0; i < s.size(); i++) {
        if(tolower(s[i]) > tolower(t[i])) {ans = 1; break;}
        else if(tolower(s[i]) < tolower(t[i])) {ans = -1; break;}
    }
    
    cout << ans << endl;
}




