class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // 初始化3个二维数组，分别用来存一个3*3格子中的数，每行，每列
        vector<vector<char>> block_3(9 ,vector<char>(9));
        vector<vector<char>> row(9 ,vector<char>(9));
        vector<vector<char>> col(9 ,vector<char>(9));
        // 初始化三个迭代器，用于记录元素是否出现在3*3格子中的数，每行，每列中
        vector<char>::iterator iter1,iter2,iter3;
        int k = 0;
        for(int i=0; i <= 8; i++){
            for(int j=0; j <= 8; j++){
                // 如果元素不为'.'的话，进行判断，一个3*3格子，每行，每列的有效性
                if(board[i][j] != '.'){
                    k = ((int)(i/3))*3 + (int)(j/3);
                    iter1 = find(block_3[k].begin(),block_3[k].end(),board[i][j]);
                    iter2 = find(row[i].begin(),row[i].end(),board[i][j]); 
                    iter3 = find(col[j].begin(),col[j].end(),board[i][j]); 
                    if((iter1 != block_3[k].end()) || (iter2 != row[i].end())|| (iter3 != col[j].end()))
                    {
                        return false;
                        cout << k << endl;
                    }
                    // 如果不存在，就存到相应的格子，行，列中    
                    block_3[k].push_back(board[i][j]);
                    row[i].push_back(board[i][j]);
                    col[j].push_back(board[i][j]);
                }
            }
        }
        return true;
    }
};
