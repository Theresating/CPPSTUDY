/*
�����ĵݹ����

(һ)���÷���
��������������һ�������е���
��ͨ�����
   main->a()->b()->c()
���������
   ͳ��Ϊ�ݹ����
�໥���ã�
   main()->a()->b()->a()
�����Լ���
   main()->a()->a()
�������ݹ����
��;��
    �㷨���
���壺
    �ݹ�����ʵ���ض����㷨��
�ص㣺
    1.����ģΪn������ת��Ϊ��ģ
	  Ϊn-1�ģ�����ͣ�����ͬ����
	  1.1���ݽṹ������
	  1.2������ķ���
	  1.3��ѧ������У�MATLAB��
	2.��ֹ�������жϣ������������Ƶ�����ȥ
	
���ӣ�
    n!ʹ��ѭ������
	int computer (int n)
	{
	  int result = 1;
	  for(int i=1;i<=n;i++)
	  {
	    result *= i;
	  }
	}
	�õݹ��㷨ʵ�֣�
	int fx( int n)
	{
         if(n==1)	
	        return 1;//��ֹ����
	     else
		    return n*fx(n-1);//���͹�ģ
	}
	int main ()
	{
	   int ret = fx(3);
	   printf("%d \n",ret);
	   return 0;
	}
���ӣ�
    쳲����������У�1,2,3,5,8,13,21,34.����
	nt fx( int n)
	{
	if(n==0)//��ֹ����
	{
	    return 0;
	}
	if(n==1)//��ֹ����
	{
	    return 1;
	}
	else
	{
	    return fx(n-1)+fx(n-2);//���͹�ģ
	}
	}
	int main()
	{
	   int ret = fx(5);
	   printf("%d ]n",ret);
	   return 0;
	}//����ջ


*/
#include <stdio.h>
int main()
{
	return 0;

}













