#include <vector>

using namespace std;


class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            int uniqueNumber = nums[0];

            for (int i = 1; i < nums.size(); i++) {
                uniqueNumber ^= nums[i];
            }

            return uniqueNumber;
        }
};