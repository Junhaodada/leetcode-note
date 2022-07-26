#include <cstdio>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class MyQueue
{
public:
    stack<int> stIn;  //入栈
    stack<int> stOut; //出栈
    MyQueue()
    {
    }

    void push(int x)
    {
        stIn.push(x);
    }

    int pop()
    {
        if (!stOut.empty())
        {
            while (!stIn.empty())
            {
                stOut.push(stIn.top());
                stIn.pop();
            }
        }
        int reult = stOut.top();
        stOut.pop();
        return reult;
    }

    int peek()
    {
        int result = this->pop();
        stOut.push(result);
        return result;
    }

    bool empty()
    {
        return stIn.empty() && stOut.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
int main()
{

    return 0;
}
