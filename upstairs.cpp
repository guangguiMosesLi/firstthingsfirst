#include<iostream>
#include<unordered_map>
using namespace std;
unordered_map<int, int> memo;

int climbStairs(int n)
{
    if (n <= 2)
        return n;
    if (memo.count(n)) return memo[n];
    memo[n] = climbStairs(n - 1) + climbStairs(n - 2);
    return memo[n];
}
int main()
{
    cout << "请输入楼梯级数" << endl;
    int n;
    cin >> n;
    climbStairs(n);//执行函数
    cout << "爬 " << n << " 阶楼梯的方法数是：" << climbStairs(n) << endl;
     return 0;
}