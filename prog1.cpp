#include<iostream>
using namespace std;

int sum(int a, int b) {return a + b; }
int sub(int a, int b) {return a - b; }
int mul(int a, int b) {return a * b; }
int divi(int a, int b) {return a / b; }
int mod(int a, int b) {return a % b; }

int main()
{
    int choice,a,b;

    do
    {
        cout<<endl<<"-------------------"<<endl;
        cout<<"press 1 for + "<<endl;
        cout<<"press 2 for - "<<endl;
        cout<<"press 3 for * "<<endl;
        cout<<"press 4 for % "<<endl;
        cout<<"press 5 for / "<<endl;
        cout<<"press 0 for exit "<<endl;
        cout<<"enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1 :
                cout<<"enter the number a: ";
                cin>>a;

                cout<<"enter the number b: ";
                cin>>b;

                cout<<endl<<"-------------------"<<endl<<endl;
                cout<<"sum of two number: "<<sum(a,b)<<endl;

                break;
            case 2 :
                cout<<"enter the number a: ";
                cin>>a;

                cout<<"enter the number b: ";
                cin>>b;

                cout<<endl<<"-------------------"<<endl<<endl;
                cout<<"sub of two number: "<<sub(a,b)<<endl;
                
                break;
            case 3 :
                cout<<"enter the number a: ";
                cin>>a;

                cout<<"enter the number b: ";
                cin>>b;

                cout<<endl<<"-------------------"<<endl<<endl;
                cout<<"sub of two number: "<<mul(a,b)<<endl;
                
                break;
            case 4 :
                cout<<"enter the number a: ";
                cin>>a;

                cout<<"enter the number b: ";
                cin>>b;

                cout<<endl<<"-------------------"<<endl<<endl;
                cout<<"sub of two number: "<<divi(a,b)<<endl;
                
                break;
            case 5 :
                cout<<"enter the number a: ";
                cin>>a;

                cout<<"enter the number b: ";
                cin>>b;

                cout<<endl<<"-------------------"<<endl<<endl;
                cout<<"sub of two number: "<<mod(a,b)<<endl;
                
                break;
            case 0 :
                break;
            default :
                cout<<"wrong choice!!";
        }

    }
    while
    (choice != 0);

    return 0;
}