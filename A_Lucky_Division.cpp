#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;

    if( n%4 == 0 || n%7==0 || n%47==0 || n%74==0 ){
        cout << "YES\n";
        return 0;
    }else if( n%447 == 0 || n% 474 == 0 || n%477 == 0 ){
        cout << "YES\n";
        return 0;
    }else if( n%747 == 0 || n%744 == 0 || n%774 == 0 ){
        cout << "YES\n";
        return 0;
    }
    else{
        cout << "NO\n";
    }
    return 0;
}
