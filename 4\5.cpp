// Write a program to print all perfact numbers from 1 to N.
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
bool Isperfact(int Number)
{
        int Sum=0;
        for(int i=1;i<Number;i++)
        {
                if(Number%i==0)
                Sum+=i;
        }
        return Number=Sum;
}
void PrintNumber(int Number)
{
        for(int i=1;i<=Number;i++)
        {
                if(Isperfact(i))
                {
                        cout<<i<<endl;
                }
        }
}
int main()
{
        PrintNumber(ReadNumber("Enter a positive number: \n"));
}