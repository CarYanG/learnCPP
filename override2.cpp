/* auther:carl
   date:2016.04.25*/

/*
��������ض�����ͨ�����ͳ�Ա������˵����ʽ���в�ͬ��
//��Ŀ�����
��Ա������      ����ֵ����  operator  �����  () ;
��ͨ������      ����ֵ����  operator  �����  (���������) ;

//˫Ŀ�����
��Ա������      ����ֵ����  operator  �����  (���������) ;
��ͨ������      ����ֵ����  operator  �����  (���������1, ���������2) ;

//��������
��Ա������      ����ֵ����  operator  (����Ĳ�����) ;

//����Ԫ��
��Ա������      ����ֵ����  operator[]  (��������) ;

//��1/��1�����
��Ա������      ����ֵ����  operator  �����  (int) ;
��ͨ������      ����ֵ����  operator  �����  (���������, int) ;
*/
#include<iostream>
#include<string>
using namespace std;

class stuff{
	string name;
	int age;
public:
	stuff(string n,int a):name(n),age(a)
	{
		cout<<name<<"------"<<age<<endl; 
	}
	string getName()
	{
		return name;
	}
	int getAge()
	{
		return age;
	}
	
	void operator +(int x);  //��������صĶ���
	void operator +(string s);   //��������صĶ���
};

void stuff::operator +(int x)   //��������ص�ʵװ
{
	age=age+x;
}

void stuff::operator +(string s)  //��������ص�ʵװ
{
	name=name+s;
}

int main()
{
	stuff st2("���",3);
	st2+2;  //+����
	st2+",����";  //+����
	cout<<st2.getName()<<"------"<<st2.getAge()<<endl;
	return 0;
}


