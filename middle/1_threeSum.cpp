
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // python:800ms
        // c++:160ms
        vector<vector<int>> result;
        if (nums.size() < 3)
        {
            return result;
        }
        
        std::sort(nums.begin(), nums.end());
        for (size_t i = 0; i < nums.size(); ++i)
        {   
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            
            size_t start = i + 1;
            size_t end = nums.size() - 1;
            while (start < end)
            {
                int sum = nums[i] + nums[start] + nums[end];
                if (sum == 0)
                {
                    while (start < end && nums[start] == nums[start+1]) ++start;
                    while (start < end && nums[end] == nums[end-1]) --end;
                    result.push_back({nums[i], nums[start], nums[end]});
                    ++start;
                    --end;
                }
                else if (sum < 0)
                {
                    ++start;
                }
                else if (sum > 0)
                {
                    --end;
                }
            }
        }
        return result;
    }
};
  
