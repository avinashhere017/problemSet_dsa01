

Explanation --------- https://leetcode.com/problems/max-consecutive-ones-iii/solutions/692111/simple-c-explanation-for-easy-understanding-o-n-time-and-o-1-space/


class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int mx=0;
        int zeroCounter=0;

        while(j<nums.size()){
            if(nums[j]==0){
                zeroCounter++;
                // j++;
            }
            while(zeroCounter > k){
                if(nums[i]==0){
                    zeroCounter--;
                }
                i++;
                // j++;

            }

            mx=max(mx,j-i+1);
            j++;

        }    
        return mx; 
    }
};
