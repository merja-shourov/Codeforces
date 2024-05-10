#include<bits/stdc++.h>
using namespace std;

int cuts_need( int memb ){
    
    for( int n=0; n < 100000; n++ ){
            if( 1+n*(n-1)/2 >= memb ){
                return n;
                break;
        }
    }

}
int main(void){
    int n; cin >> n;
    while (n--)
    {
        int member;
        cin >> member;

        cout << cuts_need(member) << endl;
    }
    
    return 0;
}