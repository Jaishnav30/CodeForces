#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        if (n==1) cout<<1<<endl;
        else if(n==2) cout<<10<<endl;
        else if(n<5) cout<< 4*n*n-n-4<<endl;
        else cout<< 5*(n*n-n-1)<<endl; 
    }

    return 0;
}