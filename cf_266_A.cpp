#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c = 0;
    char prev = s[0];
    int i = 1;
    while(i < n){
        if(prev==s[i]){
            c++;
        }else prev = s[i];
        i++;
    }
    cout<<c;
    return 0;
}