#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

// 704. 二分查找-my code
int search(vector<int> &nums, int target)
{
    int left = 0, right = nums.size();
    int middle;
    int index = -1;
    while (left <= right)
    {
        middle = (left + right) / 2;
        if (target > nums[middle])
        {
            left = middle + 1;
        }
        else if (target < nums[middle])
        {
            right = middle - 1;
        }
        else
        {
            index = middle;
            break;
        }
    }
    return index;
}
int search1(vector<int> &nums, int target)
{
    int left = 0, right = nums.size() - 1;
    int middle;
    while (left <= right)
    {
        middle = left + (right - left) / 2;
        if (target > nums[middle])
        {
            left = middle + 1;
        }
        else if (target < nums[middle])
        {
            right = middle - 1;
        }
        else
        {
            return middle;
        }
    }
    return -1;
}
void test1()
{
    // vector<int> nums = {-1, 0, 3, 5, 9, 12};
    vector<int> nums = {1};
    int target = 9;

    cout << search1(nums, target) << endl;
}

int main()
{
    test1();
    return 0;
}
