#include <iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node *next;
} Node;

int main()
{
    Node *Head,*p,*pre,*pTail;
    int n,i,n2,j,k;
    while(cin>>n>>k)
    {
        i=1;
        n2=n;
        
        Head=(Node*)malloc(sizeof(Node));
        Head->data=i++;
        n--;//��Head��ֵһ������-1
        pTail=Head;//��2-n������������
        while(n--)
        {
            p=(Node *)malloc(sizeof(Node));
            p->data=i++;
            pTail->next=p;
            pTail=p;
        }
        pTail->next=Head;
        p=Head;


        while(n2>0)
        {
            for(j=1;j!=k;j++)//��¼p��pre
            {
                pre=p;
                p=p->next;
            }
            (n2==1)?printf("%d\n",p->data):printf("%d ",p->data);
            n2--;
            pre->next=p->next;//�޳����p
            free(p);
            p=pre->next;
        }

    }
    return 0;
}