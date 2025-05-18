// Write a program to check if the number os perfact or not "The perfact number =Sum(all divisors)"
#include<iostream>
#include<string>
using namespace std;

int ReadPositiveNumber(string Message)
{
        int Number=0;
        do 
        {
                cout<<Message<<"\n";
                cin>>Number;
        }while(Number<=0);
        return Number;
}
bool CheckIsPerfactNumber(int Number)
{
        int Sum=0;
        for(int i=1;i<Number;i++)
        {
                if(Number%i==0)
                Sum+=i;
        }
        return Number==Sum;
}
void PrintResult(int Number)
{
        if(CheckIsPerfactNumber(Number))
        cout<<Number<<" Is perfact number.\n";
        else 
        cout<<Number<<" Is not a perfact number.\n";
}
int main()
{
        PrintResult(ReadPositiveNumber("Enter a positive numebr: \n"));
}