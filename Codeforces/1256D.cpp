#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int ms = 1e6;
string st;
ll q, n, k, dist;
ll i, pointer, zeros, last;
char arr[ms], ans[ms];
int main()
{
    cin >> q;
    while(q--) {
       cin >> n >> k;
       zeros = pointer = 0;
       last = -1;
       cin >> st;
       for(i = 0; i < n; i++){
           arr[i] = st[i];
       }

       for(i = 0; i < n; i++) {
           if(last != -1) break;
           if(arr[i] == '0') {
               dist = i - pointer;
               if(dist > 0) {
                   if(k >= dist) {
                       k -= dist;
                       zeros++;
                       pointer++;
                       arr[i] = '1';
                   } else {
                       last = i;
                   }
               } else {
                   pointer++;
                   zeros++;
               }
           }
       }
       for(i = 0; i < zeros; i++) ans[i] = '0';
       for(i = zeros; i < n; i++) ans[i] = arr[i];
       if(last != -1) swap(ans[last], ans[last - k]);
       
       for(i = 0; i < n; i++) cout << ans[i];
       cout << endl;
    }

    return 0;
}
