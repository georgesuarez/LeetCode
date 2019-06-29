#include <iostream>
#include <algorithm>
#include <vector>

int heightChecker(std::vector<int> &heights)
{
    std::vector<int> sortedHeights = heights;
    std::sort(sortedHeights.begin(), sortedHeights.end());

    int positionsOutOfPlace = 0;

    for (int i = 0; i < heights.size(); i++)
    {
        if (heights[i] != sortedHeights[i])
        {
            positionsOutOfPlace++;
        }
    }

    return positionsOutOfPlace;
}

int main()
{
    std::vector<int> heights = {1, 1, 4, 2, 1, 3};

    std::cout << heightChecker(heights) << '\n';

    return 0;
}