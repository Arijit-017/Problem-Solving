#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_map<int,int>mpp;
    for(int i=0;i<nums.size();i++){
        if(mpp.find(nums[i])!=mpp.end()) return true;
        mpp[nums[i]]++;
    }        
    return false;
}

int main(){
    vector<int>nums={1,1,1,3,3,4,3,2,4,2};
    cout<<containsDuplicate(nums);
    return 0;
}