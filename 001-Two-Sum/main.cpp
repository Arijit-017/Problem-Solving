#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    map<int,int>mpp;
    for(int i = 0; i<nums.size();i++){
        int t=target-nums[i];
        if(mpp.find(t)!=mpp.end()){
            return {mpp[t],i};
        }
        mpp[nums[i]]=i;
    }
    return {-1,-1};
}

int main(){
    vector<int>nums = {2,1,2,3,4,6,7,11,15};
    int target = 9;
    vector<int>ans=twoSum(nums, target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
    return 0;
}