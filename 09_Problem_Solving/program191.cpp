#include<iostream>
using namespace std;
class Array
{
    public:
        int *Arr;
        int iSize;
        int iCnt = 0;
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
        cout<<"Enter the Value : \n";
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }
    void Display()
    {
        cout<<"value from the Array : \n";
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cout<<Arr[iCnt]<<"\n";
        }
    }

};

int main()
{
    int iLength = 0, iCnt = 0;
    int *Arr = NULL;

    cout<<"Enter number of elements that you want to store:\n";
    cin>>iLength;

    Array aobj(iLength);

    aobj.Accept();
    aobj.Display();
    
    return 0;
}