//Accept number of rows and number of columns from user and display below pattern

//Input : iRow = 6      iCol = 6
//Output :
// 1       2       3       4       5       6
// 1       2                               6
// 1               3                       6
// 1                       4               6
// 1                               5       6
// 1       2       3       4       5       6


#include<iostream>
using namespace std;

class Code
{
    public :
        int iRow,iCol,i,j;
    
    Code()
    {
        iRow = 0;
        iCol = 0;
        i = 0;
        j = 0;
    }
    Code(int iValue1,int iValue2)
    {
        iRow = iValue1;
        iCol = iValue2;
    }
    void Pattern()
    {
        for(i = 1 ; i <= iRow ; i++)
        {
            for(j = 1 ; j <= iCol ; j++)
            {
                if(i == 1 || j == 1 || i == iRow || j == iCol || i == j)
                {
                    cout<<j<<"\t";
                }
                else
                {
                    cout<<""<<"\t";
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