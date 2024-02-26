#include<bits/stdc++.h>
using namespace std;

int main(void){
    int y,w, lob, hor;
    cin >> y >> w;

    int maximum = max( y, w );
    int main_lob = (6 - maximum ) + 1;

    if( main_lob == 1 || main_lob == 5 ){
        lob = main_lob;
        hor = 6;
    }else{
        if( main_lob == 2 || main_lob == 3 || main_lob == 6 ){
            lob = main_lob/main_lob;
            hor = 6/main_lob;
        }else{
            lob = main_lob/2;
            hor = 6/2;
        }
    }
    

    cout << lob << "/" << hor << endl;
    return 0;
}