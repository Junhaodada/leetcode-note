#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

// 二维数组的内存地址空间连续
void test_arr()
{
    int array[2][3] = {
        {0, 1, 2},
        {3, 4, 5}};
    cout << &array[0][0] << " " << &array[0][1] << " " << &array[0][2] << endl;
    cout << &array[1][0] << " " << &array[1][1] << " " << &array[1][2] << endl;
    // output:
    // 0x61fdd0 0x61fdd4 0x61fdd8
    // 0x61fddc 0x61fde0 0x61fde4
}

// 704. 二分查找
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
void test1()
{
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;

    cout << search(nums, target) << endl;
}
int main()
{
    // test_arr();
    test1();
    return 0;
}
