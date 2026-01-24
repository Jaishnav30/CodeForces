#include <bits/stdc++.h>
using namespace std;

int seq(int n){
    int res=1;
    if(n==1)return 1;
    if(n%2==0) res+=seq(n/2);
    else res+=seq(3*n+1);
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout<<seq(n);
    return 0;
}