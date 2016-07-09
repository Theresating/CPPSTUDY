/*
（一）程序崩溃

1.C/C++允许直接操作内存：
  1.1优点：灵活高效
  1.2缺点：复杂程序会崩溃
2.程序崩溃的调试方法

（二）程序崩溃的定位
1.F5：启动调试
  黄色箭头指向错误发生位置，说明大致原因
2.点击“调用堆栈”：
  这个窗口可以直接观察到法神错误的时候
  函数栈的各层函数的信息（调用栈的关系）
（三）“调用堆栈的使用”
1.可以看到：
  1.1函数调用的层次（想看不同层次的值，在调用堆栈中双击该层次名）
  1.2每一次函数里的局部变量
  1.3全部变量的值（想看谁就双击谁在局部变量可以看到值）
2.例子：
  #include <stdio.h>
  #include <stdlib.h>
  struct Object
  {
  int id;
  char name[32];
  };
  void show(Object* p)
  {//双击show发现参数有问题，说明不是函数内部问题。看test
  printf("Object [%d,%s] \n", p->id, p->name);
  }//程序崩溃，按F5直接找到出错位置（黄色箭头所指位置）
  void test(int id, const char* name)
  {//test传给show的值有误

  Object*obj = NULL;
  show(NULL);//错误是：test传给show的变量是空
  }
  int main()
  {
  int aaa = 9801;
  char* str = "127.0.0.1";
  int id = 123;
  const char* name = "shafa";
  test(id, name);
  return 0;
  }//控制执行错误

*/










