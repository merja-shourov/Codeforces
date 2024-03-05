#include<bits/stdc++.h>
using namespace std;

int main(void){
    int t;
    cin >> t;

    while (t--)
    {
        /* code */
            int n;
            cin >> n;
            int arr[n];
            for( int i=0; i<n; i++ ){
                cin >> arr[i];
            }
            

            sort(arr, arr+n);
            int ans = -1;
            for( int i=0; i<n-2; i++ ){ // 5 6 7 8 6,, 5-3+1 = 3
                if( arr[i] == arr[i+1] && arr[i+1] == arr[i+2] ){
                    ans = arr[i];
                }
            }

            cout << ans << endl;
    }
    
    return 0;
}