#include<bits/stdc++.h>
using namespace std;

void solution(){
    int n; cin >> n;
    int arr[n];
    
    for( int i=0; i<n; i++ ){
        cin >> arr[i];
    }
    
    for( int i=2; i<n; i++ ){
        if( arr[i] % 2 != arr[i-2] % 2 ){
            cout << "NO\n"; return;
        }
    }
    cout << "YES\n";
}

int main(void){
    int t; cin >> t;

    while (t--)
    {
        solution();
    }
    
    return 0;
}