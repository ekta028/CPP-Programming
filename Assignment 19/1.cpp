//Accept N numbers from user and accept one another number as NO,check whether NO is present or not

//Input  : N = 6		No = 66		Elements = 85 66 3 80 93 88			Output : Number is present


#include<iostream>
using namespace std;

class Code
{
	public:
		int *Arr;
		int iSize;
		int iNum;
		
		Code(int iNo,int iNum)
		{
			iSize = iNo;
			this->iNum = iNum;
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
		
		bool Check()
		{
			int iCnt = 0 , iCount = 0;

			for(iCnt = 0; iCnt < iSize ; iCnt++)
			{
                if(Arr[iCnt] == iNum)
				{
					iCount++;
					break;
				}
			}
			
			if(iCount == 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		
		~Code()
		{
			delete []Arr;
		}
};
		
			
int main()
{
	int iNo = 0 , iNum = 0 ;
	bool bRet = 0;
	
	cout<<"Enter number of elements :";
	cin>>iNo;

	cout<<"Enter the number :";
	cin>>iNum;
	
	Code obj(iNo,iNum);
	obj.Accept();
	
	bRet = obj.Check();
	if(bRet == true)
	{
		cout<<iNum<<" is present";
	}
	else
	{
		cout<<iNum<<" is not present";
	}
	
	return 0;
}