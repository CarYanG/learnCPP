/* auther:carl
   date:2016.04.29*/
#include<iostream>
#include<string>
using namespace std;


/*
��������һ�»����������Ĺ��캯���ĵ���˳�򡣴���ʱ�Ȼ���������ࡣ����ʱ�����������ࡣ
*/
class CBase{
	string name;
	int age;

public:
	CBase(){
		cout<<"BASE"<<endl;
	}
	~CBase(){
		cout<<"~BASE"<<endl;
	}
};

class CDerive:public CBase{
	int age;
	public:
		CDerive(){
			cout<<"DERIVE"<<endl;
		}
		~CDerive(){
			cout<<"~DERIVE"<<endl;
		}
};

int main()
{
	CDerive d;
}
