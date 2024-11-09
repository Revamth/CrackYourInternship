class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        vector<int> nums(arr.begin(), arr.end());

        sort(nums.begin(), nums.end());
        int low = 0, high = n - 1;
        while (low < high) {
            if (nums[low] + nums[high] == target) {
                break;
            } else if (nums[low] + nums[high] > target) {
                high--;
            } else {
                low++;
            }
        }
        
        if (low < high) {
            int indexLow = -1, indexHigh = -1;
            for (int i = 0; i < n; i++) {
                if (arr[i] == nums[low] && indexLow == -1) {
                    indexLow = i;
                } else if (arr[i] == nums[high] && indexHigh == -1) {
                    indexHigh = i;
                }
            }

            if (indexLow != -1 && indexHigh != -1) {
                return {indexLow, indexHigh};
            }
        }

        return {};
    }
};
