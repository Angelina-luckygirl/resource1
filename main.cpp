//���� 2015.3.12
//���������� 
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

 //�Ƿ��г˳���
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
    srand((unsigned)time(NULL));//����ʱ������ ����ʹ����ÿ�εõ��Ľ������ͬ 
	int c1,number,output_mode,value_range,num_1,num_2,plus_or_minus,yushu,j,x,kuohao;
	char o;
	cout<<"�Ƿ��г˳�����0�� , 1�ǣ�"<<endl;
	cin>>c1;
	cout<<"��Ŀ��������0���ļ������ ��1�ڴ�ֱ�������"<<endl;
	cin>>output_mode;
	cout<<"��������ֵ��Χ��"<<endl;
	cin>>value_range;
	cout<<"�������ţ�0û�У�1��"<<endl;
	cin>>kuohao;
	cout<<"�Ӽ����޸�����0û�У�1�У�"<<endl;
	cin>>plus_or_minus;
	cout<<"��������������0û�У�1�У�"<<endl;
	cin>>yushu;
	cout<<"��������Ŀ��������"<<endl;
	cin>>number;
	ofstream fout;
	if(output_mode==0)
	{
		fout.open("yunsuan.txt");
		fout<<number<<"������������㣺"<<endl;
	}
	else
	{
		cout<<number<<"������������㣺"<<endl;
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

