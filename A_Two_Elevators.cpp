#include<bits/stdc++.h>
using namespace std;

void solution(){
    int a,b,c;
    cin >> a >> b >> c;
    int sec_a = abs(a-1);

    int sec_b = abs(c-b) + c-1;
    if( sec_a == sec_b ){
        cout << 3 << endl;
    }else if( sec_a < sec_b ){
        cout << 1 << endl;
    }else{
        cout << 2 << endl;
    }
    
}

int main(void){
    int t; cin >> t;

    while (t--)
    {
        solution();
    }
    
    return 0;
}