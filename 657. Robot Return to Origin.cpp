657. Robot Return to Origin

https://leetcode.com/problems/robot-return-to-origin/

solution:

class Solution {
public:
    bool judgeCircle(string moves) {
        int upper=0,down=0,left=0,right=0;
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='U'){
                upper++;
            }
            else if(moves[i]=='D'){
                down++;
            }
            else if(moves[i]=='L'){
                left++;
            }
            else{
                right++;
            }
        }
        if((upper==down) && (left==right)){
            return true;
        }
        return false;
    }
};
