#include <bits/stdc++.h>
using namespace std;

// int count_u(string s ){
//     int count = 0;
//     for( int i=0; s[i] != '\0'; i++ ){
//         if( s[i] == 'U' ){
//             count++;
//         }
//     }

//     return count;
// }

// int count_d(string s ){
//     int count = 0;
//     for( int i=0; s[i] != '\0'; i++ ){
//         if( s[i] == 'D' ){
//             count++;
//         }
//     }
//     return count;
// }
int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int char_no;
            string str;
            cin >> char_no >> str;

            // int c_u = count_u(str);
            // int c_d = count_d(str);
            int ans = arr[i];
            for (int i = 0; str[i] != '\0'; i++)
            {
                if (str[i] == 'D')
                    ans++;
                else
                    ans--;
            }
            if (ans > 9){
                ans = ans - 10;
            }else if (ans < 0){
                ans = 10 - abs(ans);
            }
            v.push_back(ans);
        }
        for (auto out : v)
        {
            cout << out << " ";
        }
        cout << endl;
    }

    return 0;
}