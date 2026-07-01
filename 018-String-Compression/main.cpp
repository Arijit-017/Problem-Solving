#include<iostream>
#include<vector>
using namespace std;

int compress(vector<char>& chars) {
    int index=0;
    int n=chars.size();
    int var=0;
    for(int i=0;i<=n;i++){
        if(i==n || chars[index]!=chars[i]){
            chars[var++]=chars[index];
            int temp=i-index;
            if(temp>=10){
                string s=to_string(temp);
                for(int j=0;j<s.size();j++){
                    chars[var++]=s[j];
                }
            }
            else if(temp>1){
                chars[var++]=(i-index)+'0';
            }
            index=i;
        }
    }
    return var;
}

int main(){
    vector<char>chars = {'a','a','a','b','b','c','c','d','d','d'};
    int n=compress(chars);
    for(int i=0;i<n;i++){
        cout<<" \""<<chars[i]<<"\"";
    }
    return 0;
}