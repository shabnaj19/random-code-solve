//LeetCode#283(Move Zeroes)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int N = nums.size();
        int j = 0;
        for(int i=0;i<N;i++)
        {
            //cout<<nums[i]<<' ';
            if(nums[i]!=0){
                 swap(nums[i], nums[j]);
                 j++;
            }
        }
    }
};
