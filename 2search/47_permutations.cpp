

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
		vector<vector<int>> res;
		sort(nums.begin(),nums.end());
		dfs(res, nums, 0)   
		return res;     
    }
    
    void dfs(vector<vector<int>> &res, vector<int>& nums, int deepth){
    	
    	if(deepth==nums.size()){
    		res.push_back(nums);
		}
		for(int i=deepth;i<nums.size();i++){
			
			if(i!=0&& nums[i]!=nums[i-1]){
				continue; 
			}else{
				swap(nums[i], nums[i-1]);
				dfs(res, nums, deepth+1);
				swap(nums[i], nums[i-1]);
			}
		}
	}
};
