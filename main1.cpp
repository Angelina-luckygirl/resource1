#include <iostream> 
#include <algorithm> 
using namespace std; 
#define MAXN 1003 
int A[MAXN]; 
int Tail[MAXN]; 
 // ��̬�滮˼�룬ʱ�临�Ӷ�O(n) 
int main() 
{ 
    int length;   //���鳤��
    int   i;        //ѭ������
    int  tail;     //��¼���������λ�� 
    cout<<"please input the length of array:"<<endl;
    cin >> length; 
    cout<<"please input every number of array:"<<endl;
    for (i=1; i<=length; i++) 
    {
        cin >> A[i]; 
    }                                               // ������tail��β��������֮�͵����ֵ���������������k���� 
    Tail[1] = A[1]; 
    for (tail=2; tail<=length; tail++)                   // tail���׶� 
    {                                 
        Tail[tail] = max(A[tail],Tail[tail-1]+A[tail]); 
    }                                              // ֻ������״̬ 
                                                   // ��Ϊ������������϶���ĳ������β������ȡ��length������������ֵ
    int All = Tail[1]; 
    for (i=2; i<=length; i++) 
        All = max(All, Tail[i]); 
    cout << "MAX :  "<<All<<"  !"<<endl; 
} 
