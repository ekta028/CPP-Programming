//Accept number of rows and number of columns from user and display below pattern

//Input : iRow = 4      iCol = 4
//Output : 
// A B C D
// a b c d
// A B C D
// a b c d


#include<iostream>
using namespace std;

class Code
{
    public :
        int iRow , iCol , i , j;
        char cValue1 , cValue2;

    Code()
    {
        iRow = 0;
        iCol = 0;
        i = 0;
        j = 0;
        cValue1 = '\0';
        cValue2 = '\0';
    }
    Code(int iValue1 , int iValue2)
    {
        iRow = iValue1;
        iCol = iValue2;
    }
    void Pattern()
    {
        for(i = 1 ; i <= iRow ; i++)
        {
            for(j = 1 , cValue1 = 'A' , cValue2 = 'a' ; j <= iCol ; j++ , cValue1++ , cValue2++)
            {
                if(i % 2 == 0)
                {
                    cout<<cValue2<<"\t";
                }
                else
                {
                     cout<<cValue1<<"\t";
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