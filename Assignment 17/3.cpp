//Accept N numbers from user and display all such elments which are even and divisible by 5

//Input  : N = 6     Elements = 85 66 3 80 93 88
//Output : 80


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
		
		void Display()
		{
			int iCnt = 0;

            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                if(Arr[iCnt] % 2 == 0 && Arr[iCnt] % 5 == 0)
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
	int iNo = 0 , iRet = 0;
	
	cout<<"Enter number of elements :";
	cin>>iNo;
	
	Code obj(iNo);
	obj.Accept();
	obj.Display();
	
	return 0;
}