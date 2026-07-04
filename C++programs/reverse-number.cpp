#include<iostream>
using  namespace std;
int main(){
    int num;
    int rev=0;
    int rem;
    cout<<"Enter number to reverse: ";
    cin>>num;
    while(num!=0){
        rem=num%10;
        rev=rev*10 + rem;
        num=num/10;
    }
    cout<<"Reversed  number is: "<<rev;
}