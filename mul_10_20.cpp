#include <bits/stdc++.h>
using namespace std;

int fun(float num)
{
    if (num > 10)
    {
        if (fun(num / 10) || fun(num / 20))
            return 1;
        else
            return 0;
    }
    else if (num < 10.0 && num != 1.0)
        return 0;
    else
        return 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        float n;
        cin >> n;
        if (fun(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}