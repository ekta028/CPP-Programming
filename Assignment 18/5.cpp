//Accept N numbers from user and accept one anothar number as NO and return frequency of NO from it

//Input  : N = 6        NO = 12     Elements = 85 12 3 80 12 88	
//Output : 2


#include<iostream>
using namespace std;

class Code
{
	public:
		int *Arr;
		int iSize , iVal;
		
		Code(int iNo,int iValue)
		{
			iSize = iNo;
            iVal = iValue;
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
			int iCnt = 0  , iCount = 0;

            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                if(Arr[iCnt] % iVal == 0)
                {
                    iCount++;
                }
            }
            return iCount;
		}
		
		~Code()
		{
			delete []Arr;
		}
};
		
			
int main()
{
	int iNo = 0 , iValue = 0;
    int iRet = 0;
	
	cout<<"Enter number of elements :";
	cin>>iNo;

    cout<<"Enter Number : ";
    cin>>iValue;
	
	Code obj(iNo,iValue);

	obj.Accept();
    iRet = obj.Frequency();
    cout<<"Count of "<<iValue<<" is : "<<iRet<<"\n";

	return 0;
}