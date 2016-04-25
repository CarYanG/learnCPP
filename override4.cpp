/* auther:carl
   date:2016.04.25*/

/*
类型转换

当需要将当前类的实例直接赋值给其它类型的变量时自动转换类型，
这其实还是运算符重载。当需要其它类型直接赋值给当前类的实例时，只要增加构造函数就行。
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
	stuff st("你好",2);
	string m_name=st;
	int m_age=st;
	cout<<m_name<<endl;
	cout<<m_age<<endl;
	

}
