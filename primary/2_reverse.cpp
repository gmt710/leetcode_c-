class Solution {
public:
    # 参考https://blog.csdn.net/emmaalways/article/details/45439739
    #define INT_MAX 2147483647
    #define INT_MIN (-INT_MAX - 1)
    int reverse(int x){
        int flag = 1;
        if(x<0){
            flag = -1;
            x = -x;
        }
        int num = 0;
        while(x > 0){
            #如果计算过程中，x还没除尽，num与INT_MAX在同一数量级，迭代下一轮，就会超出范围；
            if((num != 0) && (INT_MAX / abs(num) < 10)){
                return 0;
            } 
            # 将x的最低位作为num的最高位，从而实现反转
            num = num * 10 + flag * (x % 10);
            x = x / 10;
        }
        return num;
    }
    # 此处整形超出范围，会出错
    // int reverse(int x) {
    //     # 整形--(to_string)->字符串--->颠倒(reverseString)--(stoi)->整形
    //     # include<math.h>
    //     long long num = 0;
    //     string num1;
    //     string str_x = to_string(x);
    //     # 如果数为-，转为字符串后从第二位开始颠倒，然后转为整形(stoi函数)，最后将-号加上去
    //     if(str_x[0] == '-'){
    //         num1 = reverseString(str_x, 1);
    //         num = stoi(num1);
    //         if(num > pow(2,31))
    //             return 0;
    //         return -num;
    //     }
    //     # 如果数为+，转为字符串后从第一位开始颠倒，然后转为整形(stoi函数)
    //     else{
    //         num1 = reverseString(str_x, 0);
    //         cout << num1 << endl;
    //         num = stoi(num1);
    //         if(num > pow(2,31))
    //             return 0;
    //         return num;
    //     }
    // }
    // # 从start位开始，颠倒字符串
    // string reverseString(string s,int start) {
    //     char temp;
    //     # 计算字符串的长度s.length()或者s.size()
    //     int length = s.size();
    //     for(int i=start; i <= length/2-1; i++){
    //         temp = s[i];
    //         s[i] = s[length - i -1];
    //         s[length - i -1] = temp;
    //     }
    //     return s;
    // }
};
