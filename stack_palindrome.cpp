#include<iostream>
using namespace std;
struct stack
{
    char data[10];
    int tos;
};
char pop (struct stack *p)
{
    if(p->tos==-1)
    {
        cout<<"The string is empty." ;
        return 0;
    }
    char m;
    m=p->data[p->tos];
    p->tos--;
    return m;
}
void push(struct stack *p, char alphabet)
{
    if(p->tos==9)
    {
        cout<<"The string is full. Do not try to add more elements.";
        return;
    }

    p->tos++;
    p->data[p->tos]=alphabet;


}
int main()
{
    struct stack p;
    p.tos=-1;
    cout<<"Enter a string that you want to check :";
    char stn [10];
    cin>>stn;
    int count=0;
    while(stn[count]!='\0')
    {
        char m=stn[count];
        push(&p, m);
        count++;
    }
    //cout<<p.tos;
    char nts[10];
    int i=0;
    while(i<count)
    {
        char m=pop(&p);
        nts[i]=m;
        i++;
    }
    int flag=0;
    for(int i=0; i<count; ++i)
    {
        if (nts[i]!=stn[i])
            flag=1;
    }
    if(flag==0)
        cout<<"Palindrome!";
    else  cout<<"Not a palindrome.";




}
