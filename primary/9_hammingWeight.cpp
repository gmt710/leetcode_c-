static int x = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    int hammingWeight(uint32_t n) {
        // python:32ms
        // c++:4ms
        // int count = 0;
        // while(n){
        //     if(n % 2 == 1)
        //         count++;
        //     n /= 2;
        // }
        // return count;
        
        // c++:0ms
        int count = 0;
        int res32 = 32;
        while(res32--){
            count += n&1;
            // n左移1位
            n = n >> 1;
        }
        return count;
    }
};
