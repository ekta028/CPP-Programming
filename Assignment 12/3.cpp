//Accept number of rows and number of columns from user and display below pattern

//Input : iRow = 4      iCol = 4
//Output : 
// A A A A
// B B B B
// C C C C
// D D D D


#include<iostream>
using namespace std;

class Code
{
    public :
        int iRow , iCol , i , j;
        char cValue;

    Code()
    {
        iRow = 0;
        iCol = 0;
        i = 0;
        j = 0;
        cValue = '\0';
    }
    Code(int iValue1 , int iValue2)
    {
        iRow = iValue1;
        iCol = iValue2;
    }
    void Pattern()
    {
        for(i = 1 , cValue = 'A' ; i <= iRow ; i++ , cValue++)
        {
            for(j = 1 ; j <= iCol ; j++ )
            {
                cout<<cValue<<"\t";
            }
            cout<<"\n";
        }
    }
};

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    cout<<"Enter number of rows : ";
    cin>>iValue1;

    cout<<"Enter number of columns : ";
    cin>>iValue2;

    Code obj(iValue1,iValue2);
    obj.Pattern();

    return 0;
}