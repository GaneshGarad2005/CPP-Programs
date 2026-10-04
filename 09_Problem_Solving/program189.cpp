#include<iostream>
using namespace std;

class Factor
{
    public:
        int iNo = 0;

        Factor(int A)
        {
            iNo = A;
        }
        void Display()
        {
            int iCnt = 0;

            for(iCnt = 1;iCnt <= iNo/2;iCnt++)
            {
                if(iNo % iCnt == 0)
                    {
                        cout<<iCnt<<"\n";
                    }
            }
        }
};
int main()
{
    int iValue = 0;

    cout<<"Enter number :\n";
    cin>>iValue;

    Factor obj(iValue);
    obj.Display();

    return 0;
}