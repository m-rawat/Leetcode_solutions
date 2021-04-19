1688. Count of Matches in Tournament

https://leetcode.com/problems/count-of-matches-in-tournament/

solution:

class Solution {
public:
    int numberOfMatches(int n) {
        int sum=0;
        while(true){
            int x=n/2;
            n-=x;
            sum+=x;
            if(n==1){
                break;
            }
        }
        return sum;
    }
};
