#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a; // �����ַ���

    unordered_map<char, int> freq;

    for (char c : a) {
        freq[c]++; // ÿ�ο����ַ� c��Ƶ�ʼ�һ
    }

    for (auto& p : freq) {
        cout << p.first << " -> " << p.second << endl;
    }//��ӡa,b,c�ȶ�Ӧ��Ƶ�ʡ�

    return 0;
}