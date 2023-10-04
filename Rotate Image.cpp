class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<int> temp;
        for(int i = 0 ; i < matrix.size(); i++){
            for(int j = matrix.size() - 1 ; j >= 0; j--){
                temp.push_back(matrix[j][i]);
            }
        }
        
        int k = 0;
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix.size(); j++){
                matrix[i][j] = temp[k];
                k += 1;
            }
        }
    }
};
