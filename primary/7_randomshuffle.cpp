static int x = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
private:
    vector<int> resetNum,result; 
    int size;
public:
    // python:592ms
    // c++:156ms
    // 参考：https://blog.csdn.net/a2331046/article/details/52444640
    // 将几个都有使用的变量放在外面，私有全局变量
    Solution(vector<int> nums) {
        resetNum = nums;
        result = nums;
        size = nums.size();
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return resetNum;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        // 此处rand()产生随机数
        int tmp;
        for(int i=0; i<size; i++){
            int j = rand() % size;
            tmp = result[i];
            result[i] = result[j];
            result[j] = tmp;
        }
        return result;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(nums);
 * vector<int> param_1 = obj.reset();
 * vector<int> param_2 = obj.shuffle();
 */
