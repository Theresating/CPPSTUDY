#include <iostream>

int main()
{
    /*
变量和常量
     
（一）常量
     1.定义：
        字面常量：literal constant，字面上的值
        变量能变，常量不能变，变量是左值，也可在右边
        常量一定是右值（常量不能被赋值）
     2.例子：
        int a ;
        int b = 10;
        double number = 123;
        double th = number ;
（二）变量
     1.定义：
       变量类型，变量名，初始值
     2.命名规则：
       2.1字母数字下划线
       2.2不可以数字开头
       2.3中不可以有空格
       2.4下划线与减号要区分
       2.5不可用关键字命名
         （key word蓝色显示）
     3.例子：为什么需要变量
       int a = 10;
       printf("%d \n",10);
       double b = 12.345;
       printf("%f /n",12.345);
     4.整型变量：char/short/int取值范围不同（根据数值范围选择类型）
       4.1整型变量char :1个字节（－128～127）
       4.2整型变量short :2个字节（－32768～32767）
       4.3整型int :4个字节（－2147483648～2147843647）
       4.4unsigned char:1个字节（0～255）
          //第一位不是符号位，用补码表示
       4.5unsigned short：2个字节（0～65535）
       4.6unsigned int:4个字节（0～4294967295）
     5.整型变量赋值：
       5.1写法一：十进制方式：int a = 10;(值相同)
       5.2写法二：十六进制：int b = 0X0A;％08X
     6.浮点型变量：float-point(fixed-point)/double
       6.1输入与输出：
          float a;
          scanf("%f",&a);
          float b;
          printf("%f",b);
       6.2浮点与双浮点：（类型不同相互赋值时会有一个精度损失）
          float：％f4个字节范围小精度低
          double:%lf8个字节范围大精度高
       6.3定义：用于表示小数：
          浮点：float point（相对于定点小数）
     
     
     
    
     
     
    
     
     
     
     
    
    
    /*用户输入一个小数，程序打印显示这个数的平方
     double a;
     printf("Input a number:");
     scanf("%lf",&a);
     printf("result:%.2lf \n",a*a);
     */
    
    /*整型变量char 1（－128～127）,short 2（－32768～32767）,int 4（表示很大的数）,表示范围不同，
     char a = 126;//不能超过范围
     printf("%d \n",a);
     */
    
    /*输出都是10进制
     int n1 = 10;
     int n2 = 0x0A;//十六进制以数字0和大小写x开头
     printf ("n1=%d,n2=%d \n",n1 ,n2);
     */
    
    /*浮点小数float point 定点小数 fixed point ;
     低精度float(4bit):%f,高精度double(8bit):%lf
     double a = 12.34;
     float b = 12.34f;
     */

    return 0;
}
