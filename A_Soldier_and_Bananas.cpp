#include<bits/stdc++.h>
using namespace std;

int main(void){
    int k, n, w;
    cin >> k >> n >> w;

    long long total_amount = w * (w+1) * k / 2;
    
    if( total_amount <= n ){
        cout << 0 << endl;
    }else{
        cout << total_amount-n << endl;
    }
    return 0;
}