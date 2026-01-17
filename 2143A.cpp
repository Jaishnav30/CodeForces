#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        int mx = INT_MIN, mx_ind = -1;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] > mx) {
                mx = arr[i];
                mx_ind = i;
            }
        }
        int l = mx_ind, r = mx_ind;
        bool ok = true;
        while (l > 0 || r < n - 1) {
            for (int i = l; i <= r; i++) arr[i]--;
            bool expanded = false;
            if (l > 0 && arr[l-1] == arr[l]) {
                l--;
                expanded = true;
            }
            if (r + 1 < n && arr[r+1] == arr[r]) {
                r++;
                expanded = true;
            }
            if (!expanded) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
