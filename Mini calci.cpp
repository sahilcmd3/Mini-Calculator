#include<iostream>
using namespace std;
int main()
{
    char op;
    cout<<"Choose your operator +,-,*,/: ";
    cin>>op;
    float a,b,sum,sub,product,quotient;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    switch (op)
    {
        case '+':
        sum=a+b;
        cout<<"Sum: "<<sum;
        break;
        case '-':
        sub=a-b;
        cout<<"Sub: "<<sub;
        break;
        case '*':
        product=a*b;
        cout<<"Product: "<<product;
        break;
        case '/':
        quotient=a/b;
        cout<<"Quotient: "<<quotient;
        break;
        default:
        cout<<"Enter a vaild operator";
        break;
    }
}