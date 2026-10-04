#include<iostream>
using namespace std;
class Array
{
    public:
        int *Arr;
        int iSize;
        
    Array(int A)
    {
        iSize = A;
        Arr = new int[iSize];
    }

    ~Array()
    {
        delete []Arr;
    }

    void Accept()
    {
        int iCnt = 0;
        cout<<"Enter the Value : \n";
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }
    void Display()
    {
        int iCnt = 0;
        cout<<"value from the Array : \n";
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cout<<Arr[iCnt]<<"\n";
        }
    }
    int Counteven()
    {
        int iCnt = 0, iCount = 0;
        for(iCnt = 1;iCnt <= iSize;iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                iCount++;
            }
        }
        return iCount;
    }

};

int main()
{
    int iLength = 0, iCnt = 0,iRet = 0;
    int *Arr = NULL;

    cout<<"Enter number of elements that you want to store:\n";
    cin>>iLength;

    Array aobj(iLength);

    aobj.Accept();
    aobj.Display();

    iRet = aobj.Counteven();

    cout<<"Number of even elements is:\n"<<iRet;
    
    return 0;
}