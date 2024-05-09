#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        string s;
        cin>>s;
        sort(s.begin(), s.end());
        string nam = "Timur";
        sort(nam.begin(),nam.end());
        if(nam == s){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}