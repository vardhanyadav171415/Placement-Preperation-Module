class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_map<int,int>mp,sub;

        for(auto it:nums){
            mp[it]++;
        }
        int count=0;
        int i=0,j=0;

        while(j<nums.size()){
            sub[nums[j]]++;
            while(i<=j && mp.size()==sub.size()){
                count+=nums.size()-j;
                sub[nums[i]]--;
                if(sub[nums[i]]==0) sub.erase(nums[i]);
                i++;
            }

            j++;
        }

        return count;
    }
};