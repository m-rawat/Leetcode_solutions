520. Detect Capital

https://leetcode.com/problems/detect-capital/

solution:

class Solution {
public:
    bool detectCapitalUse(string word) {
        int count_first=0,total_count=0;
        if(int(word[0])>=65 && int(word[0])<=90){
                count_first++;
                total_count++;
        }
        for(int i=1;i<word.length();i++){
            if(int(word[i])>=65 && int(word[i])<=90){
                total_count++;
            }
        }
        cout<<count_first<<" "<<total_count<<endl;
        if(total_count==word.length()){
            return true;
        }
        if(count_first==1 && total_count==1){
            return true;
        }
        if(count_first==0 && total_count==0){
            return true;
        }
        return false;
    }
};
