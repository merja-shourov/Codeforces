#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n, time;

    cin >> n >> time;
    char str[n];
    cin >> str;

    while (time--)
    {
        for( int i=0; i<n-1; i++ ){
            if( str[i] == 'B' && str[i+1] == 'G' ){
                swap(str[i], str[i+1]);
                i++;
            }
        }
    }
    
    cout << str << endl;
    return 0;
}