#include<iostream>
#include<unordered_map>
#include<cstring>
using namespace std;

int main()
{
	string s, t;
	cin >> s >> t;//���������ַ���

	int a, b;
	a = s.length();
	b = t.length();//������string�ĳ���

	if (a != b)
	{
		cout << "NO" << endl;
		return 1;
	}

	unordered_map<char, int>freqs;
	unordered_map<char, int>freqt;//����������ϣ��

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
	}//ֱ�ӱȽ�������ϣ��
	return 0;
}