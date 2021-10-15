#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> &v,int kill,int k,int &ans){
    if(v.size()==1){
        ans=v[0];
        return;
    }
    kill=(kill+k)%v.size();
    v.erase(v.begin()+kill);
    solve(v,kill,k,ans);
}
int main(){
    int n,k;
    cin>>n>>k;
    int ans=-1;
    vector<int> v;
    int kill=0;
    for(int i=1;i<n+1;i++){
        v.push_back(i);
    }
    k--;
    solve(v,kill,k,ans);
    cout<<ans;
    return 0;
}