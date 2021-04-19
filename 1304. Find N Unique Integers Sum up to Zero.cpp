1304. Find N Unique Integers Sum up to Zero

https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/

solution:

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v;
        if(n==1){
            v.push_back(0);
        }
        else if(n==2){
            v.push_back(1);
            v.push_back(-1);
        }
        else if(n==3){
            v.push_back(0);
            v.push_back(1);
            v.push_back(-1);
        }
        else{
            if(n%2==0){
                int a=1;
                for(int i=0;i<n/2;i++){
                    v.push_back(-(i+1));
                }
                for(int i=n/2;i<n;i++){
                    v.push_back(a);
                    a++;
                }
            }
            else{
                int b=1;
                for(int i=0;i<n/2;i++){
                    v.push_back(-(i+1));
                }
                for(int i=n/2;i<n-1;i++){
                    v.push_back(b);
                    b++;
                }
                v.push_back(0);
            }
            
        }
        return v;
        
    }
};
