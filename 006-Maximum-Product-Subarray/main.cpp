#include<iostream>
#include<vector>
#include <climits>

using namespace std;

int maxProduct(vector<int>& nums) {
    int n=nums.size();
    int maxi=INT_MIN;
    int pref=1;
    int suf=1;
    for(int i=0;i<n;i++){
        if(pref==0) pref=1;
        if(suf==0) suf=1;
        pref*=nums[i];
        suf*=nums[n-i-1];
        maxi=max(maxi,max(suf,pref));
    }
    return maxi;
}

int main(){
    vector<int>nums={-2,-1,-3};
    cout<<maxProduct(nums);
    return 0;
}