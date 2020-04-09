﻿// 7-79 N个数求和 (20分)
//本题的要求很简单，就是求N个数字的和。麻烦的是，这些数字是以有理数分子/分母的形式给出的，你输出的和也必须是有理数的形式。

//输入格式：
//输入第一行给出一个正整数N（≤100）。随后一行按格式a1/b1 a2/b2 ...给出N个有理数。题目保证所有分子和分母都在长整型范围内。另外，负数的符号一定出现在分子前面。

//输出格式：
//输出上述数字和的最简形式 —— 即将结果写成整数部分 分数部分，其中分数部分写成分子/分母，要求分子小于分母，且它们没有公因子。如果结果的整数部分为0，则只输出分数部分。

//输入样例1：
//5
//2/5 4/15 1/30 -2/60 8/3
 
//输出样例1：
//3 1/3

#include <stdio.h>
#include <math.h>
int main() {
	int N;
	scanf("%d", &N);
	long a1, b1, a2, b2, c = 0, temp, m, n;
	scanf("%ld/%ld ", &a1, &b1);
	if (N > 1) {
		for (int i = 1; i < N; i++)
		{
			scanf("%ld/%ld", &a2, &b2);
			a1 = a1 * b2 + a2 * b1;
			b1 = b1 * b2;
			m = a1;
			n = b1;
			while (m % n != 0) {
				temp = n;
				n = m % n;
				m = temp;
			}
			a1 /= n;
			b1 /= n;
		}
	}
	c = a1 / b1;
	a1 -= c * b1;
	if (c == 0 & a1 == 0) printf("%d", 0);
	if (c != 0 & a1 != 0) printf("%d %ld/%ld", c, a1, b1);
	else {
		if (c != 0) printf("%d", c);
		if (a1 != 0)printf("%ld/%ld", a1, b1);
	}
}