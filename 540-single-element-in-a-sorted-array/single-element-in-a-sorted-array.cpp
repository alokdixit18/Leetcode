class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int low = 0;
        int high = nums.size() - 1;

        while (low < high) {

            int mid = low + (high - low) / 2;

            // mid ko even bana do
            if (mid % 2 == 1)
                mid--;

            // Pair sahi hai
            if (nums[mid] == nums[mid + 1]) {
                low = mid + 2;
            }
            // Pair toot gaya
            else {
                high = mid;
            }
        }

        return nums[low];
    }
};