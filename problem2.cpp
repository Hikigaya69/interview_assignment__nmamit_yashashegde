#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void moveZero(vector<int> &nums)
    {
        int j = -1;
        int n = nums.size();

        // Find index of first zero
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                j = i;
                break;
            }
        }

        // No zero found
        if (j == -1)
            return;

        for (int i = j + 1; i < n; i++)
        {
            if (nums[i] != 0)
            {
                swap(nums[j], nums[i]);
                j++;
            }
        }
    }
};
