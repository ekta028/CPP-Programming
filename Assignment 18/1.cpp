//Accept N numbers from user and return frequency of even numbers

//Input  : N = 6        Elements = 85 66 3 80 93 88	
//Output : 3


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
			int iCnt = 0  , iCount = 0;

            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                if(Arr[iCnt] % 2 == 0)
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
	int iNo = 0 , iValue1 = 0 , iValue2 = 0;
    int iRet = 0;
	
	cout<<"Enter number of elements :";
	cin>>iNo;
	
	Code obj(iNo);

	obj.Accept();
    iRet = obj.Frequency();
    cout<<"Count of even numbers is : "<<iRet<<"\n";

	return 0;
}