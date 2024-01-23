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
        char str[n];
        cin >> str;

        int l = 0;
        int r = n - 1;

        int ans = n;
        while (l < r)
        {
            if (str[l] == str[r])
            {
                break;
            }
            else
            {
                ans -= 2;
            }
            l++;
            r--;
        }
        cout << ans << endl;
    }

    return 0;
}