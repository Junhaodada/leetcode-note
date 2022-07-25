#include <cstdio>
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            auto iter = map.find(target - nums[i]);
            if (iter != map.end())
            {
                return {iter->second, i};
            }
            map.insert(pair<int, int>(nums[i], i));
        }
        return {};
    }
};
void test()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    Solution s;
    vector<int> result(s.twoSum(nums, target));
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << "\n";
}
int main()
{
    test();
    return 0;
}