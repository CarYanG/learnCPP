/* auther:carl
   date:2016.04.25*/

/*

д��һ���ڹ��캯�����и�ֵ����ֵǰ��Ա�����Ѿ����˵�ַ�ռ䣬��δ��ֵ��
д������һ�����ⷽ�������ڳ�Ա��������ռ��ͬʱ��������ֵ������Ա������
��Ȼд�����õ����٣�����������д��һ��

��ʵ�ϣ��������Ա�����Ķ����Ϊ��������const string name;���͡�const int age;����
д��һ��������д������Ȼ��ȷ��
*/
#include<iostream>
#include<string>
using namespace std;

class stuff{
	 string name;
	 int age;
public:
	stuff()   //����д��һ
	{
		cout<<name<<"------"<<age<<endl;
		cout<<&name<<"------"<<&age<<endl;
		name="��";
		age=0;
		cout<<name<<"------"<<age<<endl; 
	}
	
	stuff(string n,int a):name(n),age(a)         //����д����
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
};

int main()
{
	stuff st2;
	stuff st1("���",3);
	return 0;
}

