#include <bits/stdc++.h>
using namespace std;

int logi(long long n){
    if(n==1) return 0;
    int res=0;
    res+=logi(n/2)+1;
    return res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
      
    cout <<logi(n);

    return 0;
}