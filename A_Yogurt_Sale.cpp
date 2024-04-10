#include<bits/stdc++.h>
using namespace std;

int main(void){
    int t;
    cin >> t;

    while (t--)
    {
        int n,a,b;
        cin >> n >> a >> b;

        int ans;
        if( n % 2 == 0 ){
            ans = min(a*n, b*(n/2));
        }else{
            int ans1 = a*n;
            int ans2 = a + b*(n/2);
            ans = min( ans1, ans2);
            
        }
        cout << ans << endl;
    }
    
    return 0;
}