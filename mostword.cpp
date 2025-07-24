#include<iostream>
#include<unordered_map>
#include<cctype>
#include<string>
const int MAX = 1000;
using namespace std;
int main()
{
    string input;
    cout << "请输入英文文本" << endl;
    getline(cin, input);

    string currentWord;
    string words[MAX]; // 固定大小数组
    int wordCount = 0; // 已存储单词计数器

    for (char c : input) {
        if (isalpha(c)) { // 只保留字母
            currentWord += tolower(c); // 转小写并添加到当前单词
        }
        else if (c == ' ' && !currentWord.empty()) {
            if (wordCount < MAX) { // 检查是否超过数组容量
                words[wordCount++] = currentWord; // 存储单词并增加计数器
                currentWord.clear();
            }
            else {
                cout << "数组已满！！！" << endl;
                break;
            }
        }
        // 忽略其他字符（标点、数字等）
    }

    // 处理最后一个单词（如果存在且数组未满）
    if (!currentWord.empty() && wordCount < MAX) {
        words[wordCount++] = currentWord;
    }

    unordered_map<string, int>freq;//建立哈希表
    for (int i = 0; i < wordCount; i++)
    {
        freq[words[i]]++;
    }//统计词频


    int max_value = 0;
    string max_key;
    for (const auto& pair : freq)
    {
        if (pair.second > max_value) {
            max_value = pair.second;
            max_key = pair.first;
        }
    }
    cout << "出现最多的词是" << max_key << endl;
	return 0;
}
