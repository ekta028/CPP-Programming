//Accept number of rows and number of columns from user and display below pattern

//Input : iRow = 4      iCol = 5
//Output : 
// 4 4 4 4 4
// 3 3 3 3 3
// 2 2 2 2 2
// 1 1 1 1 1


#include<iostream>
using namespace std;

class Code
{
    public :
        int iRow , iCol , i , j;

    Code()
    {
        iRow = 0;
        iCol = 0;
        i = 0;
        j = 0;
    }
    Code(int iValue1 , int iValue2)
    {
        iRow = iValue1;
        iCol = iValue2;
    }
    void Pattern()
    {
        for(i = iRow ; i >= 1 ; i--)
        {
            for(j = 1 ; j <= iCol ; j++)
            {
                cout<<i<<"\t";
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