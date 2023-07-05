#include <vector>

class Solution {
public:
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }
    
private:
    int mergeSort(vector<int>& nums, int left, int right) {
        if (left >= right)
            return 0;
        
        int mid = left + (right - left) / 2;
        int count = mergeSort(nums, left, mid) + mergeSort(nums, mid + 1, right);
        
        int j = mid + 1;
        for (int i = left; i <= mid; i++) {
            while (j <= right && nums[i] > 2LL * nums[j])
                j++;
            
            count += (j - (mid + 1));
        }
        
        merge(nums, left, mid, right);
        
        return count;
    }
    
    void merge(vector<int>& nums, int left, int mid, int right) {
        int n1 = mid - left + 1;
        int n2 = right - mid;
        
        vector<int> L(n1), R(n2);
        
        for (int i = 0; i < n1; i++)
            L[i] = nums[left + i];
        for (int j = 0; j < n2; j++)
            R[j] = nums[mid + 1 + j];
        
        int i = 0, j = 0, k = left;
        
        while (i < n1 && j < n2) {
            if (L[i] <= R[j])
                nums[k++] = L[i++];
            else
                nums[k++] = R[j++];
        }
        
        while (i < n1)
            nums[k++] = L[i++];
        while (j < n2)
            nums[k++] = R[j++];
    }
};
