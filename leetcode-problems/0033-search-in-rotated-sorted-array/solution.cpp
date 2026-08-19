class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size();

        int low = 0;
        int high = n - 1;
        int mid;

        while (low <= high) {
            mid = (low + high) / 2;

            if (nums[mid] == target) {
                return mid;
            }

            else if (nums[low] <=
                     nums[mid]) { // checking whether left part is sorted
                if ((nums[low] <= target) && (target <= nums[mid])) {
                    high = mid - 1;
                }

                else {
                    low = mid + 1;
                }

            }

            else { // right half is sorted
                if ((target >= nums[mid]) && (target <= nums[high])) {
                    low = mid + 1;
                }

                else {
                    high = mid - 1;
                }
            }
        }

        return -1;
    }
};
