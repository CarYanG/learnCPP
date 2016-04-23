/* auther:carl
   date:2016.04.23*/

/*
函数的参数引用

许多教程在讲解参数引用时都喜欢选择交换两参数内容的swap(int &x, int &y)函数作例子，
这的确很容易说明清楚，但并不能说这种用法优于指针作参数。
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



