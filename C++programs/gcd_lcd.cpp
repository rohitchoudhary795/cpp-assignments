#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0)
    return a;
    return gcd(b,a%b);
}
int main(){
    int a,b;
    cout<<"enter number a and b : ";
    cin>>a>>b;
    int result=gcd(a,b);
    cout<<"gcd : "<<result;
    cout<<endl;
    cout<<"lcd :"<<(a*b)/result;
}