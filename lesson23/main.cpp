#include <stdio.h>
int main(){
	/*
	while���
	whileҲ����ʵ��ѭ��

	��ʽ��
	  while��expr��
	    statement
	���裺
	  1.�жϣ�exprΪ��ʱ���˳�ѭ��������ִ��2
	  2.ִ�����statement��ѭ���壩
	  3.�ص�2������һ��
    ���ӣ�
	   ��forû�б����������´���ʵ����for����
	   char buf[100];
	   int i = 0 ;
	   while (i<100)
	   {
	   buf[i] = i + 1;
	   i++;
	   }
	   char buf[100];
	   int i = 0;
	   while (1)
	   {
	   if (i>=100)
	   {
	   break;//��ֹѭ��
	   }
	   buf[i] = i + 1;
	   i++;
	   }
    ����
	   ��forû������
	   ͬ����������whileʵ��
    ��1��
	   ��С��100��������ƽ����
	   int sum = 0;
	   int i = 1;
	   while (i < 100)//�˴��Ӷϵ㣨F9����F5��F10����һ������ִ��һ����
	   {
	     sum += i*i;//�˴����Կ����ֲ�����һֱ�ڱ�1->3->5...
	     i += 2;
	   }
	��2��
	   ���û��ӿ���̨����һϵ����������
	   ���û�����Ϊ0ʱ��ʾ������
	   �洢��Щ���������ǵ��ܺ͡�
	   Ҫ�㣺��֪���û���������ٸ�����
	   int buf[100];//buffer
	   int count = 0;//����
	   while (1)
	   {
	   int n ;
	   printf("please input:");
	   scanf_s("%d", &n);
	   if (n<=0)
	   {
	   break;
	   }
	   buf[count] = n;
	   count += 1;
	   }
	   printf("total: %d \n", count);
	   int sum = 0;
	   for (int i = 0; i<count; i++)
	   {
	   sum += buf[i];//����Ԫ��֮�ͣ������Ǽ�n,��Ϊn�Ѿ�����������
	   }
	   printf("result : %d \n", sum);
    ��3��
	   ���û�����һ��������ʮ���ƣ����ж����м�λ
	   int n = 3456;//scanf���ӱ��ڵ���
	   scanf_s("%d", &n);//scanf���治�ӻ��з�
	   int count = 0;
	   while (n != 0)
	   {
	   n /= 10;
	   count++;
	   //����->����->�ڴ桢�ֲ��������Զ�����
	   //345,34,3,0
	   }
	   printf("count:%d \n", count);


    do while ���
	���ʺ�while��for��ȫ��ͬ
	��ʽ��
	    do
		{
		  statement
		}while(expr);
	���裺
	    1.ִ��do{}�����ѭ����
		2.�ж�expr�Ƿ�Ϊ�棬Ϊ���Ǽ�����һ�֣�Ϊ��ʱ����
	�ص㣺ѭ��������ִ��һ��
    ���ӣ�
	    ���û�����һ������0-100����������������ƽ��ֵ��
		����û���������ڴ�����֮�⣬������������
	������
	    ����ִ��һ�Σ����һ����ȷ����������򷴸�����
		int n = 0;
		do
		{
		printf("please input:");
		scanf_s("%d", &n);

		} while (n<0||n>100);
		printf("%d \n", n*n);
    С�᣺
	    1.while��for��do while��������ȫ��ͬ
		2.��ʽ����������while��for

	    

	   

    


	*/



	
	


















	return 0;
}