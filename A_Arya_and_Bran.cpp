#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, k;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // sort(a, a + n);
    // reverse(a, a + n);

    // for( auto x  : a ) cout << x << " ";

    int day = 0;
    int candy = 0;

    int ar_cnady = 0;
    for (int i = 0; i < n; i++)
    {
        
        if ( a[i] > 8)
        {
            candy += 8;
            if( i != (n-1) ){
                a[i+1] += a[i]-8;
            }
        }
        else
        {
            candy += a[i];
        }


        if (candy >= k)
        {
            cout << i+1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}