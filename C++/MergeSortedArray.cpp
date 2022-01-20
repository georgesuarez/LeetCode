#include <vector>
#include <algorithm>

using namespace std;

class Solution:
{
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            if (m != 0 && n == 0) {
                return;
            }
            else if (m == 0 && n != 0) {
                for (int i = 0; i < n; i++) {
                    if (nums1[i] == 0) {
                        nums1[i] = nums2[i];
                    } else {
                        nums1.push_back(nums2[i]);
                    }
                }
                return;
            }

            int j = 0;
            
            reverse(nums1.begin(), nums1.end());
            reverse(nums2.begin(), nums2.end());

            for (int i = 0; i < n; i++) {
                if (nums1[i] == 0) {
                    nums1[i] = nums2[j++];
                } else {
                    nums1.push_back(nums2[i]);
                }
            }

            sort(nums1.begin(), nums1.end());
        }
};