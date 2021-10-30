//Accept N numbers from user and return product of all odd elements

//Input  : N = 6        Elements = 15 66 3 70 10 88	
//Output : 45


#include<iostream>
using namespace std;

class Code
{
	public:
		int *Arr;
		int iSize;
		
		Code(int iNo,int iValue1,int iValue2)
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
		
		int Product()
		{
			int iCnt = 0 , iMult = 1;

            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                if(Arr[iCnt] % 2 != 0)
                {
                    iMult = iMult * Arr[iCnt];
                }
            }
            return iMult;
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

	Code obj(iNo,iValue1,iValue2);

	obj.Accept();
    iRet = obj.Product();
    cout<<"Product is : "<<iRet<<"\n";

	return 0;
}