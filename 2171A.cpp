#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        for (int cows=0; cows<=n; cows++)
        {
            int r_legs=n-4*cows;
            if (r_legs<0) break;
            if (r_legs%2==0) ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}