/* auther:carl
   date:2016.04.29*/
#include<iostream>
#include<string>
/*
˽�м̳��ǽ�����Ĺ��г�Ա�ͱ�����Ա����Լ���˽�г�Ա���������˽�г�Ա���������ﱾ��Ͳ��ܷ��ʡ�

����˽�м̳У�����ĳ�Ա�ܷ���ʣ�������������
�����˽�г�Ա������������ⲿ�������Է��ʡ�
����Ĺ��г�Ա������������Է��ʣ����ⲿ�����Է��ʡ�
����ı�����Ա������������Է��ʣ����ⲿ�����Է��ʡ�
*/
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

class CDerive :private CBase{
	public:
		void setBase(string s ,int i){
			setName(s);  //���û���ı�����Ա
			setAge(i);    //���û���ı�����Ա
			//���û����˽�г�Ա
			//cout << name << "   " << age << endl;    //�������
		}
		
		string getBaseName(){
			return getName();  //���û���Ĺ��г�Ա
		}
		
		int getBaseAge()
		{
			return getAge();  //���û���Ĺ��г�Ա
		}
};

int main()
{
	CDerive d;
	d.setBase("abc",100);
	
	//���û����˽�г�Ա
    //cout << d.name << "   " << d.age << endl;    //�������
    //���û���Ĺ��г�Ա
    //cout << d.getName() << "   " << d.getAge() << endl;    //�������
    cout << d.getBaseName() << "   " << d.getBaseAge() << endl;
   
    //���û���ı�����Ա
    //d.setName("xyz");    //�������
    //d.setAge(20);        //�������
    return 0;
}

