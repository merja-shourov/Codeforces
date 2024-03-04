#include<bits/stdc++.h>
using namespace std;

int main(void){
    
    vector<int> v;
    
    for( int i=0; i<4; i++ ){
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    sort(v.begin(), v.end());

    int ans = 0;
    for( int i=0; i<3; i++ ){
        if( v[i] == v[i+1] ) ans++;
    
    }
    cout << ans << endl;
    return 0;
}