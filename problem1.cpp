#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    // Public method to check for duplicates in an array
    bool containsDuplicate(const vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.count(num)) return true;
            seen.insert(num);
        }
        return false;
    }


};
