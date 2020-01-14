#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

//solution 1
//class Solution {
//public:
//    vector<vector<int>> permute(vector<int>& nums) {
//		vector<vector<int>> res;
//		vector<int> visit(nums.size(),0);
//		vector<int> tmp;
//		dfs(res, nums, visit, tmp);
//        return res;
//    }
//    void dfs(vector<vector<int>> &v, vector<int>& nums, vector<int>& visit, vector<int> tmp){
//    	
//    	if(tmp.size()==nums.size()){
//    		v.push_back(tmp);
//		}
//		for(int i=0;i<nums.size();i++){
//    		if(visit[i]==0){
//    			visit[i]=1;
//				tmp.push_back(nums[i]);
//				dfs(v, nums, visit, tmp);
//				tmp.pop_back();
//    			visit[i]=0;
//			}
//		}
//	}
//    
//    
//};


// solution 1
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
		vector<vector<int>> res;
		recursive(res,0, nums);
        return res;
    }
    
    void recursive(vector<vector<int>> &res, int begin, vector<int> nums){
    	if(begin==nums.size()-1){
            res.push_back(nums);
            return;
        }
    		
    	
    	for(int i=begin; i< nums.size(); i++){
    		swap(nums[i],nums[begin]);
    		recursive(res, begin+1, nums);
//    		swap(nums[i],nums[begin]);
		}
	}
};






int  main(){
	Solution s;
	cout<< s.numDecodings("10");
}
