class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        // check row
        for(int i=0; i<9; i++){
            unordered_set<char>s;
            for(int j=0; j<9; j++){
                if(board[i][j] == '.')
                    continue;
                
                if(s.count(board[i][j]))
                    return false;
                
                s.insert(board[i][j]);
            }
        }
        cout<<"rows are all correct\n";

        // check column
        for(int i=0; i<9; i++){
            unordered_set<char>s;
            for(int j=0; j<9; j++){
                if(board[j][i] == '.')
                    continue;
                
                if(s.count(board[j][i]))
                    return false;
                
                s.insert(board[j][i]);
            }
        }
        cout<<"columns are all correct\n";


        // check each box
        for(int i=0; i<9; i+=3){
            for(int j=0; j<9; j+=3){
                cout<<"\n\ni:"<<i<<" , j:"<<j<<endl;
                unordered_set<char>s;
                // check each block
                for(int k=i; k<i+3; k++){
                    for(int l=j; l<j+3; l++){
                        cout<<"k:"<<k<<" , l:"<<l;
                        cout<<" "<<board[k][l]<<endl;
                        if(board[k][l] == '.')
                            continue;
                    
                        if(s.count(board[k][l]))
                            return false;
                        
                        s.insert(board[k][l]);
                    }
                }
            }
        }

        return true;

    }
};
