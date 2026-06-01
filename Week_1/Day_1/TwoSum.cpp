#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];

            if (num_map.count(complement)) {
                return {num_map[complement], i};
            }

            num_map[nums[i]] = i;
        }

        return {};
    }
};

int main() {
    Solution obj;

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = obj.twoSum(nums, target);

    cout << "Indices: ";
    for (int index : result) {
        cout << index << " ";
    }

    cout << endl;

    return 0;
}