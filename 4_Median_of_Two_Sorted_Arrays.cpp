class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            vector<int> t;
            size_t  s1 =nums1.size();
            size_t  s2 =nums2.size();
            int i=0,j=0;

            while(i<s1&&j<s2){
                if(nums1[i]<nums2[j] ){
                    t.push_back(nums1[i++]);
                }else if(nums1[i]>nums2[j]){
                    t.push_back(nums2[j++]);
                }else{
                    t.push_back(nums2[j++]);
                    t.push_back(nums1[i++]);                    
                }
            }

            while(i<s1){
                t.push_back(nums1[i++]);
            }
            while(j<s2){
                t.push_back(nums2[j++]);                
            }

            int index = (s1+s2)/2;

            if(index*2!=s1+s2){
                return t[index];
            }else{
                return (t[index]+t[index-1])/2.0;
            }

    }
};
