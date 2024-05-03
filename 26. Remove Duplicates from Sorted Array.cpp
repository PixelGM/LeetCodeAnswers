class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = 1;

        for (int i = 1; i < nums.size(); i++) {
            // If different
            if (nums[i] != nums[i - 1]) {
                nums[l] = nums[i];
                l++;
            }
        }
        return l;
    }
};
