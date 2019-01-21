static int x = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // python:24ms
        // c++:0ms
        vector<vector<int>> res;
        for(int i=0; i<numRows; i++){
            // 使用一个vector<int>数组保存每一层的元素
            vector<int> temp;
            temp.push_back(1);
            for(int j=1; j<i+1; j++){
                if(j==i)
                    temp.push_back(1);
                else
                    // 如果j != i时，res[i][j] = res[i-1][j-1]+res[i-1][j]
                    temp.push_back(res[i-1][j-1]+res[i-1][j]);
            }
            // 一层元素生成完成以后，将temp保存至res中
            res.push_back(temp);
        }
        return res;
    }
};
