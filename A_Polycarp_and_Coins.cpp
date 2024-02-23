#include<bits/stdc++.h>
using namespace std;

int main(void){
    int t; cin >> t;
    while (t--)
    {
        int tk;
        cin >> tk;

        int c1, c2;

        int temp = tk / 3;

        if( tk % 3 == 0 ){
            c1 = temp;
            c2 = temp;
        }else{
            if( tk%3 == 2 ){
                c2 = temp+1;
                c1 = temp;
            }else{
                c1 = temp + 1;
                c2 = temp;
            }

        }

        cout << c1 << " " << c2 << endl;
    }
    
    return 0;
}