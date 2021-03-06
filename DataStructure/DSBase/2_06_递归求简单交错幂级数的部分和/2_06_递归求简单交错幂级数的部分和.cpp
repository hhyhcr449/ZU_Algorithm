﻿// 2_06_递归求简单交错幂级数的部分和.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//本题要求实现一个函数，计算下列简单交错幂级数的部分和：
//f(x, n) = x−x​^2 + x^3​​ −x​^4​​ + ⋯ + (−1)​^n−1​​ x​^n​​

#include <stdio.h>

double fn(double x, int n);

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%.2f\n", fn(x, n));

    return 0;
}

/* 你的代码将被嵌在这里 */
double fn(double x, int n) {
    if (n == 1)return x;
    else return (x * (1 - fn(x, n - 1)));
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
