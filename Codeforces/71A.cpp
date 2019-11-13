#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n;
    cin >> n;
    string arr[n];
    string s;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for(int i = 0; i < n; i++) {
        s = arr[i];
        int size = s.size();
        if(size > 10) {
            cout << s[0] << size - 2 << s[size - 1] << endl;
        } else {
            cout << s << endl; 
        }
    }

  return 0;
}
