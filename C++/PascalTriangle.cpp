#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        vector<vector<int>> generate(int numRows) {
            vector<vector<int>> result;
            
            for (int i = 0; i < numRows; i++) {
                vector<int> tempVec;

                for (int j = 0; j < i + 1; j++) {
                    if (j > 1) {
                        tempVec[j - 1] = result[i -1][j - 1] + result[i - 1][j - 2];
                    }
                }

                result.push_back(tempVec);
            }

            return result;
        }
};