
/*
����

��һ�������ĸ���
    1.���
	  �����Ǿ����ܹ����һ�����ܵĺ��ӣ�
	  ����һЩ�����������ͷ���һЩ�������
    2.���⣺
	  ����һ���������
	  ���룺������
	  ���������֮��
	  д�ɴ��룺
	      int sum (int a , int b)
		  {
		     int result = a + b;
			 return result;
		  }
      ʹ�ú�����
	      int main()
		  {
              int ret = sum(10,12);
			  printf("result:%d \n",result);
		      return 0;
		  }
   3.������ʽ��
	 3.1��ʽ��
	    return_type name (����argument)
		{
		      body��
		}
	 3.2���У�
	    name������������ĸ�����֡��»��ߵ����
		argument�����������Դ�n��������ÿ�������Զ��ŷֿ�
		return_type������ֵ���ͣ�һ���˺������Է���һ����ֵ
		body�������壬Ҳ���Ǻ����ľ���ʵ��
	  ��1��
	    ���ܣ���Բ�����
		������r
		����ֵ�������ֵ
		double area ��double r��
	     {
		    double ret = 3.14*r*r;
			return ret;
		 }
		���÷�����
	     double ret = area(1.2);
		 ������������ֵ�����Բ���һ������ȥ����
		���룺
		 double area (double r)
		 {
		 double ret = 3.14*r*r;
		 return ret;
		 }
		 #include <stdio.h>
		 int main()
		 {
		 double ret = area(1.2);
		 printf("ret:%.3f", area(1.2));//ret=area(1.2)
		 return 0;
		 }
	  ��2��
	    ���ܣ���Բ�������
		������r���뾶 h����
		����ֵ�������ֵ
		���÷�����
		    double ret = volumn(1.2,5.5);
			����1.2Ϊ�뾶 5.5Ϊ��
		���룺
		double volumn(double r, double h)
		{
		double ret = 3.14*r*r*h;
		return ret;
		}
		#include<stdio.h>
		int main()
		{
		double ret = volumn(1.2, 5.5);
		printf("ret:%.3f \n", ret);
		return 0;
		}

(��)��������
   1.���壺������ʹ�ó�Ϊ��������
   2.��Ҫ�أ�
		    1��������
			2����������
			3������ֵ����
   3.ע�⣺
		    1������Ҫ֪�������ڲ�ʵ��
		    2������ʱ�Ѻ����Ĳ���ֵ����������Ϊ��������
		       �磺double ret = volumn��1.2,5.5��
			3��С���ŵľ��ǲ����������������ǰ�һϵ�в���ֵ
			   ��˳�򴫵ݸ����������õ������ķ���ֵ
   4.��ʾ��
	        *1.�����ĸ���Ҫƥ�䣺��Ҫ���ٸ������ʹ��ݶ��ٸ�����
			*2.������˳��Ҫƥ�䣺����˳�򴫵�
			 3.����������Ҫƥ�䣺��Ҫʲô���ʹ���ʲô����
			  ��Ҳ���Դ�������Ҫdouble�ʹ���int�ͣ�
			 4.����ֵ������Ҫƥ��
	   ��1��
	       ������ƽ����(���÷�ʽ�Ǻ�����������1������2...��)
		   double square(double a, double b)
		   {
		   double ret = a*a + b*b;
		   return ret;
		   }
		   #include <stdio.h>
		   int main()
		   {
		   printf("ret:%.3f \n", square(1, 2));
		   return 0;
		   }
		��2��
		   �жϴ�Сд��ĸ����д����1��Сд����-1��������ĸ����0
		   int test(char ch)
		   {
		   int ret = 0;
		   if (ch >='A' && ch <='Z')
		   {
		   ret = 1;
		   }
		   else if (ch >='a'&& ch <='z')
		   {
		   ret = -1;
		   }
		   else
		   {
		   ret = 0;
		   }
		   return ret;
		   }
		   #include <stdio.h>
		   int main()
		   {
		   int ret = test('+');
		   printf("result:%d \n", ret);
		   //���ж�ʲô�ַ��ڡ����ڸ�
		   return 0;
		   }
������С��
	 1.��һ������
     2.ȷ��������Ϣ����������б�
	 3.ȷ������ֵ����
	 4.�ں�����д���������������return����
���ģ���ҵ��
	     1.дһ���������ж��ַ�ch����chΪ�ո��TAB�򷵻�1�����򷵻�0
		            1
					int test(char ch)
					{
					  int ret = 0;
					  if (ch==' '||ch=='\t')
					   {
					      ret = 1;
					   }
					  else
					   {
					      ret = 0;
					   }
					  return ret;
					}

					#include <stdio.h>
					int main()
					{
					   int ret = 0;
					   ret = test('\t');
					   printf("result: %d \n", ret);
					   return 0;
					}

		
		 2.дһ��������������������ABC����Ϊ�����������ߣ�
		             ����ʵֱ��������ʱ����1������0
					 �ⷨһ��
					 int triangle(int a, int b, int c)
					 {
					    int ret = 0;
					    if (a*a+b*b==c*c)
					     {
					        ret = 1;
					     }
					    else
					     {
					        ret = 0;
					     }
					    return ret;
					 }
	
					 #include <stdio.h>
					 int main()
					 {
					    int ret = 0;
					    ret = triangle(3, 4, 5);
					    printf("result:%d \n ", ret);
					    return 0;
					 }
					 �ⷨ����
					 int test��int a,int b,int c��
					 {
					    int aa = a*a;
						int bb = b*b;
						int cc = c*c;
						int ret 0 ;
						if(aa+bb==cc||aa+cc==bb||bb+cc==aa)
					    {
						   ret = 1;
						}
					  return ret;
					 }
 */


































