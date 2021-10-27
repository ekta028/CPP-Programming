//Accept number of rows and number of columns from user and display below pattern

//Input : iRow = 4      iCol = 4
//Output : 
// 1       2       3       4
//         2       3       4
//                 3       4
//                         4


#include<iostream>
using namespace std;

class Code
{
    public :
        int iRow,iCol,i,j,k;

    Code()
    {
        iRow = 0;
        iCol = 0;
        i = 0;
        j = 0;
        k = 0;
    }
    Code(int iValue1,int iValue2)
    {
        iRow = iValue1;
        iCol = iValue2;
    }
    void Pattern()
    {
        for(i = iRow ; i >= 1 ; i--)
        {
            for(j = iCol , k = 1 ; j >= 1 ; j-- , k++)
            {
                if(i >= j)
                {
                    cout<<k<<"\t";
                }
                else
                {
                    cout<<"\t";
                }
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