/* auther:carl
   date:2016.04.23*/

/*
�����оٵ����غ��������ʱ�ͳ������⣬������������;����ظ������塣
*/
#include<iostream>
using namespace std;   

int fun(int a,int b);
int fun(int a,int &b);

int main()
{
	int x=1,y=2;
	cout<<fun(x,y)<<endl;  //������ʱ����
	return 0;
}

int fun(int a,int b)
{
	return a+b;
}

int fun(int a,int &b)
{
	return a-b;
}

