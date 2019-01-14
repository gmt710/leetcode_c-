static int x = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // python：32ms
        // c++：4ms
        // 参考：https://blog.csdn.net/lizhidefengzi/article/details/70197499
        // 从前往后排序的话，会涉及到数组元素多次移动，所以我们考虑从后往前进行排序
        int end = m+n-1;
        m = m-1;
        n = n-1;
        // 如果有一个遍历完了，则退出
        while(m>=0 && n>=0){
            // 如果nums1末尾的数小于nums2末尾的数，则将nums2末尾的数插到nums1合并数组的最后
            if(nums1[m] < nums2[n])
                nums1[end--] = nums2[n--];
            // 如果nums1末尾的数大于nums2末尾的数，则将nums1末尾的数插到nums1合并数组的最后
            else
                nums1[end--] = nums1[m--];
        }
        // 如果是之前的nums1遍历完了，则将所有的nums2插入到合并后的nums1中
        while(n>=0){
            nums1[end--] = nums2[n--];
        }

    }
};
