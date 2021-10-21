//Accept number from user and display below pattern

//Input : 5     Output : A B C D E


#include<iostream>
using namespace std;

class Code
{
    public :
        int iNo , iCnt;
        char cValue;

    Code()
    {
        iNo = 0;
        iCnt = 0;
        cValue = '\0';
    }
    Code(int iValue)
    {
        iNo = iValue;
    }
    void Pattern()
    {
        for(iCnt = 1,cValue = 'A'; iCnt <= iNo ; iCnt++,cValue++)
        {
            cout<<cValue<<"\t";
        }
    }
};

int main()
{
    int iValue = 0;

    cout<<"Enter number of elemnts : ";
    cin>>iValue;

    Code obj(iValue);
    obj.Pattern();

    return 0;
}