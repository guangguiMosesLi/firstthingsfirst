#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
	int num[100];
	int n, target;

	cout << "请输入元素个数" << endl;
	cin >> n;

	cout << "请输入数组元素" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}

	cout << "请输入目标和" << endl;
	cin >> target;

	unordered_map<int, int>seen;//建立哈希表

	for (int i = 0; i < n; i++)
	{
		int need = target - num[i];//需要找到的数
		if (seen.count(need))
		{
			cout << "找到答案：下标 " << seen[need] << " 和 " << i << endl;
			cout << "数值是 " << num[seen[need]] << " + " << num[i] << " = " << target << endl;
			return 0;
		}
		seen[num[i]] = i;//把当前值和下标放入哈希表
	}
    
	cout << "没有找到符合条件的两个数" << endl;
	return 0;
}
