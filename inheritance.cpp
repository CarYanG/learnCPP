/* auther:carl
   date:2016.04.29*/


/*
�̳������ַ�ʽ��������(Public)�̳С�˽��(Private)�̳С�����(Protected)�̳С�
������������õĹ��м̳С����м̳о��ǽ�����Ĺ��г�Ա��Ϊ�Լ��Ĺ��г�Ա������ı�����Ա��Ϊ�Լ��ı�����Ա��

���ڹ��м̳У�����ĳ�Ա�ܷ���ʣ�����������
�����˽�г�Ա������������ⲿ�������Է��ʡ�
����Ĺ��г�Ա������������ⲿ�����Է��ʡ�
����ı�����Ա������������Է��ʣ����ⲿ�����Է��ʡ�
*/
#include<iostream>
#include<string>
using namespace std;

class CBase
{
	string name;
	int age;
public:
	string getName()
	{
		return name;
	}
	
	int getAge()
	{
		return age;
	}
protected:
	void setName(string s)
	{
		name=s;
	}
	void setAge(int i)
	{
		age=i;
	}
};

class CDerive:public CBase //�á�public��ָ�����м̳�
{
public:
	void setBase(string s,int i)
	{
		setName(s);  //���û���ı�����Ա
		setAge(i);   //���û���ı�����Ա
		//���û����˽�г�Ա
		//cout << name << "   " << age << endl;    //�������
	}
};

int main()
{
	CDerive d;
	d.setBase("abc",100);
	
	//���û����˽�г�Ա
		//cout << d.name << "   " << d.age << endl;    //�������
	//���û���Ĺ��г�Ա
    cout << d.getName()<<"   "<< d.getAge()<< endl;
	//���û���ı�����Ա
	//d.setName("xyz");    //�������
	//d.setAge(20);        //�������
	return 0;
}

