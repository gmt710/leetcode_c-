static int xx = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int strStr(string haystack, string needle) {
        // 参考：http://www.cnblogs.com/grandyang/p/4606696.html
        if(needle.size() == 0) return 0;
        int m = haystack.size(),n = needle.size();
        if(m < n) return -1;
        for(int i=0; i <= m-n; ++i){
            int j = 0;
            for(j=0; j<n; ++j){
                if(haystack[i+j] != needle[j]) break;
            }
            if(j == n) return i;
        }
        return -1;
    }
};
