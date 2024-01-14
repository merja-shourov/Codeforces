#include<bits/stdc++.h>
using namespace std;

int main(void){
    int t; cin >> t;
    
    int cm = 0;
    int cc = 0;
    while (t--)
    {
        int m, c; cin >> m >> c;
        if( m > c ){
            cm++;
        }else if( c > m ){
            cc++;
        }else{
            cm++;
            cc++;
        }
    }

    if( cm == cc ){
        cout << "Friendship is magic!^^\n";
    }else if( cm > cc ){
        cout << "Mishka\n";
    }else{
        cout << "Chris\n";
    }
    
    return 0;
}