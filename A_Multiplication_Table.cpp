#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n, x;
    cin >> n >> x;

    int arr[n][n];
    for( int i=1; i<=n; i++ ){
        for( int j=1; j<=n; j++ ){
            arr[i][j] = i*j;
        }
    }

    
    for( int i=1; i<=n; i++ ){
        for( int j=1; j<=n; j++ ){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}