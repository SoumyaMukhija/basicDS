#include<iostream>
using namespace std;
struct stack
{
    int tos;
    char data[10];
};
char pop ( struct stack *s)
{
    if(s->tos==-1)
    {
        cout<<"Situation underflow!";
        return -1;
    }
    char m;
    m=s->data[s->tos];
    s->tos--;
    return m;
}
void push ( struct stack *s, char m)
{
    if(s->tos==9)
    {
        cout<<"Situation overflow!";
        return;
    }
    s->tos++;
    s->data[s->tos]=m;
}
int main()
{
    cout<<"Enter the string of brackets:";
    char stn [10];
    struct stack s;
    s.tos=-1;
    int flag=0;
    for(int i=0; i<9; ++i)
    {
        cin>>stn[i];
        if(stn[i]=='(' || stn[i] == '{' || stn[i]=='[')
            push(&s, stn[i]);

        else
        {
            char m=pop(&s);
            if ( ( stn[i] == ')' && m!='(') || (stn[i]=='}' && m!='{') || (stn[i]==']' && m!='[') )
            {
                cout<<"Invalid!";
                flag=1;
                break;
            }

        }
    }
    if(flag==0)
        cout<<"Valid!";
}
