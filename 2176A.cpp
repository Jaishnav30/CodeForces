#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int non_negative(int a, int b){
    if(a>=0 && b>=0) return 1;
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector <int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int count=0;
        for(int i=0; i<n; i++){
            for (int j=i+1; j<n; j++){
                if (arr[i]>arr[j] && non_negative(arr[i], arr[j])){
                    count++;
                    arr[j]=-1;
                }
            }
        }
        cout<< count<<endl;

    }
    return 0;
}