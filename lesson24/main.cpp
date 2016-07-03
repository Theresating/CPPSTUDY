#include<stdio.h>
#include <intsafe.h>
int main(){
	/*
	习题

	1.令用户输入一个整数啊，如果a>100,提示“too large”；如果<=0,提示“too small”
	  其他情况提示“OK”
	  int n = 111;
	  if (n>100)
	  {
	  printf("too large \n");
	  }
	  else if (n <= 0)
	  {
	  printf("too small \n");
	  }
	  else
	  {
	  printf("OK \n");
	  }
	2.令用户输入2个整数a和b,当a和b都位于【0-100】之间时，提示“OK”否则提示“bad input”
	  int a=0;
	  int b=0;//在%与d中间所加数字为字符宽度，前面加零就可以有占位符0
	  printf("please input:");//若加上%2d数字且两变量之间不加“，”则默认输入的前2n个为有效数字
	  scanf_s("%d,%d", &a,&b);//在宽度数值前加*可以跳过此部分
	  if ((a >= 0 && a <= 100)&&( b >= 0 && b <= 100))
	  {
	     printf("OK \n");
	  }
	  else
	  {
	     printf("bad input \n");
	  }
	3.某函数是分段函数，当x<0时，y=x+1,当x>=0时y=4*x*x*X,
	  用c++代码完成令用户输入一个小数x,但根据上面的公式算出相应的y值.
	  int x = 2;
	  int y = 0;
	  if (x<0)
	  {
	      y = x + 1;
	  }
	  else
	  {//y=32
	      y = 4 * x*x*x;
	  }
	4.令用户输入1-3整数a,输入1打印very good，输入2打印good，输入3打印not bad
	  然后退出程序。
	  解法1：
	  int a = 0;
	  printf("please input:")
	  scanf_s("%d", &a);
	  if (a == 1)
	  {
	  printf("very good");
	  }
	  else if (a == 2)
	  {
	  printf("good");
	  }
	  else if (a == 3)
	  {
	  printf("not bad");
	  }
	  else
	  printf("bad input \n");
	  解法2：
	  int ch = 0;
	  printf("please input:");
	  scanf_s("%d", &ch);
	  switch (ch)
	  {
	  case 1:
	  printf("very good! \n");
	  break;
	  case 2:
	  printf("good! \n");
	  break;
	  case 3:
	  printf("not bad! \n");
	  break;
	  default:
	  printf("bad input! \n");
	  break;
	  }
    5.有一个整数数组int a [128],请用for语句每一个元素的值为
	  a[0]=127,a[1]=126,...a[127]=0.
	  int a[128];
	  for (int i = 0; i < 128;i++)
	  {//想看数组倒置结果需要在return处加断点才可看到全部正确数组元素
	  a[i] = 127 - i;
	  }
	6.使用while语句实现上题结果
	  int a[128];
	  int i = 0;
	  while (i<128)
	  {
	    a[i] = 127 - i;
	     i++;
	  }
	7.让用户在控制台输入十个整数，统计其中能够被三整除的数的个数。
	  int arr[10];
	  for (int i = 0; i < 10;i++)
	  {
	  arr[i] = i + 1;
	  }
	  int count = 0;
	  for (int i = 0; i < 10;i++)
	  {
	    if (arr[i]%3==0)
	   {
	      count += 1;
	   }
	  }
	  printf("%d \n", count);//放在循环体外面
	8.求上题中10个数中最大值，平均值，最小值
	最大值：
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
	arr[i] = i + 1;
	}
	int max = 0;
	for (int i = 0; i < 10; i++)
	{
	if (arr[i] > max )
	{
	max=arr[i];
	}
	}
	printf("max:%d \n", max);
	最小值：
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
	printf("please input: ");
	scanf_s("%d",&arr[i]);

	}
	int min = INT_MAX;
	for (int i = 0; i < 10; i++)
	{
	if (arr[i] < min)
	{
	min = arr[i];
	}
	}
	printf("min:%d \n", min);
	平均值：
	int arr[10];
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
	printf("please input: ");
	scanf_s("%d", &arr[i]);
	count++;

	}
	int aver = 0;
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
	sum += arr[i];
	}
	aver = sum / count;
	printf("aver:%d \n", aver);
	

    9.打印出100以内所有质数。
	解法一：
	思路：找出质数
	int count[100] = {0};//用于存储被整除的次数
	int i = 1;//除数
	int prime = 0;//质数个数
	int n = 2;//除数
	for (int n = 2; n < 100;n++)
	{//外层循环是被除数从2到100
	for (int i = 1; i <= n; i++)
	{//内层循环是除数从1到本身
	if (n%i == 0)
	{//被除数n除以除数i余数为0者，该树被整除次数加1
	count[n - 2] += 1;
	}
	}
	if (count[n - 2] == 2)
	{//如果被整除次数为2,即只被1和本身整除者为质数
	printf("%d \n", n);//打印质数本身
	prime += 1;//质数个数加1
	}

	}//打印除数个数
	printf("total:%d \n", prime);

	解法二：
	思路：剔除合数
	int count = 0;
	for (int n = 2; n < 100; n++)
	{
	bool prime = true;
	for (int i = 2; i < n; i++)
	{
	if (n%i == 0)
	{
	prime = false;
	break;
	}
	}
	if (prime)
	{
	printf("%d \n", n);//prime
	count += 1;
	}
	}
	printf("total:%d \n", count);

	10.有一段文字“china is a great country with a long history”
	   请统计出其中元音字母和非元音字母。aeiou AEIOU
	   int count1 = 0;
	   int count2 = 0;
	   char str[] = "china is a great country with a long history";
	   for (int i = 0;  ;i++)
	   {
	   char ch = str[i];
	   if (ch==0)
	   {
	   break;
	   }
	   if (ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')//判断必须是字母
	   {//判断必须是元音字母
	   if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'
	   || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	   {
	   count1++;
	   }
	   else
	   {
	   count2++;
	   }
	   }
	   }
	11.打印nxn上的三角阵
	   *********
	    ********
		 *******
		  ******
		   *****
		    ****
			 ***
			  **
			   *
			   int n = 10;
			   for (int i = 0; i < n;i++)
			   {
			   for (int j = 0; j < n;j++)
			   {
			   if (j>=i)
			   {
			   printf("*");
			   }
			   else
			   {
			   printf(" ");
			   }
			   }
			   printf("\n");
			   }


	
	
	*/





	
	



























	return 0;
}