#include<bits/stdc++.h>
using namespace std;
void findSubset2(int ind,vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds){
    ans.push_back(ds);
    for(int i=ind;i<arr.size();i++){
        if(i>ind && arr[i]==arr[i-1])continue;
        ds.push_back(arr[i]);
        findSubset2(i+1,arr,ans,ds);
        ds.pop_back(); 
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    vector<vector<int>> ans;
    vector<int> ds;
    while(n--){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    findSubset2(0,arr,ans,ds);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
