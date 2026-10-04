#include<iostream>
using namespace std;

int main()
{
    int iLength = 0, iCnt = 0;
    int *Arr = NULL;

    cout<<"Enter number of elements that you want to store:\n";
    cin>>iLength;

    Arr = new int[iLength];
    // Arr = (int *)malloc(sizeof(int) * iLength);

    cout<<"Enter the Value : \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>Arr[iCnt];
    }
    cout<<"value from the Array : \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }

    delete []Arr;


    return 0;
}