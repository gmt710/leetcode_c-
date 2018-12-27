# 提速44ms-8ms
static int xx = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int myAtoi(string str) {
        # 参考 https://blog.csdn.net/u010002184/article/details/76981203
        #define INT_MAX 2147483647
        #define INT_MIN (-INT_MAX - 1)
        
        long res = 0;
        int indicator = 1;
        int i = str.find_first_not_of(' ');
        if(str[i] == '-' || str[i] == '+'){
            indicator = (str[i++] == '-')?-1:1;
        }
        while(str[i]>='0' && str[i] <= '9'){
            res = res*10 + (str[i++]-'0');
            if(res*indicator >= INT_MAX)
                return INT_MAX;
            if(res*indicator <= INT_MIN)
                return INT_MIN;
        }
        return indicator*res;
    }
    
};
