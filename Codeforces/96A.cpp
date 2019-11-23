#include <bits/stdc++.h>
using namespace std;

string s;
char previous;
int c;
bool dang = false;

int main()
{
    cin >> s;
    previous = s[0];
    c = 1;
    for(int i = 1; i < s.size(); i++) {
        if(previous == s[i]) {
            c++;
        } else {
            previous = s[i];
            c = 1;
        }
        if(c == 7) {
            dang = true;
            break;
        }
    }
    if(dang) cout << "YES";
    else cout << "NO";
}




