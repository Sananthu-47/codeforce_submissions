#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    for(int i = 0;i<s1.length();i++){
        int a = 0, b = 0;
        if(s1[i]>='a' && s1[i]<='z') a = s1[i]-'a';
        else a = s1[i] - 'A';

        if(s2[i]>='a' && s2[i]<='z') b = s2[i]-'a';
        else b = s2[i] - 'A';

        if(a<b){
            cout<<"-1";
            return 0;
        }
        if(a>b){
            cout<<"1";
            return 0;
        }
    }
    cout<<"0";
    return 0;
}