/* auther:carl
   date:2016.04.25*/

/*
����ת��

����Ҫ����ǰ���ʵ��ֱ�Ӹ�ֵ���������͵ı���ʱ�Զ�ת�����ͣ�
����ʵ������������ء�����Ҫ��������ֱ�Ӹ�ֵ����ǰ���ʵ��ʱ��ֻҪ���ӹ��캯�����С�
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
		
	}
	string getName()
	{
		return name;
	}
	int getAge()
	{
		return age;
	}
	
	operator int()
	{
		return age;
	}
	operator string()
	{
		return name;
	}
};

int main()
{
	stuff st("���",2);
	string m_name=st;
	int m_age=st;
	cout<<m_name<<endl;
	cout<<m_age<<endl;
	

}
