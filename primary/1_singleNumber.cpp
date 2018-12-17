class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0; i<=size-1; i++){
            if(i == 0)
            {
                if(nums[i+1] != nums[i])
                    return nums[i];
            }
            else if(i == size-1)
            {
                if(nums[i-1] != nums[i])
                    return nums[i];
            }
            else
                if(nums[i+1] != nums[i] and nums[i-1] != nums[i])
                    return nums[i];              
        }
    }
};
