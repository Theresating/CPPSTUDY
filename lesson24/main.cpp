#include<stdio.h>
#include <intsafe.h>
int main(){
	/*
	ϰ��

	1.���û�����һ�������������a>100,��ʾ��too large�������<=0,��ʾ��too small��
	  ���������ʾ��OK��
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
	2.���û�����2������a��b,��a��b��λ�ڡ�0-100��֮��ʱ����ʾ��OK��������ʾ��bad input��
	  int a=0;
	  int b=0;//��%��d�м���������Ϊ�ַ���ȣ�ǰ�����Ϳ�����ռλ��0
	  printf("please input:");//������%2d������������֮�䲻�ӡ�������Ĭ�������ǰ2n��Ϊ��Ч����
	  scanf_s("%d,%d", &a,&b);//�ڿ����ֵǰ��*���������˲���
	  if ((a >= 0 && a <= 100)&&( b >= 0 && b <= 100))
	  {
	     printf("OK \n");
	  }
	  else
	  {
	     printf("bad input \n");
	  }
	3.ĳ�����Ƿֶκ�������x<0ʱ��y=x+1,��x>=0ʱy=4*x*x*X,
	  ��c++����������û�����һ��С��x,����������Ĺ�ʽ�����Ӧ��yֵ.
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
	4.���û�����1-3����a,����1��ӡvery good������2��ӡgood������3��ӡnot bad
	  Ȼ���˳�����
	  �ⷨ1��
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
	  �ⷨ2��
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
    5.��һ����������int a [128],����for���ÿһ��Ԫ�ص�ֵΪ
	  a[0]=127,a[1]=126,...a[127]=0.
	  int a[128];
	  for (int i = 0; i < 128;i++)
	  {//�뿴���鵹�ý����Ҫ��return���Ӷϵ�ſɿ���ȫ����ȷ����Ԫ��
	  a[i] = 127 - i;
	  }
	6.ʹ��while���ʵ��������
	  int a[128];
	  int i = 0;
	  while (i<128)
	  {
	    a[i] = 127 - i;
	     i++;
	  }
	7.���û��ڿ���̨����ʮ��������ͳ�������ܹ��������������ĸ�����
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
	  printf("%d \n", count);//����ѭ��������
	8.��������10���������ֵ��ƽ��ֵ����Сֵ
	���ֵ��
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
	��Сֵ��
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
	ƽ��ֵ��
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
	

    9.��ӡ��100��������������
	�ⷨһ��
	˼·���ҳ�����
	int count[100] = {0};//���ڴ洢�������Ĵ���
	int i = 1;//����
	int prime = 0;//��������
	int n = 2;//����
	for (int n = 2; n < 100;n++)
	{//���ѭ���Ǳ�������2��100
	for (int i = 1; i <= n; i++)
	{//�ڲ�ѭ���ǳ�����1������
	if (n%i == 0)
	{//������n���Գ���i����Ϊ0�ߣ�����������������1
	count[n - 2] += 1;
	}
	}
	if (count[n - 2] == 2)
	{//�������������Ϊ2,��ֻ��1�ͱ���������Ϊ����
	printf("%d \n", n);//��ӡ��������
	prime += 1;//����������1
	}

	}//��ӡ��������
	printf("total:%d \n", prime);

	�ⷨ����
	˼·���޳�����
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

	10.��һ�����֡�china is a great country with a long history��
	   ��ͳ�Ƴ�����Ԫ����ĸ�ͷ�Ԫ����ĸ��aeiou AEIOU
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
	   if (ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')//�жϱ�������ĸ
	   {//�жϱ�����Ԫ����ĸ
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
	11.��ӡnxn�ϵ�������
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