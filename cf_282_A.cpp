#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int x = 0;
    
    while(t--){
        string s;
        cin>>s;
        // --X or X--
        if(s[1]=='-') --x;
        else ++x;
    }
    cout<<x;
    return 0;
}