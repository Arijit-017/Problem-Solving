#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>&prices){
    int buy = prices[0];
    int maxi = 0;
    for(int i=1;i<prices.size()-1;i++){
        if(prices[i]<buy){
            buy=prices[i];
        }
        maxi = max(maxi,prices[i]-buy);
    }
    return maxi;
}

int main(){
    vector<int>prices = {7,1,5,3,6,4};
    cout<<maxProfit(prices);
    return 0;
}