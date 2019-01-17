static int x = [](){
    // c++ 不加这句 68ms
    // c++ 加这句 36ms
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    bool isPowerOfThree(int n) {
        // python:168ms
        // c++:36ms
        // log 243精度问题出错，log10后正确
        double logAns = log10(n)/log10(3);
        if(logAns - int(logAns) == 0)
            return true;
        else
            return false;
    }
};
