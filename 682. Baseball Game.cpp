682. Baseball Game

https://leetcode.com/problems/baseball-game/

solution:

class Solution {
public:
    int str_to_int(string s){
        stringstream geek(s);
        int x = 0;
        geek >> x;
        return x;
    }
    int calPoints(vector<string>& ops) {
        vector<int> v;
        int j=0;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="+"){
                int x=v[j-1];
                int y=v[j-2];
                v.push_back(x+y);
                j++;
            }
            else if(ops[i]=="D"){
                int z=v[j-1];
                v.push_back(2*z);
                j++;
            }
            else if(ops[i]=="C"){
                v.pop_back();
                j--;
            }
            else{
                int a=str_to_int(ops[i]);
                v.push_back(a);
                j++;
            }
        }
        int sum=0;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
            sum+=v[i];
        }
        return sum;
    }
};
