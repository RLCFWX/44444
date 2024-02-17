#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1.字面常量
//2.const修饰的常变量  不可以再改变
//3.define 定义的标识符常量  
//4.枚举常量
//int main() {

	//30;
	//3.14;
	//'w';//字符
	//"abc";//字符串
	//const int a = 10;//c中，const修饰的a，本质是变量，但不能被修改，有常量的属性。
	
	
//	const int n = 10;
//	int arr[10] = {0};
//	
//	
//	
//	return 0;
//
//}
//
//#define MAX 100
//#define STR "abcdf"
//int main() {
//	
//
//	printf("%d\n", MAX);
//	
//	int a = MAX;
//	printf("%d\n", a);
//	printf("%s\n",STR);
//	return 0;
//}


//枚举常量

enum Color
{
	RED,
	GREEN,
	BLUE
	//这三个是枚举常量，enum枚举符号
};

//性别

enum Sex
{
	MALE,
FAMLE,
SECRET


};
int main() 
{

	//三原色
	//Red Green Blue
	int num = 10;
	enum Color c = RED;
	//RED = 20;
	//MAN = 20;//枚举常量，不可以改变值
	return 0;
}