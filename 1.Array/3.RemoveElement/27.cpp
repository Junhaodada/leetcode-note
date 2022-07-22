#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
// 27. 移除元素
// 给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。

// 不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。

// 元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。

// 来源：力扣（LeetCode）
// 链接：https://leetcode.cn/problems/remove-element
// 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
class Solution
{
public:
    // mycode 时间复杂度为O(n^2)
    int removeElement(vector<int> &nums, int val)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == val)
            {
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums.size();
    }
    // 使用双指针
    int removeElement2(vector<int> &nums, int val)
    {
        int slowIndex = 0, fastIndex = 0;
        while (fastIndex < nums.size())
        {
            if (nums[fastIndex] == val)
            {
                fastIndex++;
                continue;
            }
            else
            {
                nums[slowIndex] = nums[fastIndex];
                fastIndex++;
                slowIndex++;
            }
        }
        return slowIndex;
    }
};
void test()
{
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;
    Solution s;
    cout << nums.size() << endl;
    int size = s.removeElement2(nums, val);
    cout << size << endl;
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
}
int main()
{
    test();
    return 0;
}