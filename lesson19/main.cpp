#include <stdio.h>
int main(){
	/*
	���
	1.�ԷֺŽ�����һ�У���Щ��˾�Ѵ��밴��ͳ�ƣ���
	  ����ʵҲ���԰��������д��һ�У�
	  ���ɶ��Ի��淶д����һ��һ��
	2.���������{}���һ���������
	  �ڼ������ֵĵط�������ʹ�ø������
    3.if
	  
	  �����ʽ1��
	  if��expr��
	    statement1
      else
	    statement2
      ����
	       ���exprΪ�棨��0����ִ�����statement1
	       ����ִ�����statement2

		   int x = 61;//60����ͨ�����ԣ����ʽֵΪ����
		   if (1)
		   printf("pass ! \n");
		   else
		   printf("fail ! \n");
	
	       int x = 61;//60����ͨ�����ԣ����ʽֵΪ���㣬���pass ����ơ����ף
	       if (x>=60)
	       {
	           printf("pass ! \n");
	           printf("bear ! \n");//�����������
	        }
	        else
	           printf("fail ! \n");

       �����ʽ2��
	   if��expr��
	      statement1��
       ����
	       ���exprΪ�棨���㣩����ִ��statement1��û�з��������ʽ��
		   if������üӴ����ţ���Ȼifֻ�Ͻ���if�ĵ�һ����䣬�ٺ����䲻����if
		   �������۽Ӷ������if����һ���Ӵ����ţ���ǿ�ɶ���

       �����ʽ3��
	   if��expr��
	      statement1
       else if��expr2��
	      statement2
       else if...
	   else if...
	   else(if)�ɼӿɲ���if
	      statement last
       ����
	       ���exprΪ�棨��0������ִ�����statement1��û�з���
		   int x = 87;
		   if (x < 60)
		   {
		   printf("c \n");
		   }
		   else if (x < 80)
		   {
		   printf("B \n");//�����е��˴�˵���Ѿ�����60�ˣ�������û�������дx>=60
		   }
		   else
		   printf("A \n");
      ���⣺
	      ���û�����0��6�������֣�0��ʾ���գ�1��ʾ��һ...6��ʾ����
		  ����0����6ʱ����ӡ at home 
		  ����1��5ʱ����ӡ at office
		  ����Ƿ��ַ�������Ч�ַ�ʱ����ӡ bad input

		  int n = -1;//��ʼֵΪ-1�������ж�n��Ч���
		  //��������
		  printf("please input a number: \n");
		  scanf_s("%d", &n);//%d���治Ҫ�пո�
		  //ҵ���߼�
		  if (n == 6 || n == 0)
		  {
		  printf("at home \n");
		  }
		  else if (n >= 1 && n <= 5)
		  {
		  printf("at offirce \n");
		  }
		  else
		  {
		  printf("bad input \n");

		  }
      ע�⣺
	  1.����ʹ�ô�����
	  2.ע��else����˼����Ҫ�ظ��ж�
	  3.1<x<5����ѧ���Բ��Ǵ�������
	  4.���������䶼��if���ǲ��㻭������


	*/ 







	return 0;
}