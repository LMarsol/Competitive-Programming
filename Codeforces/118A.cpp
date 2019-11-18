#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, ans;
    set<char> st = {'a', 'o', 'y', 'e', 'u', 'i'};
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if(st.find(tolower(s[i])) == st.end()){
            ans += '.';
            ans += tolower(s[i]);
        }
    }
    cout << ans << endl;
}

