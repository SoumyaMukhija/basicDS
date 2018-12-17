#include<iostream>
using namespace std;
typedef struct queue
{
    int data [10];
    int head, rear;
} Queue;
void insert( Queue *q, int element)
{
    if(q->rear == 9)
    {
        cout<<"Overflow!";
        return;
    }
    q->rear++;
    q->data[q->rear]=element;
}
void del (Queue *q)
{
    if(q->rear < q->head)
    {
        cout<<"Underflow!";
        return;
    }
    int x= q->data[q->head];
    cout<<x<<"\n";
    q->head++;

}
void showqueue(Queue *q)
{
    if(q->rear < q->head)
    {
        cout<<"The queue is empty";
        return;
    }
    cout<<"\n\nYour queue is:\n";
    while(q->rear >= q->head)

    {
        del(q);
    }
}
int main()
{
    Queue q;
    q.head=0;  //DELETE
    q.rear=-1;  //INSERT
    char ch;
    do
    {
        cout<<"Enter\n1-Insert\n2-Delete\n3-Show\n";
        int choice ;
        cin>>choice;
        if (choice==1)
        {
            cout<<"Enter the number: ";
            int x;
            cin>>x;
            insert(&q,x);
        }
        else if (choice==2)
        {
            del(&q);
            cout<<"Deleted.";
        }
        else if (choice == 3)
        {
            showqueue(&q);
        }

        else
            cout<<"Invalid option.";
        cout<<"\n Do you want to  perform these functions again? Press y for yes.";
        cin>>ch;
    }while(ch=='y' || ch=='Y');
}
