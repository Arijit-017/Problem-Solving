#include<iostream>
#include<vector>
#include<unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs){
        vector<vector<string>>ans;
        int n=strs.size();
        unordered_map<string,vector<string>>mpp;
        for(int i=0;i<n;i++){
            string temp=strs[i];
            sort(temp.begin(),temp.end());
            mpp[temp].push_back(strs[i]);
        }
        for(auto it:mpp){
            ans.push_back(it.second);
        }
        return ans;
}

int main(){
    vector<string>strs = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> ans = groupAnagrams(strs);
    for(int i = 0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}