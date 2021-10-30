//Accept N numbers from user and check whether that numbers contains 11 in it or not

//Input  : N = 6        Elements = 85 11 80 93 88	90
//Output : Array contains 11 in it


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
		
		bool Check()
		{
			int iCnt = 0 , iCount = 0;

            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                if(Arr[iCnt]== 11)
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
	int iNo = 0 , iValue1 = 0 , iValue2 = 0;
    bool bRet = 0;
	
	cout<<"Enter number of elements :";
	cin>>iNo;
	
	Code obj(iNo);

	obj.Accept();
    bRet = obj.Check();
    if(bRet == true)
    {
        cout<<"Array contains 11 in it";
    }
    else
    {
        cout<<"Array not contains 11 in it";
    }

	return 0;
}