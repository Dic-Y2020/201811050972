#include <iostream.h>
void main()
{
	int i,j,k,m,N,temp;
	int a[1001];
	cout<<"������ӵĸ���m=";
	cin>>m;
	cout<<"�����1��ʼ����ÿ������N=";
	cin>>N;
	cout<<"ʱ�������뿪"<<endl;
	for(i=1;i<=m;i++)
	{
		a[i]=i;       //���ݺ��ӵı�Ÿ���������
	}
	for(i=m;i>=1;i--)   //ʣ�µĺ��Ӹ���
   {       
     for(k=1;k<=N;k++)
        {           
          temp=a[1];   //��һ�εĵ�һ�������һ�ε����һ��           
        for(j=0;j<i;j++)
           {               
              a[j]=a[j+1];           
           }           
           a[i]=temp;   
        }   
    }
	cout<<"���Ӵ����ı����"<<a[1]<<endl;

}