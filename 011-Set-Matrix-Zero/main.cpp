#include<iostream>
#include<vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    vector<int> rows(m,1);
    vector<int> cols(n,1);

    for(int i = 0;i < m; i++){
        for(int j = 0; j<n ; j++){
            if(matrix[i][j] == 0){
                rows[i] = 0;
                cols[j] = 0;
            }
        }
    }
    for(int i = 0;i < m; i++){
        for(int j = 0; j<n ; j++){
            if(rows[i] == 0 || cols[j] == 0){
                matrix[i][j] = 0;
            }
        }
    }
}

int main(){
    vector<vector<int>>matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    setZeroes(matrix);
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}