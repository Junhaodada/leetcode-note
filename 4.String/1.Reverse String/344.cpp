#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        for (int i = 0, j = s.size() - 1; i < s.size() / 2; i++, j--)
        {
            swap(s[i], s[j]);
        }
    }
};
void test()
{
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    Solution sl;
    sl.reverseString(s);
}
int main()
{
    test();
    return 0;
}