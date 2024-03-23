#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    map<char,int> mp;
    for(char &x:s){
        if(x!='+') mp[x]++;
    }
    int i = 0;
    for(auto &x:mp){
        int c = x.second;
        while(c){
            s[i] = x.first;
            c--;
            i+=2;
        }
    }
    cout<<s;
    return 0;
}