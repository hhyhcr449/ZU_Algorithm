﻿// 2_02_数组循环左移.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//本题要求实现一个对数组进行循环左移的简单函数：一个数组a中存有n（>0）个整数，在不允许使用另外数组的前提下，将每个整数循环向左移m（≥0）个位置，即将a中的数据由（a​0a1⋯a​n−1）变换为（am⋯a​n−1a0a1⋯a​m−1）（最前面的m个数循环移至最后面的m个位置）。如果还需要考虑程序移动数据的次数尽量少，要如何设计移动的方法？

//输入格式 :
//输入第1行给出正整数n（≤100）和整数m（≥0）；第2行给出n个整数，其间以空格分隔。
//输出格式 :
//在一行中输出循环左移m位以后的整数序列，之间用空格分隔，序列结尾不能有多余空格。

//输入样例：
//8 3
//1 2 3 4 5 6 7 8
//输出样例：
//4 5 6 7 8 1 2 3

//直接读到对应位置就行

#include <iostream>

int main()
{
    int M, N;
    scanf("%d %d", &N, &M);
    M = M % N;
    int num[N];

	for (int i = N - M; i < N; i++)
	{
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < N - M; i++)
	{
		scanf("%d", &num[i]);
	}
	printf("%d", num[0]);
	for (int i = 1; i < N; i++)
	{
		printf(" %d", num[i]);
	}
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
