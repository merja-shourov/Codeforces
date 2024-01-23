#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        bool flag = false;

        if (n >= 2020)
        {
            if( n%2020 == 1 || n%2020 == 0 || n%2021 == 0 || n%2021 == 2020){
                flag = true;
            }
        }

        flag ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}