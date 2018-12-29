class Solution {
public:
    string countAndSay(int n) {
        # c++时间0ms，相同的算法思想，python使用32ms
        # 不断迭代式的报数,如0位开始，碰到相同的数字就计数，直到不相同就插入
        # 参考之前自己写的python代码：https://github.com/gmt710/leetcode_python/blob/master/primary/2_countAndSay.py
        # 以及一些数据结构参考https://blog.csdn.net/SoulOH/article/details/81984135:
        string now = "1";
        for(int i=1;i < n; i++){
            int count = 1;
            string str_n;
            for(int j=0; j <= now.size()-1; j++){
                if(((j+1) < now.size()) && now[j] == now[j+1])
                    count ++;
                else{
                    str_n.append(to_string(count));
                    # 插入一个字符串--now[j]
                    str_n.append(1, now[j]);
                    count = 1;
                }
            }
            now = str_n;
        }
        return now;
    }
};
