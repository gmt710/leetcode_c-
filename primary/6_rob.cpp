static int x = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    int rob(vector<int>& nums) {
        // python:24ms
        // c++:0ms
        int size = nums.size();
        if(size == 0) return 0;
        if(size == 1) return nums[0];
        if(size == 2) return max(nums[0], nums[1]);
        
        // int dp[size] = {0} -->换成下面这句时间减少4ms
        vector<int> dp(size, -1);
        dp[0] = nums[0];
        dp[1] = max(nums[1], nums[0]);
        for(int i = 2; i < size; i++){
            dp[i] = max(nums[i]+dp[i-2], dp[i-1]);
        }
        return dp[size-1];
    }
};
