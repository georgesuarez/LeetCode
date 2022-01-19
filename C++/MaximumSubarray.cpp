#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int result = nums[0];
            int maxSum = nums[0];

            for (int i = 1; i < nums.size(); i++) {
                maxSum = max(maxSum + nums[i], nums[i]);
                result = max(maxSum, result);
            }

            return result;
        }
};
