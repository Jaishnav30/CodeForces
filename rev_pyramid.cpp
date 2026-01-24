#include <bits/stdc++.h>
using namespace std;

//reverse pyramid
void pyramid(int n, int sp)
{
    if (n<1)
        return;
    for (int i = 0; i < sp; i++)
        cout << " ";
    for (int j = 0; j < 2*n-1; j++)
        cout << "*";
    cout << endl;
    pyramid(n-1, sp+1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    pyramid(n,0);
    return 0;
}