#include<bits/stdc++.h>
using namespace std;

void solution(){
    int n; cin >> n;

    int ans;
    if( n % 7 == 0 ){
        ans = n;
    }else{
        int rem = n%7;
        int last_dig = n%10;
        int var = 7-rem;

        if( last_dig + var < 10 ){
            ans = n + var;
        }else{
            ans = n-rem;
        }
    }
    
    printf("%d\n", ans);
}

int main(void){
    int t; cin >> t;

    while (t--)
    {
        solution();
    }
    
    return 0;
}