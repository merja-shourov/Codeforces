#include<bits/stdc++.h>
using namespace std;

int main(void){
    int t;
    cin >> t;

    while (t--)
    {
        int n,a,b;
        cin >> n >> a >> b;

        if( (n == a &&  a==b ) ||  (n-(a+b) >= 2 )){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
    
    return 0;
}