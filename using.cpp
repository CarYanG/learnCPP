/* auther:carl
   date:2016.04.19*/
#include<iostream>
using namespace std;

namespace na
{
	void print(int a)
	{
		cout<<"na::print"<<a<<endl;
	}
}

namespace nb
{
	using namespace na;
	void print2(int a,int b)  //����nb����ĺ���
	{
		print(a);  //na�ĺ���
		print(b);  //na�ĺ���
	}
	
	void print(int n)   //��Ҳ��nb����ĺ���
	{
		cout<<"nb::print"<<n<<endl;
	}
}

namespace nc
{
	using nb::print2;      //ָ��ֻʹ��nb��print2()����
	void print(int a,int b,int c)
	{
		print2(a,b);      //����nb�ĺ���
		nb::print(c);     //using��û��ָ�����������������nb::��ָ��
	}
}

int main()
{
	using namespace na;
	print(2);      //na��print()����
	
//	using namespace nb;  //����ʹ��ʱ��na��nbͬʱ��Ч
//	print(3);            //����ϵͳ�������������na��nb�е���һ������Ϊ�������Ͳ�����ͬ
	
	using namespace nc;  //����ʹ��ʱ��na��ncͬʱ��Ч
	print(4,5,6);         //nc��print()�����Ĳ�����na�еĲ�����ͬ��������������� 
	
	using nb::print;      //ָ�������õ�print()������nb�ĺ���
	print(7);
	
	return 0;
}
