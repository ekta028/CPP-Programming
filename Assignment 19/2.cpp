//Accept N numbers from user and accept one another number as NO and return first occurence of that NO

//Input  : N = 6		No = 66		Elements = 85 66 3 80 66 88		Output : 1


#include<iostream>
using namespace std;

class Code
{
	public:
		int *Arr;
		int iSize;
		int iNumber;
		
		Code(int iNo,int iNum)
		{
			iSize = iNo;
			iNumber = iNum;
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
		
		int FirstOcc()
		{
			int iCnt = 0 , iCount = 0;

			for(iCnt = 0; iCnt < iSize ; iCnt++)
			{
                if(Arr[iCnt] == iNumber)
				{
					break;
				}
			}
            return iCnt;
		}
		
		~Code()
		{
			delete []Arr;
		}
};
		
			
int main()
{
	int iNo = 0 , iNum = 0 , iRet = 0;
	
	cout<<"Enter number of elements :";
	cin>>iNo;

	cout<<"Enter the number :";
	cin>>iNum;
	
	Code obj(iNo,iNum);
	obj.Accept();
	
	iRet = obj.FirstOcc();
    cout<<"First occurence of "<<iNum<<" in array is at "<<iRet<<" index"<<"\n";
	
	return 0;
}