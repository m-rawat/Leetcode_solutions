1812. Determine Color of a Chessboard Square

https://leetcode.com/problems/determine-color-of-a-chessboard-square/submissions/

solution:

class Solution {
public:
    bool squareIsWhite(string coordinates) {
        bool ans=true;
        if(coordinates[0]=='a'|| coordinates[0]=='c'|| coordinates[0]=='e'|| coordinates[0]=='g'){
            if(coordinates[1]=='2' || coordinates[1]=='4'|| coordinates[1]=='6'|| coordinates[1]=='8' ){
                ans=true;
            }
            else{
                ans=false;
            }
        }
        else if(coordinates[0]=='b'|| coordinates[0]=='d'|| coordinates[0]=='f'|| coordinates[0]=='h'){
            if(coordinates[1]=='1' || coordinates[1]=='3'|| coordinates[1]=='5'|| coordinates[1]=='7' ){
                ans=true;
            }
            else{
                ans=false;
            }
        }
        if(ans==true){
            return true;
        }
        return false;
    }
};
