#include<bits/stdc++.h>
using namespace std;
void combiSum(int index,vector<int> &arr,vector<vector<int>> &ans,vector<int> &ds,int target){
    //base condition:
    if(target==0){
        ans.push_back(ds);
        return;
    }
    for(int i=index;i<arr.size();i++){
        if(arr[i]>target){
            break;
        }
        ds.push_back(arr[i]);
        combiSum(i,arr,ans,ds,target-arr[i]);
        ds.pop_back();
    }
    
}
int main(){
    int n,t;
    cin>>n>>t;
    vector<int> arr;
    vector<vector<int>> ans;
    vector<int>ds;
    while(n--){
        int val;
        cin>>val;
        arr.push_back(val);
    }
    sort(arr.begin(),arr.end());
    combiSum(0,arr,ans,ds,t);
    for(auto x:ans){
        for(auto i:x){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}