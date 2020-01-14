#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;


class Solution {
public:
    int numDecodings(string s) {
    	
    	if(stoi(s)==0 || s[0]=='0'){
    		return 0;
		}
		if(s.size()==1){
			return 1;	
		}
		int length = s.size();
		vector<int> v(length+1,0);
		v[0] = 1;
		v[1] = s[0] == '0'? 0:1;
		
		for(int i=2; i<=length; i++){
			if(s[i-1]>='1'&&s[i-1]<='9')
				v[i] = v[i-1];
			
			if(s.substr(i-1-1,2)>="10"&&s.substr(i-1-1,2)<="26")
				v[i] += v[i-2];
		}	
		
		return v[length];
		}
		
};


int  main(){
	Solution s;
	cout<< s.numDecodings("10");
}
