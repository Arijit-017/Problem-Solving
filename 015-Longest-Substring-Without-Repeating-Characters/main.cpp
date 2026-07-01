#include<iostream>
#include<unordered_map>
using namespace std;

int lengthOfLongestSubstring(string s){
    int j=0;
    int maxLen=0;
    unordered_map<char,int>mpp;
    for(int i=0;i<s.size();i++){
        while(!mpp.empty() && mpp.find(s[i])!=mpp.end()){
            mpp.erase(s[j]);
            j++;
        }
        maxLen=max(maxLen,i-j+1);
        mpp[s[i]]++;
    }
    return maxLen;
}

int main(){
    string s = "bbbbb";
    cout<<lengthOfLongestSubstring(s);
    return 0;
}