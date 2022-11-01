#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}

//void test()
//{
//	static int a = 1;//static 静态局部变量，保留上一次的输出值，使局部变量生命周期变长
//	a++;
//	printf("a=%d\n", a);
//}

//extern int Add(int, int);

//#define MAX 100
//#define定义的标识符常量
//#define定义宏-带参数

//函数的实现
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

//宏的定义
#define MAX(X,Y) (X>Y?X:Y)

int main()
{
	int a = 10;
	int b = 20;
	//函数
	int max = Max(a, b);
	printf("max=%d\n", max);
	//宏
	max = MAX(a,b);
	printf("max=%d\n", max);
	return 0;




	/*int a = 10;
	int b = 20;
	Add(a, b);
	int sum = Add(a, b);
	printf("sum=%d", sum);
		return 0;*/

	//extern-申明外部符号
	/*extern int g_val;
	printf("%d\n", g_val);
	return 0;*/
     
	//typedef-类型定义-类型重定义-类型重命名
	
	//static变量
	/*int i = 0;
	while (i < 5)
	{	test();
		i++;
	}
	return 0;*/

	//int定义的变量是有符号的=signed int;
	//unsigned int num=1;无符号变量;u_int
	//struct-结构体关键字
	//union-联合体/共用体
	//volatile
	//定义变量名是，不能够与关键词重合

	//register int a = 10;//把a定义为寄存器变量
	//return 0;
	
	//int a = 10;//局部变量-自动变量auto
	//return 0;


  //  int arr[10] = { 0 };
  //arr[4];//下标引用操作符

	 //int a = 10;
	 //int b = 20;
	 //int sum = Add(a, b);//()函数调用操作符号

	 //return 0;
    

//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a: b);//条件操作符，三目操作符，等价于：if (a > b)
//	                                                    //max = a;
//	                                                    //else
//	                                                    //max = b;
//	printf("%d\n", max);
//	return 0;

	//0为假，非零为真
	//&&逻辑与:Logical conjunction
	//||逻辑或:logical or
	//int a = 0;
	//int b = 5;
	////int c = a && b;
	//int c = a || b;
	//printf("c=%d\n", c);
	//return 0;

	//int a =(int) 3.14;//本来是double，现在是强制转换成整型
	//return 0;

	//int a = 10;
	//int b = a++;//后置++，先使用，再++，先把a=10赋值给b，然后再加1
	//int b = ++a;//前置++，先++，再使用，先把a加1，然后再把a+1赋值给b
	//int b = a--;//后置--，先使用，再--，先把a=10赋值给b，然后再减1
	//int b = --a;//前置--，先--，再使用，先把a减1，然后再把a-1赋值给b
	//printf("a=%d b=%d\n", a, b);
	//return 0;

	//int a = 0;//4字节，32bit位
	//int b = ~a;//是有符号的整型
	//~--按（2进制）位取反
	//00000000000000000000000
	//11111111111111111111111
	//原码，反码，补码
	//只要是整数，内存中储存的都是二进制补码
	// 正数--原码，反码，补码 相同
	// 负数--
	//11111111111111111111111 中，最高位是符号位,1为负数，0为正数
	//所以b应该是100000000000000001
	//printf("%d\n", b);//使用的，打印的是这个数的原码


	/*int num1=10;
	int num2=20;
	int max = 0;
	max = Max(num1, num2);
	printf("max=%d\n", max);
	return 0;*/
}