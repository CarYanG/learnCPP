/* auther:carl
   date:2016.04.19*/

#include<iostream>
using namespace std;

/*
��C++�в�����������ȱʡֵ��������ȱʡֵ֮����������ڵ���ʱ����ʡ�ԡ�

ע�⣺����ȱʡֵ�Ĳ���ֻ�������ļ���������Ҳ����˵ĳһ������һ��������ȱʡֵ�������Ĳ���Ҳ��������ȱʡֵ��
���磺f()������3�����������ֻ���õ�2����ȱʡֵ����ʹ��ˡ���Ϊ����ʱֻ����2������ʱ��ϵͳ��֪�������ǵ�2���������ǵ�3��������
*/
int sum(int x=0,int y=100,int z=0)
{
	return x+y+z;
}

//int sum(int x, int y=100, int z=0) { ... }   //������ȷ��
//int sum(int x, int y, int z=0) { ... }       //��Ҳ����ȷ��
//int plus(int x, int y=100, int z) { ... }    //���Ǵ����

int main()
{
	cout<<sum()<<endl;
	cout<<sum(6)<<endl;
	cout<<sum(6,10)<<endl;
	cout<<sum(6,10,20)<<endl;
	return 0;
}

