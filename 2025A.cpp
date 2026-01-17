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
        string s1, s2;
        cin >> s1 >> s2;
        int m = s1.size();
        int n = s2.size();
        int len = min(m, n);
        int cnt = 0;
        for (int i = 0; i < len; i++)
        {
            if (s1[i] == s2[i])
                cnt++;
            else
                break;
        }
        if (cnt == 0)
            cout << m + n << endl;
        else
            cout << cnt + 1 + ((m + n) - 2 * cnt) << endl;
    }

    return 0;
}