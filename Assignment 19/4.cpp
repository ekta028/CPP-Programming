//Accept N numbers from user and accept range,Display all elements from that range

//Input  : N = 6        Start = 60      End = 90        Elements = 85 66 3 76 93 88	
//Output : 85 66 76 88


#include<iostream>
using namespace std;

class Code
{
	public:
		int *Arr;
		int iSize;
		int iStart , iEnd;
		
		Code(int iNo,int iValue1,int iValue2)
		{
			iSize = iNo;
			iStart = iValue1;
            iEnd = iValue2;
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
		
		void Range()
		{
			int iCnt = 0;

            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                if(Arr[iCnt] > iStart && Arr[iCnt] < iEnd)
                {
                    cout<<Arr[iCnt]<<"\t";
                }
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
	
	cout<<"Enter number of elements :";
	cin>>iNo;

	cout<<"Enter the starting point :";
	cin>>iValue1;

    cout<<"Enter the ending point :";
	cin>>iValue2;
	
	Code obj(iNo,iValue1,iValue2);
	obj.Accept();
    obj.Range();

	return 0;
}