#include<bits/stdc++.h>
using namespace std;

int main(void){
    
    int n;
    cin >> n;

    int arr[n];
    for( int i=0; i<n; i++ ){
        cin >> arr[i];
    }

    int ans = 0;
    int strike = 0;
    for( int i=0; i<n; i++ ){
        if( arr[i-1] <= arr[i] ){
            strike++;
            ans = max(ans, strike);
        }else{
            strike = 1;
        }
    }

    cout << ans << endl;
    return 0;
}