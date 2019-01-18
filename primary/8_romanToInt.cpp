static int x = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    int romanToInt(string s) {
        // python:252ms
        // c++:44ms
        // https://blog.csdn.net/net_wolf_007/article/details/51770112 
        // 以ASCII中字母对应位置保存，该字符的roman数字
        int tagVal[256];
        tagVal['I'] = 1;
        tagVal['V'] = 5;
        tagVal['X'] = 10;
        tagVal['C'] = 100;
        tagVal['M'] = 1000;
        tagVal['L'] = 50;
        tagVal['D'] = 500;
        int val = 0;
        for(int i = 0; i < s.length(); i++){
            // 如果是最后一个字符，或者前一个字符比后一个字符大，即左边的字符比右边的字符大时
            if(i+1 >= s.length() || tagVal[s[i+1]] <= tagVal[s[i]])
                val += tagVal[s[i]];
            // 如果是特例情况，前一个字符比后一个字符小，即左边的字符比右边的字符小时
            else
                val -= tagVal[s[i]]; 
        }
        return val; 

    }
};
