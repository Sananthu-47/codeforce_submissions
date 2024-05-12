#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        unordered_map<char,int> mp;
        for(char &x:s) mp[x]++;
        if(mp.size()==1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            string r = s;
            int i = 0;
            while(s==r && i<s.length()-1){
                char t = r[i];
                r[i] = r[i+1];
                r[i+1] = t;
                i++;
            }
            cout<<r<<endl;
        }
    }
    return 0;
}