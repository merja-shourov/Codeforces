#include <bits/stdc++.h>
using namespace std;

int main(void)
{

    int t;
    cin >> t;

    int x = 0, y = 0, z = 0;

    for( int i=0; i<t; i++ ){
        int v1, v2, v3;
        cin >> v1 >> v2 >> v3;
        x += v1; y += v2; z += v3;

        // cout << x << " " << y << " " << z  << endl;
    }

    if( x == 0 && y == 0 && z == 0){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }

    return 0;
}