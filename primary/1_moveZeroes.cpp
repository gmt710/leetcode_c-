class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size(),count_0 = 0;
        vector <int> nums1;
        for(int i=0; i <= size-1; i++){
            if(nums[i] == 0)
                count_0++;
            else
                nums1.push_back(nums[i]); 
        }
        for(int j=0;j <= count_0-1; j++){
            nums1.push_back(0);
        }
        nums = nums1;
    }
};
