1342. Number of Steps to Reduce a Number to Zero

https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/

solution:

class Solution {
public:
    int numberOfSteps(int num) {
        if(num==0){
            return 0;
        }
        else if(num==1){
            return 1;
        }
        int count=0;
        while(true){
            if(num%2==0){
                num=num/2;
                count++;
            }
            else{
                num-=1;
                count++;
            }
            if(num==0){
                break;
            }
        }
        return count;
    }
};