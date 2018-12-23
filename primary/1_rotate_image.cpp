class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        # 主要思想是：先做一个转置变换(行列交换)，
        # 然后沿中间列交换前面的列和后面的列交换
        # matrix[i] = matrix[i][::-1]
        int size = matrix.size();
        int col_size = matrix[0].size();
        int temp = 0;
        for(int i=0; i <= size-1; i++){
            for(int j=i+1; j <= size-1; j++){
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        
        // 沿中间列交换前面的列和后面的列交换
        for(int i=0; i <= size-1; i++){
            for(int j=0; j < (size)/2; j++){
                temp = matrix[i][j];
                matrix[i][j] = matrix[i][col_size-1-j];
                matrix[i][col_size-1-j] = temp;
            }
            
        }
    }
};
