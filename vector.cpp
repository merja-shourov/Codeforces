#include<bits/stdc++.h>
using namespace std;

int main(void){
    
    vector<int> v = { 0,10,5,2 };
    int  max_value_index = max_element( v.begin(), v.end())-v.begin();
    int max_value = *max_element(v.begin(), v.end());
    cout << max_value << endl;
    
    return 0;
}