/*
�ṹ���������ʶ

��һ���ṹ��Ĵ�С����������
  1.�ṹ���С����Ա�йأ�����ʱ��ȸ���Ա֮��Ҫ��
    struct Object
    {
      char a;//1�ֽڶ��룬��ַ���Է���������ַ
	  int b;//4�ֽڶ��룬��ַ�������4�ֽڶ���
    };
    printf("%d \n",sizeof(Object));//����4+1������8
  2.Ϊ��ʵ�ֶ��룬��������Խṹ��������padding
    ע��C/C++��׼û�й涨һ��Ҫ���룬���Ǳ������Լ���Ϊ
  3.ͨ���Ķ������Ϊ��
    3.1 short�����ڴ��ַ������2�ֽڣ���ַ�ܱ�2������
	3.2 int��4�ֽڶ��루��ַֻ�ܱ�4������
  4.ΪʲôҪ���룺
    ��ΪCPU��ָ��Ҫ��ֻ���ڶ���ĵ�ַ�ϴ�ȡ������ָ���
	�﷨Ҫ�󣬲������û�취��ȡ�����������е�CPU���д����ƣ�
	������Ϊ���ñ������ڴ��д���һ���Ƚ�������λ����
  5.���ȡ���������
    ��ͬ�ı������в�ͬ�ķ������ⲻ��C++��׼�ж���
	������Զ��Ҫ��������
	�ṹ�������ʮ�ֱ�Ҫ�Ļ��ƣ�û���κ�����Ҫȡ������
	struct Object
	{
	   char a;//1�ֽ�
	   char i;
	   int b;//4�ֽ�
	};
	int main()
	{
	   Object obj;
	   obj.a = 0x0A;
	   obj.b = 0x11223344;
	   obj.i = 0x0B;
	   printf("a:%p i:%p b:%p\n", &obj.a,&obj.i, &obj.b);
	   int n = sizeof(obj);//�ڴ棺0a,0b,cc,cc(��Ϊ���)
	   return 0;//��С��8
	}
�������ṹ���������Ϊ�ӳ�Ա
  1.struct�ĳ�Ա�����Ϳ���ʹ����һ��struct����
    struct Score
	{
	   float Chinese;
	   float english;
	   float math;
	};
	struct Student
	{
	   int id;
	   char name[16];
	   Score score;//�˳�Ա����������struct   
	}
	1.1ע��ǰ��˳��
	   ��score���͵Ķ������Student��ǰ��
	1.2���ڴ���ͼ����Ȼ�ܼ򵥣�����Ա���ڴ�����������
	   ����padding
	1.3���ʳ�Ա���ӳ�Ա�������˳������ʹ�õ��   
	   Student s;
	   s.score.english = 89.5;
  2.��һ����ʽ��
    ʹ��ָ�룬������ֱ�Ӱ�����Ӧ�ó�����Ը��ӣ�
    struct Student
	{
	   int id;
	   char name[16];
	   Score* ps;
	   //ʹ��ָ�룬������ֱ�Ӱ���
	}
	Score _score = {88.0,90.0,98.0};
	Student _stu;
	_stu.ps = &score;
�������ṹ����Ϊ���������۴�ֵ�봫ַ��Ч������
  1.�ṹ�������ϴ�ռ���ڴ�ռ�϶࣬������ʹ�ô�ֵ��ʽ
    void test(Contact who)
	{
	  printf("id: %d, name: %s \n",who.id,who.name);
	}
	�������⣺
	1���ռ����أ�ʹ���˸�����ڴ�ռ�
	2��ʱ�����أ����������α���who��Ҫ���ѽ϶��CPU
  2.�ṹ����Ϊ�����Ĳ���ʱ�����������ܴ󣩣�����ʹ�ô���ַ�ķ�ʽ
    ���ֻ����������������const����
	void test��const Contact* who��
	{//ֻ��������������޸ľ���Ϊconst
	   printf("id:%d,name:%s \n",who->id,who->name);
	}
	struct Contact
	{
	   int id;
	   char name[16];
	   char phone[16];
	};
	void test(Contact who)
	{//Contact who = a;����������aռ36���ֽڣ�whoռ36���ֽ�
	   printf("id: %d, name: %s \n", who.id, who.name);
	}//ʹ���˸�����ڴ�
	void test2(const Contact* who)
	{
	   printf("id:%d,name:%s \n", who->id, who->name);
	}
	int main()
	{
	   Contact a = { 2014003, "anxin", "18600100100" };
	   test(a);//�൱�ڰ�a��ֵ��������test
	   test2(&a);//ֻ�����˵�ַ4���ֽڣ�ֱ�ӷ����ڴ�
	   return 0;
	}
������С��
  1.�ṹ��Ĵ�С����������
  2.�ṹ�������Ϊ������Ա
  3.�ṹ����Ϊ���������۴�ֵ�봫��ַ










*/












