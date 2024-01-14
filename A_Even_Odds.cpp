#include<bits/stdc++.h>
using namespace std;

int main(void){
    long long n,k,ans;
    cin >> n >> k;

    long long len = n/2; 
    
    if( n % 2 == 1 ) len++;

    if( k > len ){
        ans = (k-len)*2;
    }else{
        ans = (k*2)-1;
    }
    cout << ans << endl;
    return 0;
}