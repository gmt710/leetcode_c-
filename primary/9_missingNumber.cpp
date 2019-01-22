static int x = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // python:32ms
        // c++:8ms
        // 求0-nums的大小所有数的和，减去nums中的数的和，就是缺少的那个数字
        int nums_size = nums.size();
        int All_sum = int(nums_size*(nums_size+1)/2);
        int Part_sum = 0, loss_sum = 0 ;
        for(int i=0; i<nums_size; i++){
            Part_sum += nums[i];
        }
        loss_sum = All_sum - Part_sum;
        
        return loss_sum;
    }
};
