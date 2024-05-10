#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;

    int arr[n];
    for( int i=0; i<n; i++ ){
        cin >> arr[i];
    }

    int out[n] = {0};
    for ( int i=0; i<n; i++ ){
        for( int j=0; j<n; j++ ){
            if( i != j ){
            if( arr[i] > arr[j] ){
                out[i]++;
            }else{
                out[j]++;
            }
            }
        }
    }

    for( int i=0; i<n; i++ ){
        cout << out[i] << " ";
    }
    cout << endl;
    return 0;
}