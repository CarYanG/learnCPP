/* auther:carl
   date:2016.04.23*/
   
   
#include<iostream>
using namespace std;

class myclass
{
	int who;
	public:
		myclass(int n)
		{
			who=n;
			cout<<"���캯������"<<who<<endl;
		}
		~myclass()
		{
			cout<<"������������"<<who<<endl; 
		} 
		int id()
		{
			return who;
		}
};
void f1(myclass o)  //��ͨ������ʽ���ݲ���
{
	cout<<"�ⲿ��������"<<o.id()<<endl;
}
void f2(myclass *o)    //ָ�뷽ʽ���ݲ���
{
	cout<<"�ⲿ��������"<<o->id()<<endl; 
}
void f3(myclass &o)  //���÷�ʽ���ݲ���
{
	cout<<"�ⲿ��������"<<o.id()<<endl; 
} 

int main()
{
	myclass x1(1);
	f1(x1);
	cout << "-------" << endl;
	myclass x2(2);
	f2(&x2); 
	cout << "-------" << endl;
	myclass x3(3);
	f3(x3);
	cout << "-------" << endl;
	return 0;
}

/*
���������ӿ��Կ���������ͨ������ʽ���ݲ���ʱ���������Ƚ���������һ���������ں�������ʹ�õ��Ǹ�����
��������Ͳ���������ͬһ����ַ����ָ�뷽ʽ�����÷�ʽ�����������������������õ����ǲ�������
��Ҫע����ǣ���������ʱ���������ȱʡ���������캯������������������캯�����������ù��캯���Ͳ�����һ��������
*/
