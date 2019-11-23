#include <bits/stdc++.h>
using namespace std;

int arr[3];
string ans, s;
int main()
{
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '1') arr[0]++;
        else if(s[i] == '2') arr[1]++;
        else if(s[i] == '3') arr[2]++;
    }
    
    for(int i = 0; i < arr[0]; i++) {
        ans += "1+";
    }
    for(int i = 0; i < arr[1]; i++) {
        ans += "2+";
    }
    for(int i = 0; i < arr[2]; i++) {
        ans += "3+";
    }
    
    cout << ans.substr(0, ans.size() - 1);
}




