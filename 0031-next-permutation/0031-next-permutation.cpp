class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int n = nums.size();

        // Step 1: Find the first decreasing element from right
        int i = n - 2;

        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }

        // Step 2: Find the number just greater than nums[i]
        if (i >= 0) {
            int j = n - 1;

            while (nums[j] <= nums[i]) {
                j--;
            }

            // Step 3: Swap them
            swap(nums[i], nums[j]);
        }

        // Step 4: Reverse the part after i
        int start = i + 1;
        int end = n - 1;

        while (start < end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }
};