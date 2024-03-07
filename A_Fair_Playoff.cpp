#include<bits/stdc++.h>
using namespace std;

int main(void){
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v;

        for( int i=0; i<4; i++ ){
            int x;
            cin >> x;
            v.push_back(x);
        }

        int tm1, tm2;
        tm1 = max(v[0], v[1]);
        tm2 = max( v[2], v[3]);

        sort(v.begin(), v.end()); 
        

        if( (tm1 == v[2] || tm1 == v[3]) && (tm2 == v[2] || tm2 == v[3]) ){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    
    return 0;
}