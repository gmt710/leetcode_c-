static int xx = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    bool isAnagram(string s, string t) {
    # 4ms
        int count[26] = {0};
        int s_size = s.size(),t_size = t.size();
        if(s_size != t_size)
            return false;
        
        for(int i=0; i<= s_size-1; i++)
            ++count[s[i]-'a'];
        for(int j=0; j<= t_size-1; j++)
            --count[t[j]-'a'];
        
        # 如果k在count中
        for(int k:count){
            if(k != 0){
                return false;
            }
        }
        return true;
    }
};
