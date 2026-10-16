
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i=0;i<9;i++){
            unordered_map <int,int> mp1;
            for(int j=0;j<9;j++){
                
                if(board[i][j]!='.'){
                    mp1[board[i][j]]++;
                
                }
                if (mp1[board[i][j]]>1){
                    return false;
                }

            }
        }
        for (int i=0;i<9;i++){
            unordered_map <int,int> mp2;
            for(int j=0;j<9;j++){
                
                if(board[j][i]!='.'){
                    mp2[board[j][i]]++;
                
                }
                if(mp2[board[j][i]]>1){
                    return false;
                }

            }
        }

        unordered_map <int,int> mp3;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!='.'){
                    mp3[board[i][j]]++;
                
                }
                if(mp3[board[i][j]]>1){
                    return false;
                }
            }
        }

        unordered_map <int,int> mp4;
        for(int i=3;i<6;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!='.'){
                    mp4[board[i][j]]++;
                
                }
                if(mp4[board[i][j]]>1){
                    return false;
                }
            }
        }

        unordered_map <int,int> mp5;
        for(int i=6;i<9;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!='.'){
                    mp5[board[i][j]]++;
                
                }
                if(mp5[board[i][j]]>1){
                    return false;
                }
            }
        }



        unordered_map <int,int> mp6;
        for(int i=0;i<3;i++){
            for(int j=3;j<6;j++){
                if(board[i][j]!='.'){
                    mp6[board[i][j]]++;
                
                }
                if(mp6[board[i][j]]>1){
                    return false;
                }
            }
        }

        unordered_map <int,int> mp7;
        for(int i=3;i<6;i++){
            for(int j=3;j<6;j++){
                if(board[i][j]!='.'){
                    mp7[board[i][j]]++;
                
                }
                if(mp7[board[i][j]]>1){
                    return false;
                }
            }
        }

        unordered_map <int,int> mp8;
        for(int i=6;i<9;i++){
            for(int j=3;j<6;j++){
                if(board[i][j]!='.'){
                    mp8[board[i][j]]++;
                
                }
                if(mp8[board[i][j]]>1){
                    return false;
                }
            }
        }

        unordered_map <int,int> mp9;
        for(int i=0;i<3;i++){
            for(int j=6;j<9;j++){
                if(board[i][j]!='.'){
                    mp9[board[i][j]]++;
                
                }
                if(mp9[board[i][j]]>1){
                    return false;
                }
            }
        }

        unordered_map <int,int> mp10;
        for(int i=3;i<6;i++){
            for(int j=6;j<9;j++){
                if(board[i][j]!='.'){
                    mp10[board[i][j]]++;
                
                }
                if(mp10[board[i][j]]>1){
                    return false;
                }
            }
        }

        unordered_map <int,int> mp11;
        for(int i=6;i<9;i++){
            for(int j=6;j<9;j++){
                if(board[i][j]!='.'){
                    mp11[board[i][j]]++;
                
                }
                if(mp11[board[i][j]]>1){
                    return false;
                }
            }
        }


    return true;

        
    }
};
