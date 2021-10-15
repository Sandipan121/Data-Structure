#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void recursiveFun(int idx,int target,vector<int> &arr,vector<vector<int>>&ans,vector<int>&ds,int k){
        if(target==0){
            if(ds.size()==k){
                ans.push_back(ds);
                return;
            }
            return;
        }
        for(int i=idx;i<arr.size();i++){
            if(target<arr[i]){
                break;
            }
            ds.push_back(arr[i]);
            recursiveFun(i+1,target-arr[i],arr,ans,ds,k);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
       vector<int> arr;
        vector<vector<int>> ans;
        vector<int> ds;
       for(int i=1;i<=9;i++){
           arr.push_back(i);
       }
        recursiveFun(0,n,arr,ans,ds,k);
        return ans;
    }
};
int main(){
    int k,n;
    cin>>k>>n;
    Solution obj;
    vector<vector<int>> v;
    v=obj.combinationSum3(k,n);
    for(auto x:v){
        cout<<'[';
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<']';
        cout<<endl;
    }
    return 0;
}
