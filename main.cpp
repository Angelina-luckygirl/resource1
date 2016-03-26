//李妍 2015.3.4
//四则运算 
#include<iostream>
#include<string>
#include<stdlib.h>
#include<time.h>
using namespace std;
void main()
{
	srand((unsigned)time(NULL));//设置时间种子 ，以使程序每次得到的结果都不同 
	for (int i = 0; i < 30; i++)
	{
		int a, b, c;
		int fenmu_1, fenmu_2;
		//生成第一个操作数
		a = (rand() % (100)) + 1;
		if (a == 100)
		{
			a = (rand() % 99) + 1;
			fenmu_1 = a + (rand() % (99 - a + 1));
			cout << "(" << a << "/" << fenmu_1 << ")";
		}
		else cout << a;

		//随机生成运算符
		char o;
		c = (rand() % 100) % 4;
		if (c == 0) o = '+';
		else if (c == 1) o = '-';
		else if (c == 2) o = '*';
		else o = '/';
		cout << o;
		//生成第二个操作数
		b = 1 + rand() % (100);
		if (b == 100)
		{
			b = (rand() % 99) + 1;
			fenmu_2 = b + (rand() % (99 - b + 1));
			cout << "(" << b << "/" << fenmu_2 << ")";
		}
		else cout << b;
		cout << "=";
		cout << endl;
	}

}
