#include<bits/stdc++.h>
using namespace std;

int main(void){
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int flag = 1;
        if( s.size() % 2 == 1 ){
            flag = 0;
        }else{
            for( int i=0, j=s.size()/2; j<s.size(); i++, j++ ){
                if( s[i] != s[j] ){
                    flag = 0;
                }
            }
        }

        flag ? cout << "YES\n" : cout << "NO\n";
    }
    
    return 0;
}