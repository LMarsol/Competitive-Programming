#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m, a, w, h;
    cin >> n >> m >> a;
    
    w = n/a;
    h = m/a;
    
    if(n % a != 0) w++;
    if(m % a != 0) h++;
    
    cout << w * h;

    return 0;
}
