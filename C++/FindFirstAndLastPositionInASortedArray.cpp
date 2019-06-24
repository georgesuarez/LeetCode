class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> indicesOfTargetNumber;

        auto result = std::find(nums.begin(), nums.end(), target);

        if (result == std::end(nums))
        {
            indicesOfTargetNumber.push_back(-1);
            indicesOfTargetNumber.push_back(-1);
            return indicesOfTargetNumber;
        }

        auto p = std::equal_range(nums.begin(), nums.end(), target);

        for (auto i = p.first; i != p.second; i++)
        {
            int index = std::distance(nums.begin(), i);
            indicesOfTargetNumber.push_back(index);
        }

        vector<int> finalRange;

        finalRange.push_back(indicesOfTargetNumber.front());
        finalRange.push_back(indicesOfTargetNumber.back());

        if (finalRange.size() == 1)
        {
            finalRange.push_back(finalRange.front());
        }

        return finalRange;
    }
};