class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size(),sum=0;
        for(int i=0;i<nums.size();i++){
            if( n%(i+1)==0) sum=sum+nums[i]*nums[i];
        }
        return sum;
    }
};