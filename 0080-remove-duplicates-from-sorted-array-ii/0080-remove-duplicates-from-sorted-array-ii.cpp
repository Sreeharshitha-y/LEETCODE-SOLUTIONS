class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int store = 1; // Position to place the next valid element
        int currentCount = 1; // Counter for occurrences of the current element

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1]) {
                currentCount++;
            } else {
                currentCount = 1;
            }

            if (currentCount <= 2) {
                nums[store] = nums[i];
                store++;
            }
           
        }

        return store;
    }
};