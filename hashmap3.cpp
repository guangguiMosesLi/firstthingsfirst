#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main()
{
	cout << "����������Ĵ�Сm" << endl;
	int m;
	cin >> m;
	if (m > 100)
	{
		cout << "���볬���������100������������" << endl;
		return 1;
	}

	cout << "����������" << endl;
	int num[100];
	for (int i = 0; i < m; i++)
	{
		cin >> num[i];
	}//�������м��������ٴ�������

	
	unordered_map<int, int>freq;//�����ϣ��

	for (int j = 0; j < m; j++)
	{
		int n;
		n = num[j];
		freq[n]++;
	}
	bool found = false;//***��bool��־�����ɿ�
	for (const auto & pair : freq)
	{
		if (pair.second == 1) {
			cout << pair.first<< "�������ֻ������һ��" << endl;
			found = true;
		}
	}
	
	if (!found) {
		cout << "û��ֻ����һ�ε�����" << endl;
	}//�������Ǹ�ֻ������һ�ε���
	return 0;
}