class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        # 此次代码编写，是我第二次独立编写c++代码，虽然简单，但从思想是自己独立思考的结果
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        # 初始化一个不定长不指定内容的数组，插入值用nums.push_back()
        vector<int> nums;
        int i=0,j=0;
        if((nums1.size()==0) or (nums2.size()==0))
            return nums;
        else
        {
            while((i <= nums1.size()-1) and (j<=nums2.size()-1)){
                // cout << i <<"\n";
                // cout << j <<"\n";
                if(nums1[i] == nums2[j]){
                    # 此处的nums.push_back()借鉴
                    # https://blog.csdn.net/wjh_init/article/details/80072674
                    nums.push_back(nums1[i]);
                    i++;
                    j++;
                }
                if(nums1[i] < nums2[j])
                    i++;
                if(nums1[i] > nums2[j])
                    j++;

            }
            return nums;
        }
            
    }
};
