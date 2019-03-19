
class Solution {
public:
        int lengthOfLongestSubstring(string s) {

                int hash[128];
                int index=0;
                int max=0;        
                for(int i=0; i<128;i++)
                    hash[i] = -1;
                for(int j=0;j<s.size();j++){
                    
                    for(int i=0; i<128;i++)
                        hash[i] = -1;          //初始化记录表
                    
                    int len =0;            
                    for(int k=j; k< s.size();k++){
                        if( hash[s[k]]==-1){
                                hash[s[k]] = 1;
                                len++;
                            if(len>max){
                                max = len;
                                index = j;
                            }
                        }else{
                            break;
                        }
                    }
                }
                std::cout<<max;
                return max;
        }
};