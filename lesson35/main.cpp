/*
ָ����Ϊ�����Ĳ���

1.ָ�������
  ���԰�ָ����Ϊ�����Ĳ���
2.ָ�Ų������ܣ�
  2.1���Զ�ȡ��һ�㺯���б�����ֵ*p
  2.2�����޸���һ�㺯���б�����ֵ*p
3.���⣺
  3.1
	 void test(int*p)
	 {//��һ���ڴ��ַ����һ������
	 //test ��������ָ����ʲô
	 //ʹ���ǺŲ���*p,����д����
	 printf("before test:%d \n", *p);
	 *p = 1;//�޸����ڴ��ֵ
	 printf("now:%d \n", *p);
	 }
	 void test2(int n)
	 {
	 n = 1;//��ָ��������޸Ķ�a����Ӱ��
	 }
	 int main()
	 {
	 int a = 0;
	 test2(a);//a��n��Ӧ��ͬ�ı�����ַ
	 test(&a);//��a�ĵ�ַ���ݸ�test��1
	 return 0;
	 }
   3.2
      1//�����ݼ�control+s






*/
#include <stdio.h>
int sum(int a, int b)
{
	return a + b;
}
void sum(int*a,int*b,)





















