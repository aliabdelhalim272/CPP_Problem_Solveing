/*Wrirte a program print the multiplication table from 1to 10 .*/ 
#include<iostream> //We use this to include iostream library what is doing the output and input oprations 
using namespace std;//I used it to avoid using std::
// Here i used the avoid to print the header of the table including the title and the colum labels and i used the for loop to print the number from  1to 10 for the header 
void PrintHeader()
{
        cout<<"\n\n\t\tMultiplication table from 1 to 10.\n\n";
        cout<<"\t";
        for(int i=1;i<=10;i++)
        {
                cout<<i<<"\t";
        }
        cout<<"\n-----------------------------------------------------------------------------------\n";
}
string ColumSperator(int i)
{
        if(i<10)
        return "    |";
        else 
        return "   |";
}
void PrintTable()
{
        PrintHeader();
        for(int i=1;i<=10;i++)
        {
                cout<<" "<<i<<ColumSperator(i)<<"\t"; 
                for(int j=1;j<=10;j++)
                {
                        cout<<i*j<<"\t";
                }
        cout<<endl;
        }
}
int main()
{
        PrintTable();
        return 0;
}
