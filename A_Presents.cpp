    #include<bits/stdc++.h>
    using namespace std;

    int main(void){
        int n;
        cin >> n;

        int x, arr[100];
        for( int i=1; i<=n; i++ ){
            cin >> x; arr[x] = i;
        }

        for( int i=1; i<=n; i++ ){
            cout << arr[i] << " ";
        }
        return 0;
    }