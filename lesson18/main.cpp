#include<stdio.h>
int main(){
	/*
	λ������
	��λ��ʾ��һ���ֽ��ɰ˸�λ��ɣ�
	�������unsigned char�������Ϊ��λbit7�����Ҳ�Ϊ��λbit0
	unsigned short 16��λ��2�ֽڣ�
	unsigned int 32��λ��4�ֽڣ�

	1.��λȡ��

	10110101(181)->01001010(74)
	unsigned char m = 181;
	unsigned char n = ~m;
	printf("n:%u \n",n);//74
	printf("n:%u \n",(unsigned char) ~181);//ǿ��ת����74

	2.��λ����
	>>1��ʾ����λ��(��)��һλ�����ң������0
	>>8��ʾ����λ�ң�����һλ�����ң������0����λȫ����ʣ�������
	printf("n: %u \n",(unsigned char)(0xA7 >> 8));// n:0

	3.��λ��,�����
	a&b:a��bͬʱΪ0ʱ���Ϊ1������Ϊ0
	a|b:a=1��b=1ʱ���Ϊ1������Ϊ0
	a^b:a,b ��ͬʱ��Ϊ1����ͬʱ��Ϊ0�����ã�

	4.��λ��ֵ
	unsigned char m = 0xA7;/// (��Ļ+shiftΪ��д��ĸ)
	m >>= 3;//m = m >> 3;same
	printf("n: %u \n",(unsigned char)(0xA7&0xE7));//n:167

	char buf[] = "A2";//A��Ȩ��Ϊ16��buf[0]Ϊ10,0xA
	unsigned int n1 = (buf[0] -'A') + 10;//�ַ���ת�������֣�buf[0]Ϊ��д��ĸA��16ʮ����ת��Ϊ10��16���ƣ�
	unsigned int n2 = (buf[1] - '0');//����ֵΪ2
	unsigned int result = n1 * 16 +n2;//����Ȩ��

	��λʱ���ʹ��unsigned����

	int n1 = 10;
	int n2 = 2;
	int result = (n1 >> 4 ) + n2; //������λ�൱�ڳ���16����λ�Ǹ�������㷨���˳��ȽϺ�cpu

	��bit����

	10110101��181�����bit5���в�����bit0 bit1 bit2...bit7��

	д����������ĳλ����1
	flag |=(1u<<5);//bit5
	���ĳλ����0������λ��ȡ����
	flag &= ~(1u>>5);
	���㣺
	unsigned char a = 181;//10110101->00100000(1u<<5)->11011111(~(1u<<5))
	a &= ~(1u << 5);//1u��ʾ1��unsigned int����

	���������ж�ĳλ�Ƿ�Ϊ1��
	flag &(1u<<5)����


	*/





	




























	return 0;

}