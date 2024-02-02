#include<bits/stdc++.h>
using namespace std;

int main(void){
    int a1,a2,a3,a4;
    cin >> a1 >> a2 >> a3 >> a4;
    string str;
    cin >> str;

    int cal = 0;
    for( int i=0; str[i] != '\0'; i++ ){
        if( str[i] == '1' ){
            cal += a1;
        }else if( str[i] == '2'){
            cal+= a2;
        }else if( str[i] == '3' ){
            cal += a3;
        }else{
            cal += a4;
        }
    }
    cout << cal << endl;
    return 0;
}