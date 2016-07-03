#include <stdio.h>

int main()
{
    
    printf("hello,world! \n");
    
    getchar();
    
    return 0;
    /*
    1.编辑代码：添加main.cpp,输入实例代码hello world
    2.生成项目：F7生成项目编译
    3.运行项目：ctrl＋F5（调试>运行）
    （如果系统低，黑色窗口一闪而过加一句 getchar();）
    4.注意：（command＋s为保存）
         4.1英文半角
         4.2大小写敏感（中英切换用control＋空格）
         4.3先不要关注语法能把程序抄对就算成功
         4.4双引号中间的字符串可以比较自由的修改
    5.输出文件（command＋s）
         5.1hello.exe的位置：生成后会有一个程序
         5.2main.__cpp：代码
            右键左侧资源管理器项目名>在windows资源管理器中打开
         5.3hello.exe:程序（程序文件）
            exe是可执行程序的后缀（在debug文件中）
            删除后，按F7再次生成程序文件
     6.运行程序的几种方法：
         6.1在VS2008中运行：按F7编译，ctrl＋F5运行
          （xcode运行／调试：command＋r，编译：command＋b）
           （xcode调试：F6（VS F10）F7（VS F11）ctrl＋command＋y（ VS F5））
         6.2在命令行中运行：cd /d d:\cpp\hello\debug hello.exe
            注意：／d是drive的意思，不是d盘的意思,供给用户运行
            cd /d e:\cpp\hello\debug\
            在命令行输入：1.cd空格＋～表示回到home（同xcode）
                        2.ls表示list当前目录（同Xcode）
                        3.Xcode中直接将路径拖进terminal
         6.3双击运行键（代码最后一行加上get char();）
     7.常见问题汇总：
         7.1vs2013操作管理：
            打开vs>新建项目（32位控制台）>命名>下一步勾选空项目>添加新建main项
            >设为启动项目>开始编写代码>可以在同一解决方案管理器上添加新项目，或者
            添加现有项目至目标解决方案，可以同时开若干个项目，一个项目一种设置
           （main.cpp最有用后缀名不可改）运行项目打开XXX.sln
         7.2Xcode操作管理：
            打开Xcode>新建项目（os x）>命名项目（相当于VS里的解决方案管理器）>
            在项目里添加target（相当于VS里的项目）
    */
}
