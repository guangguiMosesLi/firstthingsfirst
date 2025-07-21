#include<iostream>
#include<unordered_map>
#include<cstring>
using namespace std;

int main()
{
	string s, t;
	cin >> s >> t;//输入两个字符串

	int a, b;
	a = s.length();
	b = t.length();//求两个string的长度

	if (a != b)
	{
		cout << "NO" << endl;
		return 1;
	}

	unordered_map<char, int>freqs;
	unordered_map<char, int>freqt;//建立两个哈希表

	for (char c : s) 
	{
		freqs[c]++;
	}
	for (char d : t)
	{
		freqt[d]++;
	}
	
	if (freqs == freqt)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}//直接比较两个哈希表
	return 0;
}