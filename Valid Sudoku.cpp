class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool ans = true;
        vector<int> v(10);
        for(int i = 0; i < board.size(); i++){
            for(int j = 0 ; j < board[i].size(); j++){
                if(board[i][j] != '.')
                    v[board[i][j] - 48] += 1;
            }
            for(int k = 1 ; k <= 9; k++){
                if(v[k] > 1){
                    return false;
                }
                v[k] = 0;
            }
        }
    
        for(int i = 0; i < board.size(); i++){
            for(int j = 0 ; j < board[i].size(); j++){
                if(board[j][i] != '.')
                    v[board[j][i] - 48] += 1;
            }
            for(int k = 1 ; k <= 9; k++){
                if(v[k] > 1){
                    return false;
                }
                v[k] = 0;
            }
        }
        
        int i = 0;
        int j = 0;
        while(i < 9){
            while(j < 9){
                for(int k = i; k < 3 + i ; k++){
                    for(int l = j; l < 3 + j; l++){
                        if(board[k][l] != '.'){
                            cout << k << " " << l << " " << board[k][l] << " " <<endl;
                            v[board[k][l] - 48] += 1;
                        }
                    }
                    
                }
                for(int g = 1 ; g <= 9; g++){
                        if(v[g] > 1){
                            return false;
                        }
                        v[g] = 0;
                    }
                j += 3;
        }
         i += 3;  
         j = 0;
    }
        
    return true; 
    }
};
