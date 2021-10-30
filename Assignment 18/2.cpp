//Accept N numbers from user and return difference between frequency of even numbers and frequency of odd numbers

//Input  : N = 7        Elements = 85 66 3 80 93 88	90
//Output : 1(4 - 3)


#include<iostream>
using namespace std;

class Code
{
	public:
		int *Arr;
		int iSize;
		
		Code(int iNo)
		{
			iSize = iNo;
			Arr = new int[iSize];
		}
		
		void Accept()
		{
			int iCnt = 0;

			cout<<"Enter the value : ";
			for(iCnt = 0 ; iCnt < iSize ; iCnt++)
			{
                cin>>Arr[iCnt];
			}
            cout<<"\n";
		}
		
		int Frequency()
		{
			int iCnt = 0  , iECount = 0 , iOCount = 0;

            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                if(Arr[iCnt] % 2 == 0)
                {
                    iECount++;
                }
                else
                {
                    iOCount++;
                }
            }
            return iECount - iOCount;
		}
		
		~Code()
		{
			delete []Arr;
		}
};
		
			
int main()
{
	int iNo = 0 , iValue1 = 0 , iValue2 = 0;
    int iRet = 0;
	
	cout<<"Enter number of elements :";
	cin>>iNo;
	
	Code obj(iNo);

	obj.Accept();
    iRet = obj.Frequency();
    cout<<"Difference of frequency of even numbers and odd numbers is : "<<iRet<<"\n";

	return 0;
}