/* auther:carl
   date:2016.04.23*/
   
/*
这里使用函数指针来取得函数的地址，有关函数指针已经在C语言教程中介绍
*/
#include<iostream>
using namespace std;   

void space(int count);
void space(int count,char ch);
int main()
{
	//有一个整型参数的函数指针
	void(*fp1)(int);
	//有一个整型参数、一个字符型参数的函数指针
	void(*fp2)(int ,char);
	
	fp1=space;  //取space(int)函数的地址
	fp2=space;  //取space(int, char)函数的地址
	fp1(20);   //输出20个空格
	cout<<"|"<<endl;
	fp2(20,'=');   //输出20个等号
	cout<<"|"<<endl;
	
//	int b=9;
//	int *a=&b;
//	cout<<a<<endl;
//	cout<<*a<<endl;
//	cout<<&a<<endl;
	return 0;
}

void space(int count)  //输出count个空格字符
{
	for(;count;count--)
		cout<<' ';
}

void space(int count ,char ch)  //输出count个ch字符
{
	for(;count;count--)
		cout<<ch;
}
