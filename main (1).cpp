/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*WEATHER REPORT
NAME:V.VASUNDRA DEVI
COLLEGE: VIVEKANANDHA COLLEGE OF ENGINEERING FOR WOMEN
CLASS AND OBJECTS
FUNCTIONS  
SWITCH CASE
WHILE LOOP
ELSE-IF CONDITION*/
#include <iostream>
using namespace std;
class Weather//CLASS
{
    public:
    void report()//FUNCTION FOR DAY REPORT
    {
        int day;
        cout<<"Enter the report day wanted to know (1,2,3,4)- "<<" "<<endl;
        cin>>day;
        switch(day)
        {
            case 1:cout<<"The weather report of today"<<endl;
            break;
            case 2:cout<<"The weather report of yesterday  "<<endl;
            break;
            case 3:cout<<"The weather report of tomorrow "<<endl;
            break;
            case 4:cout<<"The weather report of week"<<endl;
            break;
            default :cout<<"!!!!So Sad...Invalid Input!!!! "<<endl;
            break;
            exit(day);
        }
    }
    void temperature()//FUNCTION FOR TEMPERATURE
    {
        int temp;
        cout<<"Enter the temperature : "<<endl;
        cin>>temp;
        if(temp==20)
        {
            cout<<"The climate is cold there is a chance of rain.."<<endl;
        }
        else if(temp>20&&temp<=30)
        {
            cout<<"The climate is moderate .."<<endl;
        }
        else if(temp>30&&temp<=35)
        {
            cout<<"The climate is warm ..."<<endl;
        }
        else
        {
            cout<<"The climate is too hot ..."<<endl;
        }
    }
};
int main()//main function
{
    string loc;
    cout<<"Name of your location : "<<" "<<endl;
    cin>>loc;
    Weather w;//Object of a class
    while(1)//Looping statement for checking another weather report
    {
        int choice;
        cout<<"!!!WELCOME TO WEATHER REPORT!!!!"<<endl;
        cout<<"\t1.WEATHER REPORT"<<endl;
        cout<<"\t2.TEMPERATURE"<<endl;
        cout<<"\t3.EXIT"<<endl;
        cin>>choice;
        switch(choice)//switch case 
        {
            case 1:
             w.report();
             break;
             case 2:
             w.temperature();
             break;
            case 3:
             exit(1);
              break;
            default:
              cout<<"OMG!!! Something Went Wrong....."<<endl;
              break;
        }
    }
    return 0;
}
