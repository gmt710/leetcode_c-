static int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // python:36ms
        // c++:4ms
        int maxSubsum = 0,maxsum = nums[0];
        for(int i=1; i < nums.size(); i++){
            // 当前值的大小与前面的值之和比较，若当前值更大，则取当前值，舍弃前面的值之和
            maxSubsum = max(nums[i]+nums[i-1], nums[i]);
            // 将当前和最大的赋给nums[i]，新的nums存储的为和值
            nums[i] = maxSubsum;
            maxsum = max(maxSubsum, maxsum);
        }
        
        return maxsum;
    }
};
