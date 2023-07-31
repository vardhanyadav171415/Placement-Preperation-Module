class Solution {
public:
    bool canJump(vector<int>& nums) {
        int goal=nums.size()-1;
        int start=0;
        for(int i=nums.size()-1;i>=0;i--){
            if(i+nums[i]>=goal){
                goal=i;
            }
        }

        if(goal==0)return true;
        return false;
    }
};