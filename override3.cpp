/* auther:carl
   date:2016.04.25*/
/*


���������캯�����͡���ֵ����������ǽ������ֵ����һ��Ȼ�󴫸���һ����
���������Ҳ���౾��;��еģ����кܶೡ��ԭ�ⲻ���ظ��Ƹ�����һ������ʱ���������
�������ڳ�Ա�������ж�̬�����ڴ棬���߲���ָ��ָ���ⲿĳһ��ַʱ�����п��ܳ���

Ҫ������Щ�������ǿ������ء�=��������Լ��������캯����������������ų���
������Ϊ����ʾ�����⽫��ֵ��������غ����в����ơ������������������캯���й̶������䡱��
*/

#include<iostream>
#include <string>
using namespace std;

class stuff{
	string name;
	int age;
public:
	stuff(string n,int a):name(n),age(a)
	{
		cout<<"���캯��   "<<name<<"------"<<age<<endl;
	}
	string getName()
	{
		return name;
	}
	int getAge()
	{
		return age;
	}
	
	stuff& operator = (stuff& x);   //��ֵ���������
	
	stuff(stuff& x):name(x.name),age(20)  //�������캯������
	{ 
		cout<<"�������캯��  "<<name<<"------"<<age<<endl;
	}

};

	
	stuff& stuff::operator=(stuff &x)
	{
		age=x.age;
		cout<<"��ֵ�����  "<<name<<"------"<<age<<endl;
		return *this;
	}
	
int main()
{
	stuff st1("���",3);   //����ͨ���Ĺ��캯��
	stuff st2("��ã�����",10);  //����ͨ���Ĺ��캯��
	st2=st1;    //��Ϊ�������µ�ʵ�������Ե��õ��Ǹ�ֵ�����
	stuff st3=st1;    //��Ϊ�����µ�ʵ�������Ե��õ��ǿ������캯��
	cout<<st1.getName()<<"------"<<st1.getAge()<<endl;
	cout<<st2.getName()<<"------"<<st2.getAge()<<endl;
	cout<<st3.getName()<<"------"<<st3.getAge()<<endl;
	
	return 0;
}
