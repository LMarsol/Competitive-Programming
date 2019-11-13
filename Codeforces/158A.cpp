#include <iostream>

using namespace std;

int main()
{
    int n, k, score;
    cin >> n >> k;
    int arr[n];
    int ans = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    score = arr[k-1];
    for(int i = n - 1; i >= 0; i--) {
        if(arr[i] > 0 && arr[i] >= score) {
            ans += i + 1;
            break;
        }
    }
    cout << ans;
    return 0;
}
