/*
�ṹ��ĸ����÷�

��һ���ṹ��ĸ����÷�
  1.��ֵ��
    �ṹ����Ի��ำֵ
	Contact a = {20140003,"anxin",18600100100}
	Contact b = a;//ÿ���ֽڶ���ͬ
	��ֵ�����
	ԭ��ܸ��ӣ�Ŀǰ��˵����֪���ṹ�帳ֵ�Ľ����
	ÿ���ֽڶ���ȣ��۲��ڴ棩
  2.ָ�룺
    Contact a = {20140003,"anxin","18600100100"}
	Contact* p = &a;
	�ṹ��ָ��ʹ�ü�ͷ->��p���ʸ���Ա����
	printf("id: %d,name: %s \n",p->id,p->name);
	Ҳ����д����
	(*P).id,��һ���Ҷ�������ôд����ַ��Ӧ�ڴ��ֵ��
  3.��Ϊ���������� �ͻ�������һ����������Ϊ��������
	3.1��ֵ:�õ��
	   void test(Contact a )
	   {
	       printf("id:%d,name:%s \n",a.id,a.name);
	   }
	3.2����ַ:�ü�ͷ
	   void test(Contact* p)
	   {
	       printf("id: %d,name: %s \n",p->id,p->name);
	   }
 *4.��Ϊ��������ֵ��������Ϊ�����ķ���ֵ
    4.1���������һ��ֱ��return:
	   Contact make(int id)
	   {
	     Contact a;
	     a.id = id;
	     return a;  
	   }
	4.2ͨ������д��:
	   void make(int id,Contact* a)
	   {
	      a->id = id;
	   }ԭ������˵
	4.3����:
	   Contact make(int id)
	   {
	      Contact a;
	      a.id = id;
	      return a;
	   }
	   int main()
	   {
          Contact a = { 2014003, "anxin", "18601011223" };
	      Contact b = a;//�ֲ�������ͬ���ڴ��ַ��ͬ
	      Contact* p = &a;
	      printf("id: %d,name: %s \n", p->id, p->name);
	      Contact ccc = make(1234);//id��ֵ��name��phone���ֵ
	      return 0;
	    }
  5.����struct��ֻ��������������������ͣ�ֻ�붨��һ���������������Ҫ���ͣ�
    ��structû�����������������ڲ�����һ�����֣�ֻ������һ������
	  ����һ������info��Ĭ�����֣���
	  struct
	  {
	     char guid[128];
	     int user_id;
	  }info;
	   void main()
	  {
	     info.user_id = 98780987;
	     strcpy(info.guid,
	          "{09f140d5-af72-44ba-a763-c861304b46f8}");
	  }
������ע������
  1.struct��֧���������㣺
    �ṹ��Ĭ��ֻ֧��=����֧���������㣺�Ӽ��˳�
	���磺
	Contact a,b;//������Ҳû������
	Contact c = a + b;//�������֧�ּӷ�
	��24�½�����ýṹ��֧�ָ������㣩
  2.�ž�������д����
	2.1���԰ѽṹ������Ͷ���д�ں����ڲ����﷨�������������治������ôд��
	   ����Ŀ����Ҫ����֮����Ҫ����һ�����ͣ���������������޷����ã�
	   ��ֻ���ں����������ã�����д�������棬�޷�д��ͷ�ļ�����
	   int main()
	   {
	   struct Contact
	   {
	   int id;
	   char name[16];
	   char phone[16];
	   };
	   Contact a = {20140003,"anxin","18601011223"};
	   return 0;
	   }
    2.2��һ�ַ�����д����ֱ�Ӱѱ�����д�ں��棬18�»�˵��
	   ���Ͷ���һ���Ƿ���ͷ�ļ���ģ�û��ô�ɵ�
	   struct Contact
	   {
	      int id;
		  char name[16];
		  char phone[16];

	   }a,b;�﷨��֧�ֵ�������
	   
  3.C++��C�Ĳ��죺
    ��struct�﷨�ϣ�C++��C����΢���
	��Ҫ����C���÷���
	  struct Contact
	  {
	     int id;
		 char name[16];
		 char phone[16];
	  };
	  struct Contact a;
	  C���Զ��������ʱ��ҲҪ�ӹؼ���struct���������⿪һ��
	  <struct��һ���ؼ��ֲ�����һ��������>
*/










