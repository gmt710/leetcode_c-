// 加这句话，会加速？？？参考提交后，查看明细上的，会加速20ms
static int xx = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    int firstUniqChar(string s) {
        // 参考：python代码部分的思想
        // 和https://blog.csdn.net/qq_39871576/article/details/80508665
        // ASCII码表
        // p[26]利用相对长度，节约空间
        int p[26] = {0}, size = s.size();
        for(int i=0; i<= size-1; i++){
            ++p[s[i]-'a'];
        }
        for(int j=0; j <= size-1; j++){
            // 如果是第一个不重复的字符，则输出索引；否则输出-1
            if(p[s[j]-'a'] == 1){
                return j;
            }
        }
        return -1;
    }
};
