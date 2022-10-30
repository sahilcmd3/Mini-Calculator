#include<iostream>
int main()
{
    char op;
    std::cout<<"Choose your operator +,-,*,/: ";
    std::cin>>op;
    float a,b,sum,sub,product,quotient;
    std::cout<<"Enter the value of a and b: ";
    std::cin>>a>>b;
    switch (op)
    {
        case '+':
        sum=a+b;
        std::cout<<"Sum: "<<sum;
        break;
        case '-':
        sub=a-b;
        std::cout<<"Sub: "<<sub;
        break;
        case '*':
        product=a*b;
        std::cout<<"Product: "<<product;
        break;
        case '/':
        quotient=a/b;
        std::cout<<"Quotient: "<<quotient;
        break;
        default:
        std::cout<<"Enter a vaild operator";
        break;
    }
}