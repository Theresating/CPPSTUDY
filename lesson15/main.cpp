#include<stdio.h>
int main(){

	//�棺һ�����������ֵ���٣�������
	//��ϵ���ʽ����ʾ����ֵ֮��Ĵ�С��ϵ

	//int a = 10;�ж��Ƿ����ͨ���Ƕ���������
	//int b = 11;�жϸ����ʹ�С��Ϊ��Ч����������ʱ�޷��ж�
	//printf("%d \n", a > b);ֵΪ��0
	//printf("%d", a + 1 == b);ֵΪ��1
	//printf("%d", a + 1 != b);ֵΪ��0
	//printf("%d", a + 1 >= b);ֵΪ��0

	//double a = 8.0 / 3;
	//printf("%d", a == 2.66667);
	//����ֵΪ�㣬�޷�ȷ�����ֻ��ָ����Χ

	/*
	  �������ʽ��expr1?expr2:expr3
	  1.��exprlΪ��ʱ���ʽֵΪexpr2
	  2.��exprlΪ��ʱ���ʽֵΪexpr3
	  ���ʽ����Ƕ�ף��������
	*/

	/*
		printf("%d \n",0? 100:200);//200
		printf("%d \n", 1? 100 : 200);//100
		printf("%d \n", -2? 100 : 200);//100
		int a = -2;
		printf("%d \n", (a + 2) ? 100 : 200);//200

		int a = 3;
		int b = 2;
		printf("%d", (a == b)? 100 : 200);//200
	*/

	/*
	ѧ���ɼ����ڵ���60Ϊ�棬С��60Ϊ��
	int score = 60;
	printf("%c \n", score >= 60 ? 'T' : 'F');//T

	int score;
	printf("please input a score : ");
	scanf_s("%d", &score);
	printf("result is : %c \n", (score >= 60) ? 'T' : 'F');
	*/

	/*ѧ���ɼ�90����ΪA��60����ΪB���м�ΪC(Ƕ��̫���Ӻ����м���㷨)
	int score;
	printf("please input a score:");
	scanf_s("%d", &score);
	char result = (score >= 90 ? 'A' : (score < 60 ? 'C' : 'B'));
    printf("Result is: %c \n", result);
	*/





















	










	return 0;
}