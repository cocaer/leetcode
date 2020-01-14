#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int length = height.size();
        int pl = 0, pr = length-1;
        
        int max_c = std::min(height[pl],height[pr])*(pr-pl);
        while(pl < pr){
            if(height[pl]<height[pr]){
                pl++;
            }else{
                pr--;
            }
            
            int tmp_c = min(height[pl],height[pr])*(pr-pl);
            if(tmp_c > max_c){
                max_c = tmp_c;
            }
            
        }
        return max_c;
    }
};

int main(){
	vector<int> sample = {1,8,6,2,5,4,8,3,7};
	Solution s;
	cout<<s.maxArea(sample);
	
}
