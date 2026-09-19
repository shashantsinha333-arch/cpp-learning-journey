#include <iostream>
using namespace std;

int main(){
    
    string name;
    string status;
    int age;
    double percentage;
    char grade;

    cout<<"Enter your name:";
    cin>>name;

    cout<<"Enter your age:";
    cin>>age;

    cout<<"Enter your percentage:";
    cin>>percentage;

    cout<<"Enter your grade:";
    cin>>grade;

    if (age >= 17){

        if(percentage >= 60 ){
            cout<<"Eligible."<<"\n";
            status = "Eligible";

        }
        else if (percentage < 60){
            cout<<"Not eligible due to percentage."<<"\n";
            status = "Not eligible-percentage";
         }
        
         }

        else{
            cout<<"Not eligible due to age."<<"\n";
            status = "Not eligible-age";
        }

        switch (grade){

            case 'A':
            cout<<"excellent";
            break;

            case 'B':
            cout<<"Very good";
            break;

            case 'C':
            cout<<"Good";
            break;

            case 'D':
            cout<<"Average";
            break;

            case 'F':
            cout<<"Fail";
            break;

            default:
            cout<<"Invalid grade";
        }
    
        if (percentage >= 60 && grade != 'F'){
            cout<<"Passed."<<"\n";
        }
        else{
            cout<<"Need improvment."<<"\n";
        }

        int choice;
        cout<<"Enter your choice:";
        cin>>choice;

        switch (choice){

        case 1:
        cout<<name<<"\n";
        cout<<age<<"\n";
        cout<<percentage<<"\n";
        cout<<grade<<"\n";
        break;

        case 2:
        cout<<status;
        break;

        case 3:
        switch (grade){
         
            case 'A':
            cout<<"excellent";
            break;

            case 'B':
            cout<<"Very good";
            break;

            case 'C':
            cout<<"Good";
            break;

            case 'D':
            cout<<"Average";
            break;

            case 'F':
            cout<<"Fail";
            break;

            default:
            cout<<"Invalid grade";
        }
        break;

        case 4:
        cout<<"Exit";
        break;

        default:
        cout<<"Invalid choice.";
        
    }

    return 0;
}