//Accept N numbers from user and display summation of digits of each number

//Input  : N = 6        Elements = 8225 665 3 76 953 858	
//Output : 17 17 3 13 17 21


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
		
		void DigitsSum()
		{
			int iCnt = 0 , iSum = 0 , iRem = 0 , temp;

            while(iCnt < iSize)
            {
                temp = Arr[iCnt];
                iSum = 0; 

                while(temp > 0)
                {
                    iRem = temp % 10;
                    iSum = iSum + iRem;
                    temp = temp / 10;
                }
                cout<<iSum<<"\t";
                iCnt++;
            }
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
    obj.DigitsSum();

	return 0;
}