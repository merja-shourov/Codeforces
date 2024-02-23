#include<bits/stdc++.h>
using namespace std;

int main(void){
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        string res  = "";
        res = str[0];

        for( int i=1; i<str.size(); i+=2 ){
            res += str[i];
        }
        cout << res << endl;
    }
    
    return 0;
}