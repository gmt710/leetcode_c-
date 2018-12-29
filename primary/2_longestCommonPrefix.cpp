static int xx = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        # 4ms
        # 参考python中写的代码:https://github.com/gmt710/leetcode_python/blob/master/primary/2_longestCommonPrefix.py
        string strs_re = "";
        if(strs.size() == 0)
            return "";
        if(strs.size() == 1)
            return strs[0];
        
        int size_min = strs[0].size();
        for(int k=1; k < strs.size(); k++){
            if(strs[k].size() < size_min)
                size_min = strs[k].size();
        }
        int i = 0;
        while(i < size_min){
            for(int j=1; j < strs.size(); j++){
                if(strs[j][i] != strs[j-1][i])
                    return strs_re;
            }
            strs_re.append(1,strs[0][i]);
            i++;
        }
        return strs_re;
    }
};
