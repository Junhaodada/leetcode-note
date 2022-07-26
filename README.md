# leetcode-note

## 刷题顺序

数组-> 链表-> 哈希表->字符串->栈与队列->树->回溯->贪心->动态规划->图论->高级数据结构


## [第一阶段](https://programmercarl.com/)`《代码随想录》`


### 时间复杂度

什么是算法的时间复杂度？

> 问题规模为n，算法执行数量函数f(n)的上界，O(f(n))

**一个排序**

O(1)常数阶 < O(logn)对数阶 < O(n)线性阶 < O(n^2)平方阶 < O(n^3)立方阶 < O(2^n)指数阶


### 数组

- 二分查找法
- 双指针法
- 滑动窗口

<img src="img/数组总结.png" alt="img"  />

### 链表

结构

- 单链表
- 双链表
- 循环链表

```c++
struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(NULL){}
}
```

```python
class ListNode:
    def __init__(self, val, next=None):
        self.val = val
        self.next = next
```

```java
public class ListNode {
    // 结点的值
    int val;

    // 下一个结点
    ListNode next;

    // 节点的构造函数(无参)
    public ListNode() {
    }

    // 节点的构造函数(有一个参数)
    public ListNode(int val) {
        this.val = val;
    }

    // 节点的构造函数(有两个参数)
    public ListNode(int val, ListNode next) {
        this.val = val;
        this.next = next;
    }
}
```

操作

- 增加节点-O(1)
- 删除节点-O(1)
- 查询-O(n)

![img](img/链表总结.png)

### 哈希表

- 哈希表
- 哈希函数
- 哈希冲突
- 哈希结构
  - 数组
  - set （集合）
  - map(映射)

### 字符串

- 双指针
- 反转
- KMP

### 双指针

- 练习题

### 栈队列

- 栈：先进后出
- 队列：先进先出



### 二叉树

![img](img/二叉树总结.png)

### 回溯算法





### 贪心算法



### 动态规划



### 单调栈

