# 加速     
static const auto io_sync_off = []()
{
    // turn off sync
    std::ios::sync_with_stdio(false);
    // untie in/out streams
    std::cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    bool isPalindrome(string s) {
        # 16ms ---> 4ms
        int size = s.size(), low = 0, high = size-1;
        if(size == 0)
            return true;
        while(low < high){
            # 如果不为数字或者字母时
            while((low < high) && !isAlphanum(s[low]))
                low++;
            while((low < high) && !isAlphanum(s[high]))
                high--;
            if(tolower(s[low]) != tolower(s[high]))
                return false;
            low++;
            high--;
        }
        return true;
    }
    bool isAlphanum(char c) {
        return ('a'<= c && c <= 'z') || ('A' <= c && c <= 'Z') || ('0' <= c && c <= '9');
    }
};
