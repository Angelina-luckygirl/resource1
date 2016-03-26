//李妍 2015.3.12
//四则运算新 
#include<iostream>
#include<fstream> 
#include<iomanip>
#include<cmath>  
#include<string>  
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define random() (rand()%1000) 

 //是否有乘除法
char operator_random(int c1)
{
    char o;
	int c,c2;
	if(c1==0)
	{
		c2=2;
	}
	if(c1==1)
	{
		c2=4;
	}
    c= (rand() % 100)%c2;
    if (c == 0) o = '+';
    else if (c == 1) o = '-';
    else if (c == 2) o = '*';
    else o = '/';
    return o;
}

void main()
{
    srand((unsigned)time(NULL));//设置时间种子 ，以使程序每次得到的结果都不同 
	int c1,number,output_mode,value_range,num_1,num_2,plus_or_minus,yushu,j,x,kuohao;
	char o;
	cout<<"是否有乘除法？0否 , 1是："<<endl;
	cin>>c1;
	cout<<"题目如何输出？0在文件中输出 ，1在此直接输出："<<endl;
	cin>>output_mode;
	cout<<"请输入数值范围："<<endl;
	cin>>value_range;
	cout<<"有无括号？0没有，1有"<<endl;
	cin>>kuohao;
	cout<<"加减有无负数？0没有，1有："<<endl;
	cin>>plus_or_minus;
	cout<<"除法有无余数？0没有，1有："<<endl;
	cin>>yushu;
	cout<<"请输入题目的数量："<<endl;
	cin>>number;
	ofstream fout;
	if(output_mode==0)
	{
		fout.open("yunsuan.txt");
		fout<<number<<"道随机四则运算："<<endl;
	}
	else
	{
		cout<<number<<"道随机四则运算："<<endl;
	}
    for (int i = 0; i < number; i++)
    {
       num_1=random()%value_range+1;
	   num_2=random()%value_range+1;
	   o=operator_random(c1);
	   int j=num_1-num_2;
	   int x=num_1%num_2;

	   if(output_mode==0)
	   {
		   if(((j<0)&&(plus_or_minus==0))||((j>=0)&&(plus_or_minus==1))||((x!=0)&&(yushu==0))||((x==0)&&(yushu==1)))
		   {
			   i--;
		   }
		   else
		   {
		      fout<<num_1<<o<<num_2<<"="<<endl; 
		   }
	   }
	   else
	   {
		    if(((j<0)&&(plus_or_minus==0))||((j>=0)&&(plus_or_minus==1))||((x!=0)&&(yushu==0))||((x==0)&&(yushu==1)))
		   {
			   i--;
		   }
		   else 
		   {
			   cout<<num_1<<o<<num_2<<"="<<endl;	
		    }
	   }
    }
	if(output_mode==1) 
	{
		fout.close();
	}
} 

