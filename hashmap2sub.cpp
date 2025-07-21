#include <iostream>
#include <unordered_map>
#include <cstring>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t; // ���������ַ���

    int a, b;
    a = s.length();
    b = t.length(); // ������ string �ĳ���

    if (a != b)
    {
        cout << "NO" << endl;
        return 1;
    }

    unordered_map<char, int> freq;
    for (char c : s) freq[c]++; // ͳ�� s ���ַ�Ƶ��
    for (char c : t) freq[c]--; // ��ȥ t ���ַ�Ƶ��

    // �ж��Ƿ�����ֵ��Ϊ 0��C++11 ����д����
    for (const auto& entry : freq) // entry �� pair<char, int>
    {
        if (entry.second != 0) // ���ĳ���ַ��ļ�����Ϊ 0
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl; // �����ַ�������Ϊ 0
    return 0;
}