#include <iostream>
using namespace std;

int main(){
    int a;
    int b;

    cout<<"Enter first number:";
    cin>>a;

    cout<<"enter second number:";
    cin>>b;

    int sum = a+b;
    int diff = a-b;
    int product = a*b;
    int quotient = a/b;
    int remainder= a%b;
    cout<<sum<<"\n";
    cout<<diff<<"\n";
    cout<<product<<"\n";
    cout<<quotient<<"\n";
    cout<<remainder<<"\n";

    bool greater = a>b;
    cout<<greater<<"\n";

    bool positive = (a>0)&&(b>0);
    cout<<boolalpha;
    cout<<greater<<"\n";

    bool negative =(a<0)||(b<0);
    cout<<boolalpha;
    cout<<negative;

    return 0;
}