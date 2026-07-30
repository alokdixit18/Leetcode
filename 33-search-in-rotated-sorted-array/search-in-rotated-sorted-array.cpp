class Solution {
public:
    int search(vector<int>& nums, int target) {

        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {

            // Mid calculate karo
            int mid = low + (high - low) / 2;

            // Agar target mil gaya
            if (nums[mid] == target)
                return mid;

            // Check karo left half sorted hai ya nahi
            if (nums[low] <= nums[mid]) {

                // Agar target left sorted half me hai
                if (target >= nums[low] && target < nums[mid]) {
                    high = mid - 1;
                }
                // Warna right half me search karo
                else {
                    low = mid + 1;
                }
            }

            // Nahi to right half sorted hoga
            else {

                // Agar target right sorted half me hai
                if (target > nums[mid] && target <= nums[high]) {
                    low = mid + 1;
                }
                // Warna left half me search karo
                else {
                    high = mid - 1;
                }
            }
        }

        // Target nahi mila
        return -1;
    }
};