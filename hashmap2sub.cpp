#include <iostream>
#include <unordered_map>
#include <cstring>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t; // 输入两个字符串

    int a, b;
    a = s.length();
    b = t.length(); // 求两个 string 的长度

    if (a != b)
    {
        cout << "NO" << endl;
        return 1;
    }

    unordered_map<char, int> freq;
    for (char c : s) freq[c]++; // 统计 s 的字符频率
    for (char c : t) freq[c]--; // 减去 t 的字符频率

    // 判断是否所有值都为 0（C++11 兼容写法）
    for (const auto& entry : freq) // entry 是 pair<char, int>
    {
        if (entry.second != 0) // 如果某个字符的计数不为 0
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl; // 所有字符计数均为 0
    return 0;
}