#include<bits/stdc++.h>
using namespace std;
void subset(int index,vector<int> &arr,vector<vector<int>>&ans,vector<int> &holder){
     ans.push_back(holder);
     for(int i=index;i<arr.size();i++){
        holder.push_back(arr[i]);
        subset(i+1,arr,ans,holder);
        holder.pop_back();
     }
}
int main(){
    int n;
    vector<vector<int>> ans;
    vector<int> arr;
    vector<int> holder;
    int index=0;
    cin>>n;
    while(n--){
        int val;
        cin>>val;
        arr.push_back(val);
    }
    subset(index,arr,ans,holder);
    for(auto x:ans){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}