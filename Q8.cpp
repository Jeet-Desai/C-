#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main()
{
    int count=0;
    char wonders[7][30]={"CHICHEN ITZA","CHRIST THE REDEEMER", "TAJ MAHAL", "GREAT WALL OF CHINA" ,
    "MACHU PICHHU", "PETRA" , "COLOSSEUM"};
    char country[7][20]={"MEXICO", "BRAZIL", "INDIA" , "CHINA" , "PERU", "JORDAN", "ITALY"};

    char input[20];
    cout<<"Enter the name of a country : ";
    cin>>input;

    for(int i=0;i<7;i++)
    {
        if(!strcmp(input,country[i]))
        {
        cout<<wonders[i];
        break;
        }
        count++;
    }
    if(count==7)
    cout<<"Sorry,not found!";

    return 0;
}