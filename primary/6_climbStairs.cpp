static int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    int climbStairs(int n) {
        // python：24ms
        // c++：0ms
        // 1.如果起始跳一阶的话，剩余的n-1阶就有 f(n-1) 种跳法；
        // 2.如果起始跳二阶的话，剩余的n-2阶就有 f(n-2) 种跳法；
        // 所以f(n) = f(n-1) + f(n-2)，实际结果即为斐波纳契数。
        // 即前(n-2)与前(n-1)阶方法之和
        int tmplist[n+1] = {0};
        tmplist[0] = 1;
        tmplist[1] = 1;
        for(int i=2; i < n+1; i++){
            tmplist[i] = tmplist[i-1] + tmplist[i-2];
        }
        return tmplist[n];
    }
};
