#include<iostream>
#include "functions.h"

using namespace std;

int main()
{
    int ch;
    do{
        cout<<"1.Addition \n2.Substraction \n3.Exit \nEnter your choice : "<<endl;
        cin>>ch;

        switch(ch)
        {
            case 1: add();
                    break;
            case 2: sub();
                    break;
            case 3: break;
            default : 
                cout<<"Invalid input. plz try again"<<endl;
                break;
        }
    }while(ch>0);
}