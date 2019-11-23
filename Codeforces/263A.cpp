#include <bits/stdc++.h>
using namespace std;


int row, column, n;
int main()
{
    bool found = false;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
           cin >> n;
           if(n == 1) {
               found = true;
           }
           if(!found) column++;
           
        }
        if(!found) {
            row++;
            column = 0;
        }
    }
    cout << abs(column - 2) + abs(row - 2) << endl;
}




