﻿// 7-69 数组元素的删除 (5分)
//完成数组元素的移动功能：假设数组有n个元素，输入一个数x，把数组的第x个位置的元素删除了，后面的元素依次前进一个位置。 重复若干次这样的删除，得到最后的结果。

//输入格式:
//第一行包括一个整数n（1<=n<=100），表示数组元素的个数。 第二行输入n个数组元素，均为整数，用空格隔开。 第三行输入一个数k（1<=k<=100），表示要进行k次删除。 接下来k行，每行一个数x，表示要删除第x个元素。

//输出格式:
//输出经过k次删除后的数组，每两个元素之间用空格隔开。

//输入样例:
//10
//1 2 3 4 5 6 7 8 9 10
//4
//3
//2
//4
//6

//输出样例:
//1 4 5 7 8 10

#include <stdio.h>

int main() {
	int n, k, x;
	scanf("%d", &n);
	int num[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	scanf("%d", &k);
	for (int i = 0; i < k; i++)
	{
		scanf("%d", &x);
		for (int j = x-1; j < n-1; j++)
		{
			num[j] = num[j + 1];
		}
		num[n - 1] = 0;
		n--;
	}
	printf("%d", num[0]);
	for (int i = 1; i < n; i++)
	{
		printf(" %d", num[i]);
	}
}
