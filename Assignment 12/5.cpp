//Accept number of rows and number of columns from user and display below pattern

//Input : iRow = 3      iCol = 4
//Output : 
// 1 2  3  4
// 5 6  7  8
// 9 10 11 12



#include<iostream>
using namespace std;

class Code
{
    public :
        int iRow , iCol , i , j , k;

    Code()
    {
        iRow = 0;
        iCol = 0;
        i = 0;
        j = 0;
        k = 0;
    }
    Code(int iValue1 , int iValue2)
    {
        iRow = iValue1;
        iCol = iValue2;
    }
    void Pattern()
    {
        k = 1;

        for(i = iRow ; i >= 1 ; i--)
        {
            for(j = 1 ; j <= iCol ; j++ , k++)
            {
                cout<<k<<"\t";
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