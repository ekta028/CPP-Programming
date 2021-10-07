//Program to print 5 times "Marvellous" on screen


#include<iostream>
using namespace std;

class Code
{
    public :
        int iCnt;

    void Display()
    {
        for(iCnt = 1 ; iCnt <= 5 ; iCnt++)
        {
            cout<<"Marvellous"<<"\n";
        }
    }
};

int main()
{
    Code obj;
    obj.Display();

    return 0;
}