class Solution {
public:
    vector<vector<int> > permute(vector<int>& nums) {
        vector<vector<int> > r;
        sort(nums.begin(),nums.end());
        do{
            //vector<int> a;
            r.push_back(vector<int>{});
            
            for(int i=0;i<nums.size();i++){
                r[r.size()-1].push_back(nums[i]);
                cout<< nums[i] <<" ";
            }
            cout<<endl;
        }while(next_permutation(nums.begin(),nums.end()));

        return r;
    }
};
