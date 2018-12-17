#include<iostream>
using namespace std;
struct stack
{
    int tos;
    int data[5];
};
int pop(struct stack *s)
{
    if(s->tos==-1)
    {
        cout<<"The stack is empty. ";
        return -1;
    }
    int x;
    x=s->data[s->tos]; //data at the top position
    s->tos--;
    cout<<"Pop successful.";
    return x;
}
void push(struct stack *s, int x) //pointer to stack
{
    if(s->tos==4) //pointer to member
    {
        cout<<"The stack is full. ";
        return;
    }
    s->tos++;
    s->data[s->tos]=x;
    cout<<"Push successful.";
}
int main()
{
    struct stack s;
    s.tos=-1; //member to stack
    cout<<"Enter a number to push:";
    int num;
    cin>>num;
    push(&s,num); //passing address
    cout<<"Now, popping!";
    int x=pop(&s);
    cout<<"\nPopped "<<x;
    cout<<"\nPopping again"<<endl;
    x= pop(&s);
}
