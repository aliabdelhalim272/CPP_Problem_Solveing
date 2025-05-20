// Write a program to read a number and print it reversed.
#include<iostream>
#include<string>
using namespace std;
int ReadNumber(string Message)
{
        int Number=0;
        do 
        {
                cout<<Message<<endl;
                cin>>Number;
        }while(Number<=0);
return Number;
}
int ReversedNumber(int Number)
{
        int Remanider=0;
        int Number2=0;
        while(Number>0)
        {
                Remanider=Number%10;
                Number=Number/10;
                Number2=Number2*10+Remanider;
        }
        return Number2;
}
int main()
{
        cout<<"\n Reversed is : \n"<<ReversedNumber(ReadNumber("Enter a number: "))<<"\n";
        return 0;
}