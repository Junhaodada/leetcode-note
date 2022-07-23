#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// 977. 有序数组的平方
// 给你一个按 非递减顺序 排序的整数数组 nums，返回 每个数字的平方 组成的新数组，要求也按 非递减顺序 排序。

//  

// 示例 1：

// 输入：nums = [-4,-1,0,3,10]
// 输出：[0,1,9,16,100]
// 解释：平方后，数组变为 [16,1,0,9,100]
// 排序后，数组变为 [0,1,9,16,100]
// 示例 2：

// 输入：nums = [-7,-3,2,3,11]
// 输出：[4,9,9,49,121]
//  

// 来源：力扣（LeetCode）
// 链接：https://leetcode.cn/problems/squares-of-a-sorted-array
// 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution
{
public:
    // 暴力求解
    // O(n + nlogn)
    // O(1)
    vector<int> sortedSquares(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            nums[i] *= nums[i];
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
    // 双指针
    // O(n)
    // O(n)
    vector<int> sortedSquares2(vector<int> &nums)
    {
        int k = nums.size() - 1;
        vector<int> result(nums.size(), 0);
        int i = 0, j = nums.size() - 1;
        while (i <= j) //等号必须存在，完成最后一步k--
        {
            if (nums[i] * nums[i] > nums[j] * nums[j])
            {
                result[k--] = nums[i] * nums[i];
                i++;
            }
            else
            {
                result[k--] = nums[j] * nums[j];
                j--;
            }
        }
        return result;
    }
};
void test()
{
    vector<int> nums = {-4, -1, 2, 3, 10};
    Solution s;
    nums = s.sortedSquares2(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}
int main()
{
    test();
    return 0;
}