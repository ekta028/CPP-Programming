//Accept division of student from user and depends on the division display exam timing.There are 4 divisions in school as A,B,C,D.Exam of division A at 7AM,B at 8:30AM ,C at 9:20AM and D at 10:30AM.(Application should be case insensetive)

//Input : C     //Output : Exam at 9:20
//Input : d     //Output : Exam at 10:30

#include<iostream>
using namespace std;

class Code
{
    public :
        char ch;

    Code()
    {
        ch = '\n';
    }
    Code(char cValue)
    {
        ch = cValue;
    }
    void DisplaySchedule()
    {
        if(ch == 'A' || ch =='a')
        {
            cout<<"Exam at 7AM \n";
        }
        else
        if(ch == 'B' || ch =='b')
        {
            cout<<"Exam at 8.30AM \n";
        }
        else
        if(ch == 'C' || ch =='c')
        {
            cout<<"Exam at 9.20AM \n";
        }
        else
        if(ch == 'D' || ch =='d')
        {
            cout<<"Exam at 10.30AM \n";
        }
    }
};

int main()
{
    char cValue = '\0';
    bool bRet = false;

    cout<<"Enter your division : ";
    cin>>cValue;

    Code obj(cValue);
    obj.DisplaySchedule();

    return 0;
}
