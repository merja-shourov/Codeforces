#include<bits/stdc++.h>
using namespace std;

int main(void){
    int t; cin >> t;
    string origin = "codeforces\n";
    while(t--){
        string str;
        cin >> str;

        int cnt = 0;
        for( int i=0; str[i] != '\0'; i++ ){
            if( str[i] != origin[i] ) cnt++;
        }
        cout << cnt << endl;
    
    }
    return 0;
}