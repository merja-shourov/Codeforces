#include<bits/stdc++.h>
using namespace std;

int main(void){

   int t;
   cin >> t;

    while(t--){
        int N;cin>>N;

        vector<int> A(N);

        int odd=0,even=0;
        for(int i=0;i<N;i++){
            cin>>A[i];
            if(A[i]%2) odd++;
            else even++;
        }
        
        if(odd%2||(odd&&even)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}