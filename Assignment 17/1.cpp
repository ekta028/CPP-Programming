//Accept N numbers from user and return difference between summation of even elements and summation of odd elements

//Input  : N = 6     Elements = 85 66 3 80 93 88
//Output : 53 (234 - 181)


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
		
		int Difference()
		{
			int iCnt = 0 , iESum = 0 , iOSum = 0;

			for(iCnt = 0; iCnt < iSize ; iCnt++)
			{
                if(Arr[iCnt] % 2 == 0)
				{
					iESum = iESum + Arr[iCnt];
				}
				else
				{
					iOSum = iOSum + Arr[iCnt];
				}
				
			}
			cout<<iESum<<"\t"<<iOSum<<"\n";
			return iESum - iOSum;
		}
		
		~Code()
		{
			delete []Arr;
		}
};
		
			
int main()
{
	int iNo = 0 , iRet = 0;
	
	cout<<"Enter number of elements :";
	cin>>iNo;
	
	Code obj(iNo);
	obj.Accept();
	
	iRet = obj.Difference();
	cout<<"Difference is : "<<iRet<<"\n";
	
	return 0;
}