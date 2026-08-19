class Solution {
public:
    int ans = false;
    bool solve(vector<vector<char>>& board, string word, int r, int c, string current, int index){
        
        // cout <<" :: on char :" << board[r][c];
        if(current == word){
            ans = true;
            return true;
        }

        if(r<0 || r>=board.size() || c<0 || c>=board[0].size() || board[r][c] == '#'){
            return false;
        }


        if(word[index] != board[r][c]){
            // cout <<" :: not matching";
            return false;
        }
        // cout <<" :: matched";
        char og = board[r][c];
        board[r][c] = '#';

        current.push_back(og);
        index++;
        
        solve(board, word, r, c-1, current, index);
        solve(board, word, r, c+1, current, index);
        solve(board, word, r-1, c, current, index);
        solve(board, word, r+1, c, current, index);
        board[r][c] = og;
        current.pop_back();

        return ans;
    }

    bool exist(vector<vector<char>>& board, string word) {
        if(board.size() == 0)
            return ans;
        
        int csz = board[0].size();
        int rsz = board.size();
        cout<<"c size : " << csz<<"\n";
        cout<<"r size : " << rsz<<"\n";
        
        // if(rsz == 1 && word.size() == 1){
        //     if(board[0][0] == word[0])
        //         return true;
        //     // return false;
        // }
        
        for(int i=0; i<rsz ; i++){
            for(int j=0; j<csz; j++){
                // cout <<"\n\ngoing to check : "<<board[i][j];
                bool ret = solve(board, word, i,j, "", 0);
                if(ret == true)
                    return true;
            }
        }
    
        return false;
    }
};
