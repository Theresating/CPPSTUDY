int main() {
    /*
     输出printf
     
     1.定义：
           printf:打印f:format，格式
           printf：按格式打印，向控制台输出
     
     2.注意：
           2.1不要用中文，中文问题很复杂，可以使用拼音
           2.2参数以逗号分开，％04d控制宽度，％.2控制小数点后保留位数
     3.显示整数：%d:decimal(十进制)int（变量类型）:integer(整数)
        3.1一个整数：%d
        printf（“x:％d(%d为参数1被替换)”,x（参数2／变量拿去替换参数1））;
        3.2两个整数：
        printf("a: %d,b: %d \n ",a,b);（Xcode中复制粘贴为command＋c/v）
        3.3整数对齐：
        printf("number : %03d \n", 3 );（宽度为三，不足三用零补齐）
     4.显示一个小数：%f/%lf
        4.1用float表示小数：％f:float(浮点数)
           保留小数位数表示：printf("x= %.2f \n",x);
        4.2用double表示小数：％f double(变量类型)：double float point（表示小数）
        4.3用计算表达式表述：（如a*a）
           double a = 12.345;
           printf("结果: %.4f \n",a*a);
     
     
     
     
     // 输出两个十进制数字
     // printf("a: %d,b: %d \n" , 32, 33);
     
     
     //输出三行数字
     //printf("number : %d \n", 3 );
     //printf("number : %d \n", 33 );
     //printf("number : %d \n", 333 );
     
     //输出三行数字靠右对齐
     //printf("number : %3d \n", 3 );
     //printf("number : %3d \n", 33 );
     //printf("number : %3d \n", 333 );
     
     
     //输出三行数字靠右补零对齐(宽度为3)
     //printf("number : %03d \n", 3 );
     //printf("number : %03d \n", 33 );
     //printf("number : %03d \n", 333 );
     
     //输出两个变量
     //int a = 10;
     //int b = 12009890;
     //printf("a: %d,b: %d \n ",a,b);
     //return 0;
     
     //显示2个小数,小数点后保留两位,小数前几位无所谓
     //printf("x= %0.2f , y= %0.2f\n",12.35,90.01);
     //return 0;
     
     //双浮点小数变量,小数点后保留两位
     //double x = 123.456;
     //printf("x= %.2f \n",x);
     //return 0;
     
     //输出变量相乘结果
     //int a = 123;
     //printf("result : %d \n",a * 456);
     
     //求12.345的平方，输出结果，保留4位小数
     //double a = 12.345;
     //printf("结果: %.4f \n",a*a);
     */

    return 0;
}
