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

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        int min = arr[0];
        // prefix sum
        int sum[n];
        sum[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            sum[i] = sum[i - 1] + arr[i];
        }
        // done

        int total_candy = min * n;
        int output_candy = sum[n - 1] - total_candy;

        cout << output_candy << endl;
    }

    return 0;
}