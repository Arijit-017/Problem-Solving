#include<iostream>
#include<vector>
#include <climits>
using namespace std;

int maxSum(vector<int>&nums){
    int maxi =INT_MIN;
    int sum =0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(sum<0) sum=0;
        maxi=max(maxi,sum);
    }
    return maxi;
}

int main(){
    vector<int>nums ={-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSum(nums);
    return 0;
}