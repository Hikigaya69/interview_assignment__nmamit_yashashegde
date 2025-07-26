#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(const vector<int>& nums) {
        unordered_set<int> st;
        for (int num : nums) {
            if (st.count(num)) 
            {
                return true;
            }
            st.insert(num);
        }
        return false;
    }


};
