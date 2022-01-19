#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
           // easier to check if the same number are next to each other when sorted
           // C++ Sort function runs in O(N*log(N))
           sort(nums.begin(), nums.end());  

           // find the duplicate numbers
           for (int i = 0; i < nums.size() - 1; i++) {
               if (nums[i] == nums[i + 1]) {
                   return true
               }
           }
           return false;
        }
}