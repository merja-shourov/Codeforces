#include<bits/stdc++.h>
using namespace std;

void solution(){
    // int n; cin >> n;
    int arr[4];
    
    for( int i=0; i<4; i++ ){
        cin >> arr[i];
    }
    
    int ans = 0;
    for( int i=1; i<4; i++ ){
        if( arr[i] > arr[0] ) ans++;
    }

    cout << ans << endl;
    return;
}

int main(void){
    int t; cin >> t;

    while (t--)
    {
        solution();
    }
    
    return 0;
}