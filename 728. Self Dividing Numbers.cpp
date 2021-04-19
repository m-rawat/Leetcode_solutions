728. Self Dividing Numbers

https://leetcode.com/problems/self-dividing-numbers/

solution:

class Solution {
public:
    bool check(int num){
        int temp=num;
        while(temp!=0){
            int x=temp%10;
            if(x!=0){
                if((num%x)!=0){
                    return false;
                }
            }
            else{
                return false;
            }
            temp/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        for(int i=left;i<=right;i++){
            if(check(i)){
                v.push_back(i);
            }
        }
        return v;
    }
};
