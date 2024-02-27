#include<bits/stdc++.h>
using namespace std;

int isPrime( int n ){
    if( n == 1 || n == 2 ) return n;
    
    
    for( int i=2; i < n; i++ ){
        if( n % i == 0 ){
            return 0;
        }
    }
    return n;
}
int main(void){
    int n,m;
    cin >> n >> m;


    vector<int> v;
    for( int i=1; i<=50; i++ ){
        if( isPrime(i) != 0 ){
            v.push_back(isPrime(i));
        }
        
    }

    // for( auto x : v ) cout << x << " ";

    int l,r,mid;
    l = 0;
    r = v.size()-1;

    int index = 0;
    while (l <= r )
    {
        mid = (l+r)/2;
        if( v[mid] == n ){
            index = mid;
            break;
        }else if( v[mid] < n ){
            l = mid+1;
        }else{
            r = mid-1;
        }
    }


    if( m == v[index+1] ){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }

    return 0;
}