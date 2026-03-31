#include <iostream>
#include <vector>
#include<cmath>
using namespace std;

class calculator
{
protected:
    int n;
    vector<double>operands;
public:
    void getno()
    {
        cout << "Enter the no of operands on which you want to perform calculations: ";
        cin >> n;

        operands.resize(n);

        for (int i = 0; i < n; i++)
        {
            cout << "Enter operand no " << i+1 << ": ";
            cin >> operands[i];
        }
    }

    void perform_subtraction()
    {
        double subtraction=operands[0];
        for(int i=1; i<n; i++)
        {
            subtraction=subtraction-operands[i];
        }

        cout<<"Subtractions of operands is : "<<subtraction<<endl;

    }

    void perform_addition()
    {
        double sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += operands[i];
        }
        cout << "Sum of operands = " << sum << endl;
    }

    void perform_division()
    {
        double div=operands[0];
        for(int i=1; i<n; i++)
        {
            while(operands[i]==0)
            {
                cout<<"Wrong opernad plz enter the operand greater than zero,Operand no"<<i+1<<" : ";
                cin>>operands[i];
            }
            div/=operands[i];

        }
        cout<<"Your result is of division is :"<<div<<endl;

    }


    void perform_multiplication()
    {
        double mul=1;
        for(int i=0; i<n; i++)
        {
            mul=mul*operands[i];

        }

        cout<<"Multiplications of your operands is :"<<mul<<endl;


    }

};

class scientific_calculator
{

public:

    void square_root()
    {
        double x;
        cout<<"\nEnter number for square root : ";
        cin>>x;
        cout<<"Square root of "<<x<<" is "<<sqrt(x)<<endl;

    }

    void power()
    {
        double base,exponent;
        cout<<"Enter the base : ";
        cin>>base;
        cout<<"Enter the Exponent : ";
        cin>>exponent;
        cout<<base<<"Power"<<exponent<<"="<<pow(base,exponent)<<endl;

    }

    void naturallog()
    {
        double x;
        cout<<"enter the number for natural log : ";
        cin>>x;
        cout<<"ln("<<x<<" )"<<"= "<<log(x)<<endl;
    }

    void cosine()
    {
        double angleDegrees;
        cout << "Enter angle in degrees: ";
        cin >> angleDegrees;
        double radians = angleDegrees * M_PI / 180; // convert degrees to radians
        cout << "cos(" << angleDegrees << "°) = " << cos(radians) << endl;
    }


};

class hybrid:public calculator,public scientific_calculator
{


};

int main()
{
    hybrid b;
    int choice;
    do
    {
        cout<<"\n1.Addition\n2.Subtarction\n3.division\n4.Multiplication\n5.Square root \n6.Power\n7.Natural log\n8.cosine\n9.Exit"<<endl;

        do
        {
            cout<<"Enter your Choice(1-9) :";
            cin>>choice;
            if (choice>9||choice<=0)
            {
                cout<<"Enter correct choice(1-9)  ";
                cin>>choice;

            }
        }
        while(choice>9||choice<=0);
        switch(choice)
        {
        case 1:
            b.getno();
            b.perform_addition();
            break;
        case 2:
            b.getno();
            b.perform_subtraction();
            break ;
        case 3:
            b.getno();
            b.perform_division();
            break;

        case 4:
            b.getno();
            b.perform_multiplication();
            break;

        case 5:
            b.square_root();
            break;
        case 6:
            b.power();
            break;

        case 7:
            b.naturallog();
            break;

        case 8:
            b.cosine();
            break;
        case 9:
            cout<<"~~~~~~~~Exiting~~~~~~~~";
            break;
        }

    }
    while(choice!=9);

    return 0;
}
