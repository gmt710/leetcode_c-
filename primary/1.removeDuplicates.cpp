class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = 0;
        if(nums.size() == 0){
            return 0;
        }
        else{
            # 由于已经排序，由第一个开始比较，数组中前后元素不重复则存入原数组
            for(int i=1;i<nums.size();i++){
                if(nums[size] != nums[i]){
                    nums[++size] = nums[i];
                }
            }
            return size+1;
        }

    }
};
