#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    vector<vector<int>> mat(n,vector<int> (n));
    pair<int,int> pos;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            int temp;
            cin>>temp;
            mat[i][j] = temp;
            if(temp != 0) pos = {i,j};
        }
    }
    cout<<abs(pos.first-2) + abs(pos.second-2);
    return 0;
}