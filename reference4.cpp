/* auther:carl
   date:2016.04.23*/
   
   
#include<iostream>
using namespace std;
int & f();
int x;
int main()
{
	f()=100;
	cout<<x<<endl;
	return 0;
}

int &  f()
{
	return x;
}

/*
������������ķ���ֵ���������ͣ�ͨ��������������÷�����ȥ�ı䡰Դͷ�����ݣ����֡��������á�ΪC++��ǿ�˺ܶ๦�ܣ���ȻҲ�������Ҫע��ĵط���
*/
