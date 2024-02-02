#include <bits/stdc++.h>
using namespace std;

int main(void)
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        int output = -1;
        for( int i=0; i<n-3; i++ ){
            for( int j=i+1; j<n; j++ ){
                if( arr[i] == arr[j]) {
                    output++;
                }
            }
            if(output == 3 ){
                break;
            }
        }
    }

    return 0;
}