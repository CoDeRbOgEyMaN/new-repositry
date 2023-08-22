#include<iostream>
using namespace std;
int main()
{
int choice;
double a,b;
cout<<"please enter the operation that you want to do:\n1. ADDITION\n2. SUBTRACTION\n3. MULTIPLICATION\n4. DIVISION\n5. SIN()\n6. COS()\n7. TAN()\n";
cin>>choice;
switch(choice){
    case 1: 
            cout<<"please enter the 1st number:";
            cin>>a;
            cout<<"please enter the 2nd number:";
            cin>>b;
            cout<<"the ADDITION of entered number is :"<<a+b;
            break;
    case 2: 
            cout<<"please enter the 1st number:";
            cin>>a;
            cout<<"please enter the 2nd number:";
            cin>>b;
            cout<<"the SUBTRACTION of entered number is :"<<a-b;
            break;
    case 3: 
            cout<<"please enter the 1st number:";
            cin>>a;
            cout<<"please enter the 2nd number:";
            cin>>b;
            cout<<"the MULTIPLICATION of entered number is :"<<a*b;
            break;
    case 4: 
            cout<<"please enter the 1st number:";
            cin>>a;
            cout<<"please enter the 2nd number:";
            cin>>b;
            cout<<"the DIVISION of entered number is :"<<a/b;
            break;
    case 5: 
            cout<<"please enter the angles in radian ";
            cin>>a;
            b= a-a*a*a/6 + a*a*a*a*a/120 - a*a*a*a*a*a*a*a/5040 + a*a*a*a*a*a*a*a*a/362880 - a*a*a*a*a*a*a*a*a*a*a/39916800 + a*a*a*a*a*a*a*a*a*a*a*a*a/6227020800 - a*a*a*a*a*a*a*a*a*a*a*a*a*a*a/1307674368000;
            cout<<"the value of sin("<<a<<") is " <<b;
            break;
    case 6: 
            cout<<"please enter the angles in radian ";
            cin>>a;
            b= 1 - a*a/2 + a*a*a*a/24 - a*a*a*a*a*a/720 + a*a*a*a*a*a*a*a/40320 - a*a*a*a*a*a*a*a*a*a/3628800 + a*a*a*a*a*a*a*a*a*a*a*a/479001600 - a*a*a*a*a*a*a*a*a*a*a*a*a*a/87178291200;
            cout<<"the value of cos("<<a<<") is " <<b;
            break;
    case 7: 
            cout<<"please enter the angles in radian ";
            cin>>a;
            b= a + a*a*a/3 + 2*a*a*a*a*a/15 + 17*a*a*a*a*a*a*a/315;
            cout<<"the value of tan("<<a<<") is " <<b;
            break;
    default:
    cout<<"you entered the wrong the choice!!!! ";
}

}
