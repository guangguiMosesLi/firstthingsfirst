#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a; // 输入字符串

    unordered_map<char, int> freq;

    for (char c : a) {
        freq[c]++; // 每次看到字符 c，频率加一
    }

    for (auto& p : freq) {
        cout << p.first << " -> " << p.second << endl;
    }//打印a,b,c等对应的频率。

    return 0;
}