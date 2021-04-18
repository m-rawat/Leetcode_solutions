1588. Sum of All Odd Length Subarrays

https://leetcode.com/problems/sum-of-all-odd-length-subarrays/

solution:

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        int n=arr.size();
        for (int i=0; i<n; i++){
            for (int j=i; j<n; j++){
                int count=0;
                for (int k=i; k<=j; k++){
                    count++;
                }
                    if(count%2!=0){
                        for (int k=i; k<=j; k++){
                            sum+=arr[k];
                        } 
                    }
            }
        }
        return sum;
    }
};
