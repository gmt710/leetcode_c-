class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        for(int i=0; i <= size-1; i++)
            for(int j=i+1; j <= size-1; j++)
                if(nums[i] == (target - nums[j]))
                    # 此处不可以为[i,j]???
                    return {i,j};
    }
};
