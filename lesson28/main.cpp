/*
在c++中根据变量定义位置不同分为：
1.全局变量
2.局部变量

（一）全局变量：
   定义：
        在函数之外的变量称为全局变量 global variable
        (视图->打开解决方案管理器Ctrl+alt+l)
   特点：
       1.在程序运行过程中始终存在（生命期是永恒的）
	     从main函数开始，一直到main退出
	   2.在各个函数中，均能访问（全局可见）
   用途：
       存储一些全局性数据，当无法实现传值时考虑使用全局变量
   例1：

   #include<stdio.h>
   int number = 0;
   void increase(int n)
   {
   number += n;
   }
   void decrease(int n)
   {
   number -= n;
   }
   int main()
   {
   number = 10;
   increase(1);//now:11
   printf("now:%d \n", number);
   decrease(2);//now:9
   printf("now:%d \n", number);
   return 0;
   }
   例2：

   int data[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
   double aver()
   {
   int sum = 0;
   for (int i = 0; i < 8;i++)
   {
   sum += data[i];
   }
   return sum / 8.0;
   }
   #include <stdio.h>
   int main()
   {
   double ret = aver();
   printf("result:%.2f \n", ret);
   return 0;
   }

（二）局部变量
 定义：
     在函数内定义的变量称为局部变量（local variable）
	 参变量也属于局部变量
 例题：
    求[a,b]区间内所有被7整除的数的和
	int test(int a, int b)
	{
	int sum = 0;
	for (int i = a; i < b;i++)
	{
	if (i%7==0)//进入函数内才有效
	{
	sum += i;//局部变量
	}
	}
	return sum;
	}
	#include <stdio.h>
	int main()
	{//在main函数内无法访问sum
	printf("result:%d \n", test(7, 15));
	}
特点：
   1.在进入函数时生效，在退出函数时失效（生命期短）
   2.尽在本函数内可以访问，在别的函数内不可以访问（局部可见）
用途：
    临时使用，在退出所在大括号后失效
局部变量可以全部变成全局变量吗？
	优点：
	把变量放在函数外即可，函数就变成无参函数了
	功能无问题，语法无问题
	缺点：
	1.占用了不必要的空间
	2.全局变量一直占用空间
	3.局部变量函数退出变量就是放了
	4.命名问题有出现混乱的可能
	5.可读性差
	6.违反黑盒原理
因此尽量少使用全局变量
 作业：
    1.定义一个全局数组，在main函数读取用户输入，存到此数组中
	  允许输入小数，注意：要记录用户输入了多少个数?
	2.写一个函数求出该数组的最大值最小值?


*/
int arr[4] = { 27, 33, 3, 30 };
int i = 0;
int test(arr[i])
{
	for (int i = 0; i < 4;i++)
	{
		for (int j = 1; j < 4;i++)
		{
		}
      
	}





}












































