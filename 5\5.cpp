// Write a program to read a number and print digits in a reversed order.
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
void PrintResevedNumber(int Number)
{
        int Remainder=0;
        while(Number>0)
        {
                Remainder=Number%10;
                Number=Number/10;
                cout<<Remainder<<endl;
        }
}
int main()
{
        PrintResevedNumber(ReadNumber("Enter a positive number : \n"));
        return 0;
}