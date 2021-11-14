//Accept N numbers from user and return the smallest number

//Input  : N = 6        Elements = 85 66 3 66 93 88	
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
		
		int Minimum()
		{
			int iCnt = 0  , iMin = Arr[0];

            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                if(Arr[iCnt] < iMin)
                {
                    iMin = Arr[iCnt];
                }
            }
            return iMin;
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
	
	Code obj(iNo);

	obj.Accept();
    iRet = obj.Minimum();
    cout<<"Smallest number is : "<<iRet<<"\n";

	return 0;
}