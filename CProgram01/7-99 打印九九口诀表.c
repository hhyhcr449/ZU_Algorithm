﻿// 7-99 打印九九口诀表 (15分) 
//本题要求对任意给定的一位正整数N，输出从1*1到N*N的部分口诀表。

//输入格式：
//输入在一行中给出一个正整数N（1≤N≤9）。

//输出格式：
//输出下三角N*N部分口诀表，其中等号右边数字占4位、左对齐。

//输入样例：
//4
 
//输出样例：
//1*1=1   
//1*2=2   2*2=4   
//1*3=3   2*3=6   3*3=9   
//1*4=4   2*4=8   3*4=12  4*4=16  

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for (int j = 1; j <= n; j++)
	{
		for (int i = 1; i <= j; i++)
		{
			printf("%d*%d=%-4d", i, j, i * j);
		}
		printf("\n");
	}
}