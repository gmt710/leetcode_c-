static int x = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        // python:44ms
        // c++:4ms
        vector<uint32_t> n_2;
        int temp = 0;
        // 将n%2不断放到n_2的最后，实现颠倒二进制位
        for(int i=0; i<32; i++){
            n_2.push_back(n%2);
            n /= 2;
        }
        uint32_t res = 0;
        // 将颠倒的二进制数数组转为uint32_t的数
        for(int i=0; i<32; i++){
            res =res*2 + n_2[i];
        }
        return res;
    }
};
