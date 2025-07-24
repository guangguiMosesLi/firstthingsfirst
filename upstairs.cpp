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
    cout << "������¥�ݼ���" << endl;
    int n;
    cin >> n;
    climbStairs(n);//ִ�к���
    cout << "�� " << n << " ��¥�ݵķ������ǣ�" << climbStairs(n) << endl;
     return 0;
}