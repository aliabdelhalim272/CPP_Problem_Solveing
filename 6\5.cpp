// write a program to read a number and print the sum of digits.
#include<iostream>
#include<string>
using namespace std;
int ReadNumber(string Message)
{
        int Number=0;
        do 
        {
                cout<<Message<<"\n";
                cin>>Number;
        }while(Number<=0);
        return Number;
}
int PrintSumOfDigits(int Number)
{
        int Sum=0;
        int Remainder=0;
        while(Number>0)
        {
                Remainder=Number%10;
                Number=Number/10;
                Sum=Sum+Remainder;
        }
        return Sum;
}
int main()
{
       cout<<"\n The sum of your digits : "<< PrintSumOfDigits(ReadNumber("Enter a number: "))<<"\n";
        return 0;
}