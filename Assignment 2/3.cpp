//Accept one number from user,if number is less than 10 then print "Hello" otherwise print "Demo"

//Input : 8     //Output : Hello
//Input : 75    //Output : Demo


#include<iostream>
using namespace std;

class Code
{
    public :
        int iNo;
    
    Code()
    {
        iNo = 0;
    }
    Code(int iValue)
    {
        iNo = iValue;
    }
    void Display()
    {
        if(iNo <= 10)
        {
            cout<<"Hello"<<"\n";
        }
        else
        {
            cout<<"Demo"<<"\n";
        }
    }
};

int main()
{
    int iValue = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    Code obj(iValue);
    obj.Display();

    return 0;
}