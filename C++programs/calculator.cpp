#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    char choice;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"Enter choice(+,-,*,/,%)";
    cin>>choice;
    switch(choice){
        case '+':
        cout<<"Addition :"<<num1+num2;
        break;
        case '-':
        cout<<"Substraction :"<<num1-num2;
        break;
        case '*':
        cout<<"Multiplication :"<<num1*num2;
        break;
        case '/':
        if(num2!=0){
            cout<<"division :"<<(float)num1/num2;
        }
        else{
            cout<<"can not be divide by zero";
        }
        break;
        case '%':
        if(num2!=0)
        cout<<"Modulus is :"<<num1%num2;
        else
        cout<<"Modulus by zero is not allowed";
        break;
        default :
        cout<<"invalid operator";

    }
}