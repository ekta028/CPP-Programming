//Accept N numbers from user and display all such numbers which contains 3 digits in it

//Input  : N = 6        Elements = 8225 665 3 76 953 858	
//Output : 665 953 858


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
		
		void Digits()
		{
			int iCnt = 0 , iCount = 0 , iRem = 0 , temp;

            while(iCnt < iSize)
            {
                temp = Arr[iCnt];
                iCount = 0; 

                while(temp > 0)
                {
                    iRem = temp % 10;
                    iCount++;
                    temp = temp / 10;
                }
                if(iCount == 3)
                {
                    cout<<Arr[iCnt]<<"\t";
                }
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
    obj.Digits();

	return 0;
}