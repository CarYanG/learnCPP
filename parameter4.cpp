/* auther:carl
   date:2016.04.23*/
   
/*
����ʹ�ú���ָ����ȡ�ú����ĵ�ַ���йغ���ָ���Ѿ���C���Խ̳��н���
*/
#include<iostream>
using namespace std;   

void space(int count);
void space(int count,char ch);
int main()
{
	//��һ�����Ͳ����ĺ���ָ��
	void(*fp1)(int);
	//��һ�����Ͳ�����һ���ַ��Ͳ����ĺ���ָ��
	void(*fp2)(int ,char);
	
	fp1=space;  //ȡspace(int)�����ĵ�ַ
	fp2=space;  //ȡspace(int, char)�����ĵ�ַ
	fp1(20);   //���20���ո�
	cout<<"|"<<endl;
	fp2(20,'=');   //���20���Ⱥ�
	cout<<"|"<<endl;
	
//	int b=9;
//	int *a=&b;
//	cout<<a<<endl;
//	cout<<*a<<endl;
//	cout<<&a<<endl;
	return 0;
}

void space(int count)  //���count���ո��ַ�
{
	for(;count;count--)
		cout<<' ';
}

void space(int count ,char ch)  //���count��ch�ַ�
{
	for(;count;count--)
		cout<<ch;
}
