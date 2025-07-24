#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main()
{
	cout << "请输入数组的大小m" << endl;
	int m;
	cin >> m;
	if (m > 100)
	{
		cout << "输入超过最大容量100，请重新输入" << endl;
		return 1;
	}

	cout << "请输入数组" << endl;
	int num[100];
	for (int i = 0; i < m; i++)
	{
		cin >> num[i];
	}//先输入有几个数，再处理输入

	
	unordered_map<int, int>freq;//定义哈希表

	for (int j = 0; j < m; j++)
	{
		int n;
		n = num[j];
		freq[n]++;
	}
	bool found = false;//***用bool标志清晰可控
	for (const auto & pair : freq)
	{
		if (pair.second == 1) {
			cout << pair.first<< "这个数字只出现了一次" << endl;
			found = true;
		}
	}
	
	if (!found) {
		cout << "没有只出现一次的数字" << endl;
	}//检索出那个只出现了一次的数
	return 0;
}