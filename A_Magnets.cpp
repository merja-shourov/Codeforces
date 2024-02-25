#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
 
    int cnt = 0;
    string a,b;
    while (n--)
    {
        cin >> a;
        if( a[0] == b[0] && a[1] == b[1] ){
            continue;
        }

        b[0] = a[0];
        b[1] = a[1];
        cnt++;
    }
    
    cout << cnt << endl;
    return 0;
}