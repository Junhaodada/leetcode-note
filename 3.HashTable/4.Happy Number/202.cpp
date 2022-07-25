#include <cstdio>
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution
{
public:
    int getSum(int n)
    {
        int sum = 0;
        while (n)
        {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n)
    {
        unordered_set<int> set;
        while (1)
        {
            int sum = getSum(n);
            if (sum == 1)
            {
                return true;
            }
            if (set.find(sum) != set.end())
            {
                return false;
            }
            else
            {
                set.insert(sum);
            }
            n = sum;
        }
    }
};
void test()
{
    int n = 19;
    Solution s;
    cout << s.isHappy(n);
}
int main()
{
    test();
    return 0;
}