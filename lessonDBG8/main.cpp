/*
���������ԭ��

��һ�����ࣺ
 1.��ȡδ��ֵ�ı�����
   1.1һ������δ��ʼ����δ��ֵ�Ͷ�ȡ����ֵ
   1.2���ӣ�
	   int multiply(int m, int n)
	   {
	   return m*n;
	   }
	   int main()
	   {
	   int a, b;//δ��ֵ������
	   int m = multiply(a, b);
	   printf("result: %d \n", m);
	   return 0;
	   }

 2.����ջ���
   2.1������һ�����̫��ľֲ�����
   2.2����Ƕ�׵��ò�ι������ݹ飩
      �ݹ���ö���û����ֹ����
   2.3���ӣ�
      ���������̫��ʱӦ����malloc ����new�����䶯̬����
	  #include <stdlib.h>
	  void test()
	  {
	  int buf[1024 * 1024 * 16];//ջ���
	  printf("do not define a very large buffer on the stack");
	  for (int i = 0; i < sizeof(buf);i++)
	  {//��ɫ��ͷ��ʾ�ӵ�XX�з��غ���ջ�����쳣
	  buf[i] = i;
	  }
	  }
	  int main()
	  {
	  test();
	  return 0;
	  }
 3.����Խ�����
   ��������ʱ���±�Խ��
 4.ָ���Ŀ����󲻿���****
   4.1��ָ�룺��ȡλ��0x000000000ʱ�����˷��ʳ�ͻ
   4.2Ұָ��
      4.2.1ָ��δ��ֵ(�ڴ����������Ļ����)
	  4.2.2free��delete�ͷ��˵Ķ���
	  4.2.3��ǡ����ָ��ǿ��ת�䣺�������ͬһ����

 





















 */
#include <stdio.h>
#include<stdlib.h>









