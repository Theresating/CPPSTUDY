/*
��c++�и��ݱ�������λ�ò�ͬ��Ϊ��
1.ȫ�ֱ���
2.�ֲ�����

��һ��ȫ�ֱ�����
   1.���壺
        �ں���֮��ı�����Ϊȫ�ֱ��� ��global variable��
        (��ͼ->�򿪽������������Ctrl+alt+l)
   2.�ص㣺
       1.�ڳ������й�����ʼ�մ��ڣ�������������ģ�
	     ��main������ʼ��һֱ��main�˳�
	   2.�ڸ��������У����ܷ��ʣ�ȫ�ֿɼ���
   3.��;��
       �洢һЩȫ�������ݣ����޷�ʵ�ִ�ֵʱ����ʹ��ȫ�ֱ���
	   ����ȫ�ֱ�����Ϊ�����α���ʱ����д�α���
   4.���⣺
     ��1��
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
   ��2��
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
�������ֲ�����
   1.���壺
     �ں����ڶ���ı�����Ϊ�ֲ�������local variable��
	 �α���Ҳ���ھֲ�����
   2.���⣺
    ��[a,b]���������б�7���������ĺ�
	int test(int a, int b)
	{
	int sum = 0;
	for (int i = a; i < b;i++)
	{
	if (i%7==0)//���뺯���ڲ���Ч
	{
	sum += i;//�ֲ�����
	}
	}
	return sum;
	}
	#include <stdio.h>
	int main()
	{//��main�������޷�����sum
	printf("result:%d \n", test(7, 15));
	}
  3.�ص㣺
    3.1�ڽ��뺯��ʱ��Ч�����˳�����ʱʧЧ�������ڶ̣�
    3.2���ڱ������ڿ��Է��ʣ��ڱ�ĺ����ڲ����Է��ʣ��ֲ��ɼ���
  4.��;��
    ��ʱʹ�ã����˳����ڴ����ź�ʧЧ
    �ֲ���������ȫ�����ȫ�ֱ�����
  5.�ŵ㣺
	�ѱ������ں����⼴�ɣ������ͱ���޲κ�����
	���������⣬�﷨������
  6.ȱ�㣺
	1.ռ���˲���Ҫ�Ŀռ�
	2.ȫ�ֱ���һֱռ�ÿռ�
	3.�ֲ����������˳��������Ƿ���
	4.���������г��ֻ��ҵĿ���
	5.�ɶ��Բ�
	6.Υ���ں�ԭ��
      ��˾�����ʹ��ȫ�ֱ���
��������ҵ��
    1.����һ��ȫ�����飬��main������ȡ�û����룬�浽��������
	  ��������С����ע�⣺Ҫ��¼�û������˶��ٸ���?
	  #include<stdio.h>
	  int arr[100];
	  int i;
	  int main()
	  {
	  for (i = 0; i < 100;i++)
	  {
	  printf("please input:");
	  scanf_s("%d", &arr[i]);
	  if (arr[i]==-1)
	  {
	  break;
	  }
	  }
	  printf("you have input:%d \n", i);
	  return 0;
	  }

	2.дһ�������������������ֵ��Сֵ?
	  �ⷨ1��
	  #include <stdio.h>
	  int arr[4] = { 1, 2, 3, 4 };
	  int Max()
	  {
	  int max = arr[0];
	  for (int i = 1; i < 4; i++)
	  {
	  if (arr[i] > max)
	  {
	  max = arr[i];
	  }
	  }
	  return max;
	  }
	  int Min()
	  {
	  int min = arr[0];
	  for (int i = 1; i < 4; i++)
	  {
	  if (arr[i] < min)
	  {
	  min = arr[i];
	  }
	  }
	  return min;
	  }
	  int main()
	  {
	  printf("max is:%d \n", Max());
	  printf("min is:%d \n", Min());
	  return 0;
	  }
	  �ⷨ2��
	  #include<stdio.h>
	  int arr[4] = { 1, 2, 3, 4 };
	  int max = arr[0];
	  int min = arr[0];
	  void Max_Min()
	  {
	    for (int i = 1; i < 4;i++)
	    {
	       if (max<arr[i])
	       {
	           max = arr[i];
	       }
	       if (min > arr[i])
	       {
	          min = arr[i];
	       }
	    }
	  }
	  int main()
	  {
	      Max_Min();
	      printf("max is: %d \nmin is:%d \n", max,min);
	      return 0;
	  }
	  �ⷨ3��
	  #include<stdio.h>
	  int arr[4] = { 1, 2, 3, 4 };
	  struct M
	  {
	     int max;
	     int min;
	  };
	  M a;
	  void Max_Min()
	  {
	     a.max = arr[0];
	     a.min = arr[0];
	     for (int i = 1; i < 4; i++)
	     {
	        if (a.max < arr[i])
	        {
	           a.max = arr[i];
	        }
	        if (a.min > arr[i])
	        {
	           a.min = arr[i];
	        }
	     }
	  }
	  int main()
	  {
	     Max_Min();
	     printf("max is: %d \nmin is:%d \n",a.max,a.min);
	     return 0;
	  }
*/










































