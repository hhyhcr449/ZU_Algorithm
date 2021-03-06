﻿// 3_21_一元多项式求导.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//设计函数求一元多项式的导数。

//输入格式:
//以指数递降方式输入多项式非零项系数和指数（绝对值均为不超过1000的整数）。数字间以空格分隔。
//输出格式 :
//以与输入相同的格式输出导数多项式非零项的系数和指数。数字间以空格分隔，但结尾不能有多余空格。

//输入样例 :
//3 4 - 5 2 6 1 - 2 0
//输出样例 :
//12 3 - 10 1 6 0

#include <iostream>

using namespace std;

int main()
{
	int c, e;
	char end;
	cin >> c >> e;
	end = getchar();
	if (e == 0) {
		cout << "0 0";
		return 0;
	}             
	else cout << c * e << " " << e - 1;
	while (end != '\n' && end != '\0')
	{
		cin >> c >> e;
		end = getchar();
		if (e == 0) return 0;
		else cout << " " << c * e << " " << e - 1;
	}
	return 0;
}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
