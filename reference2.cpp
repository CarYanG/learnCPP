/* auther:carl
   date:2016.04.23*/

/*
�����Ĳ�������

���̳��ڽ����������ʱ��ϲ��ѡ�񽻻����������ݵ�swap(int &x, int &y)���������ӣ�
���ȷ������˵���������������˵�����÷�����ָ����������
*/
#include<iostream>
using namespace std;
void swap(int &x,int &y);
void swap2(int *x,int *y);
int main()
{
	int i=12;
	int j=25;
	cout<<"i="<<i<<"  j="<<j<<endl;
	
	swap2(&i,&j);         //swap(&i, &j);
	cout<<"i="<<i<<"  j="<<j<<endl;
}

void swap(int &x,int &y)
{
	int t;
	
	t=x;
	x=y;
	y=t;
}

void swap2(int *x, int *y)
{                                               
    int t;                                       
                                                
    t = *x;                                   
    *x = *y;  
	*y = t;        
}



