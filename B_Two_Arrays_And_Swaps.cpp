#include<bits/stdc++.h>
using namespace std;

int main(void){
    int t;
    cin >> t;

    while (t--)
    {
        int n,k;
        cin >> n >> k;

        vector<int> a(n);
        vector<int> b(n);

        for( int i=0; i<n; i++ ){
            cin >> a[i];
        }

        for( int i=0; i<n; i++ ){
            cin >> b[i];
        }


        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());

        int res = 0;
        for( int i=0; i<k; i++ ){
            if( a[i] < b[i] )
                swap(a[i], b[i]);
        }

        for( int i=0; i<n; i++ ){
            res += a[i];
        }

        cout << res << endl;
        
    }
    
    return 0;
}