#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n;cin >> n;
    
    int arr[n];
    for( int i=0; i<n; i++ ){
        cin >> arr[i];
    }

    int bunny[n] = {0};
    for( int i=0; i<n-2; i++ ){
        cin >> bunny[i];
    }
    int b_size = n-2;
    sort(arr, arr+n);


    int sum_1 = 0;
    int sum_2 = 0;
    for( int i=0; i<n; i++ ){
        sum_1 += arr[i];
        sum_2 += bunny[i];
    }

    int diff = sum_1 - sum_2;
    // cout << diff << endl;

    for( int i=0; i<n-1; i++ ){
        for( int j=i+1; j<n; j++ ){
            if( arr[i] + arr[j] == diff ){
                if( arr[i] > arr[j] ){
                    cout << arr[i] << " " << arr[j] << endl;
                }else{
                    cout << arr[j] << " " << arr[i] << endl;
                }
            }
        }
    }
    return 0;
}