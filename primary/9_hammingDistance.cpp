static int x = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    int hammingDistance(int x, int y) {
        // python:28ms
        // c++:4ms
        // 参考：http://www.cnblogs.com/grandyang/p/6201215.html
        // 做&运算时，会将两边的数转为二进制的数，然后再进行运算
        int res = 0, xy = x^y;
        for (int i = 0; i < 32; ++i) {
                res += (xy>>i) & 1;
            }
        return res;
    }
};
