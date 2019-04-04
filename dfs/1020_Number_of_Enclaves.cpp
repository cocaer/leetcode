#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    
    
    void dfs(int i, int j, vector<vector<int> >& A, int & total,int m,int n){
        A[i][j] = 0;
        total++;
        cout<<i<<" "<<j<<" ";
        if(i>0&&A[i-1][j]==1){
            dfs(i-1,j,A,total,m,n);
        }
        if(i<m-1&&A[i+1][j]==1){
            dfs(i+1,j,A,total,m,n);
        }
        
        if(j>0&&A[i][j-1]==1){
            dfs(i,j-1,A,total,m,n);
        }
        if(j<n-1&&A[i][j+1]==1){
            dfs(i,j+1,A,total,m,n);
        }
        
    }
    
    int numEnclaves(vector<vector<int> >& A) {
        
        int m = A.size();
        int n = A[0].size();
        
        int invalid_lands = 0;
        int lands = 0;
        
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(A[i][j]==1)
                    lands++;
        
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++){
                if(i==0||i==m-1||j==0||j==n-1){
                    if(A[i][j]==1)
                        dfs(i,j, A, invalid_lands,m,n);
                }
            }
        cout<<invalid_lands<<endl;
        return lands - invalid_lands;
        
    }
};
