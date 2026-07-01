#include<iostream>
#include<vector>
using namespace std;

bool isAnagram(string s1, string s2){
    if(s1.size()!=s2.size()) return false;
    vector<int>mpp(26,0);
    for(int i=0;i<s1.size();i++){
        mpp[s1[i]-'a']++;
    }
    for(int i=0;i<s2.size();i++){
        mpp[s2[i]-'a']--;
        if(mpp[s2[i]-'a']<0) return false;
    }

    return true;
}

int main(){
    string s1="asdfghjkl";
    string s2="lkjhgfdpa";
    cout<<isAnagram(s1,s2);
    return 0;
}