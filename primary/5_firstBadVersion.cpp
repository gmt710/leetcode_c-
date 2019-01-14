// Forward declaration of isBadVersion API.
bool isBadVersion(int version);
static int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
    
}();
class Solution {
public:
    int firstBadVersion(int n) {
        // python：24ms
        // c++：0ms
        int low = 0, high = n;

        while(true){
            // 说明部分参考：https://blog.csdn.net/SoulOH/article/details/81130270
            // 这里不能使用(low+high)/2，因为可能会溢出
            int mid = low + (high - low) / 2;
            // 如果前后都是测试出错，说明测试出错的在mid处或者mid之前
            if((isBadVersion(mid) == true) && (isBadVersion(mid+1) == true))
                high = mid;
            // 如果前后都是测试正确，说明测试出错的在mid+1之后
            if((isBadVersion(mid) == false) && (isBadVersion(mid+1) ==false))
                low = mid+1;
            // 如果前测试正确，后测试出错，说明mid+1处就是第一次出现测试错误的地方，即错误的第一个版本
            if((isBadVersion(mid) == false) && (isBadVersion(mid+1) == true))
                return mid+1;
        }
    }
};
