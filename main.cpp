#include <iostream>
#include <string>

using namespace std;

int main(){
    string name;
    int age;
    float height;
    double weight;
    char firstletter;

    cout<<"Enter your name:";
    cin>>name;

    cout<<"Enter your age:";
    cin>>age;

    cout<<"Enter your height";
    cin>>height;

    cout<<"Enter your weight:";
    cin>>weight;

    cout<<"Enter first letter of your city:";
    cin>>firstletter;

    int sum = age + 1;


    cout<<"Your name is "<<name<<"\n";
    cout<<" You are "<<age<<" years old "<<"\n";
    cout<<" Your height is "<<height<<"\n";
    cout<<" Your weight is "<<weight<<"\n";
    cout<<" First letter of your city is "<<firstletter<<"\n";
    cout<<" After 1 year you will "<<sum<<" years old ";
    return 0;
}