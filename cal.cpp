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
            case 1: Addition a_obj;
                    a_obj.add();
                    break;
            case 2: Substraction s_obj;
                    s_obj.sub();
                    break;
            case 3: 
                    cout<<"Existing...."<<endl;
                    break;
            default : 
                cout<<"Invalid input. plz try again"<<endl;
                break;
        }
    }while(ch!=3);
}