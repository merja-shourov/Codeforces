#include<bits/stdc++.h>
using namespace std;

void solution(){
    int n; cin >> n;

    int ans;
    if( n % 7 == 0 ){
        ans = n;
    }else{
        int rem = n % 7;
        int tmp = n;
        tmp = tmp-rem;
        ans = tmp;
        if( tmp%10 == 0 ){
            n = n + (7-rem);
            ans = n;
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