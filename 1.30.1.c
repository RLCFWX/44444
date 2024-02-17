//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//变量的作用域
//1.局部变量
//局部变量所在的局部范围
//
//2.全局变量
//作用整个工程
// 
//变量的生命周期
//局部变量
//进入作用域开始,出作用域结束
//全局变量
//整个程序的生命周期
//int main() {
//	{
//		int a = 100;
//		printf("%d\n", a);
//
//	}
//
//	return 0;
//
//}
//来自外部的符号 extern
//extern int a;
//void test() {
//
//	printf("test-->%d\n", a);
//}
//int main() {
//	test();
//	{
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//	return 0;
//}