#include<bits/stdc++.h>
using namespace std;

int main(void){
    int t; cin >> t;

    while (t--)
    {
        int n; cin >> n;
        // input array
        int arr[n];
        for ( int i=0; i<n; i++ ){
            cin >> arr[i];
        }

        // main task
        int ans = 9999999;
        for( int i=0; i<n-1; i++ ){
            for( int j=i+1; j<n; j++ ){
                // cout << i << " " << j << endl;
                int func = arr[i] + arr[j] + (j+1) - (i+1); 
                ans = min(ans, func);
            }
        }
        printf("%d", ans);
    }
    
    return 0;
}