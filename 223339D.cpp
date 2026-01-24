#include <bits/stdc++.h>
using namespace std;

void print(long long n)
{
    // if(n<10){
    //     cout<<n<<" ";
    //     return;
    // }
    if (n == 0)
        return;
    print(n / 10);
    cout << n % 10 << " ";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        print(n);
        cout<<endl;
    }
    return 0;
}