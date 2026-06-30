#include<iostream>
#include<vector>
using namespace std;

vector<int> product(vector<int>&nums){
    int n=nums.size();
    vector<int>ans(n,0);
    int prod=1;
    int zeroCnt=0;
    for(int i=0;i<n;i++){
        if(nums[i]!=0) prod*=nums[i];
        else zeroCnt++;
    }
    if(zeroCnt==1){
        for(int i=0;i<n;i++){
            if(nums[i]==0) ans[i]=prod;
        }
    }
    else if(zeroCnt==0){
        for(int i=0;i<n;i++){
            ans[i]=prod/nums[i];
        }
    }
    return ans;
}

int main(){
    vector<int>nums={1,2,3,4};
    vector<int> ans = product(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}