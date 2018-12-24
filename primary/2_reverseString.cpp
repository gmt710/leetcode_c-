class Solution {
public:
    string reverseString(string s) {
        char temp;
        # 计算字符串的长度s.length()或者s.size()
        int length = s.size();
        for(int i=0; i <= length/2-1; i++){
            temp = s[i];
            s[i] = s[length - i -1];
            s[length - i -1] = temp;
        }
        return s;
    }
};
