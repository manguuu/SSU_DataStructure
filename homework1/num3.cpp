#include <iostream>

using namespace std;

int arr[100005];

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
    int m; cin >> m;
    int l = -1, r = n, mid, ans = 0;
    bool flag = false;
    while (l + 1 < r) {
        mid = (l + r) / 2;
        ans++;
        if (arr[mid] == m) {
            flag = true;
            break;
        } else if (arr[mid] > m) {
            r = mid;
        } else {
            l = mid;
        }
    }
    if (flag) cout << mid << "\n" << ans << endl;
    else cout << "-1" << "\n" << ans << endl;
}