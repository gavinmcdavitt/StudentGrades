#include <iostream>
#include <iomanip>
#include <cstring>
#include <cctype>
#include "studentlist.h"
using namespace std;
char ShowMenu();
char ShowMenu()
{
    char a;
    cout<<"\t\t*** Student List Menu ***"<<endl;
    cout<<"I\t Import Students From File"<<endl;
    cout<<"S\t Show Student List (Brief)"<<endl;
    cout<<"E\t Export a game report (to file)"<<endl;
    cout<<"M\t Show this Menu"<<endl;
    cout<<"Q\t Quit"<<endl;
    cin>>a;
    a=toupper(a);
    while(a!='I'&&a!='S'&&a!='E'&&a!='M'&&a!='Q')
    {
        cout<<"Please try again"<<endl;
        cout<<"\t\t*** Student List Menu ***"<<endl;
        cout<<"I\t Import Students From File"<<endl;
        cout<<"S\t Show Student List (Brief)"<<endl;
        cout<<"E\t Export a game report (to file)"<<endl;
        cout<<"M\t Show this Menu"<<endl;
        cout<<"Q\t Quit"<<endl;
        cin>>a;
        a=toupper(a);
    }
    return a;
}
int main() {
    char res;
    char fileName[31];//allowing 30 characters for a files name;
    while(res=ShowMenu())
    {
        if(res=='I')
        {
            cout<<"Please enter file name: ";
            cin.ignore();
            cin.getline(fileName,31);
            cout<<"end"<<endl;

        }
        if(res=='S')
        {
            cout<<"Test S"<<endl;
        }
        if(res=='E')
        {
            cout<<"Please enter file name: ";
            cin.ignore();
            cin.getline(fileName, 31);
            cout<<"end"<<endl;
        }
        if(res=='S')
        {
            res=ShowMenu();
        }
        if(res=='Q')
        {
            cout<<"\nGoodbye!";
            break;
        }
    }
    return 0;
}
