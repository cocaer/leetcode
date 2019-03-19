int isFit(const string &str){
    int l=str.size()-1;
    for(int i=0;i<l/2;i++){
        if(str[i]!=str[l-i])
            return 0;
    }

    return 1;
}
string dpFuck(string a ,string b){
    
    int dp[1000][1000];
    for(int i=0;i<1000;i++)
        for(int j=0;j<1000;j++)
            dp[i][j]=0;

    int max =0,index=0;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            
            if(a[i]==b[j]){
                if(i==0||j==0)
                    dp[i][j]=1;
                else{ 
                    dp[i][j]= dp[i-1][j-1]+1;
                }

                if(dp[i][j]>max&&isFit(b.substr(j-dp[i][j]+1,dp[i][j]))){
                    max=dp[i][j];
                    index=j;

                }
            }
        }
    }
    return b.substr(index-max+1,max);
}




class Solution {
public:
    string longestPalindrome(string s) {
        string ns = s;
        reverse(s.begin(),s.end());

        return dpFuck(ns,s);

    }
};

