#include<bits/stdc++.h>
using namespace std;

void solve(int n,int k,vector<int> &arr){
    int max_score = arr[k-1];
    int i = 0;
    while(i<n && arr[i]>=max_score && arr[i]>0){
        i++;
    }
    cout<<i;
    return;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr;
    for(int i = 0;i<n;i++){
        int t;
        cin>>t;
        arr.push_back(t);
    }
    solve(n,k,arr);
    return 0;
}