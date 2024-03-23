#include<bits/stdc++.h>
using namespace std;

void solve(int n,int k,vector<int> &arr){
    int pos = arr[k-1];
    if(pos<=0) {
        cout<<0;
        return;
    }
    k--;
    while(arr[k]==pos){
        k++;
    }
    cout<<k;
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