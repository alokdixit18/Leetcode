class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;

        for (int num : nums) {

            // Count zero hua toh current number
            // ko naya candidate banao
            if (count == 0) {
                candidate = num;
            }

            // Same number par vote badhega,
            // different number par vote cancel hoga
            if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }

        return candidate;
    }
};