#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1.���泣��
//2.const���εĳ�����  �������ٸı�
//3.define ����ı�ʶ������  
//4.ö�ٳ���
//int main() {

	//30;
	//3.14;
	//'w';//�ַ�
	//"abc";//�ַ���
	//const int a = 10;//c�У�const���ε�a�������Ǳ����������ܱ��޸ģ��г��������ԡ�
	
	
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


//ö�ٳ���

enum Color
{
	RED,
	GREEN,
	BLUE
	//��������ö�ٳ�����enumö�ٷ���
};

//�Ա�

enum Sex
{
	MALE,
FAMLE,
SECRET


};
int main() 
{

	//��ԭɫ
	//Red Green Blue
	int num = 10;
	enum Color c = RED;
	//RED = 20;
	//MAN = 20;//ö�ٳ����������Ըı�ֵ
	return 0;
}