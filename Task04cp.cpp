#include<iostream>
using namespace std;

bool Boom(int num[],int size);
int main()
{
    int size;
    cout<<"Enter size of array:";
    cin>>size;
    const int length=size;
    int num[length];
    for(int i=0;i<length;i++)
    {
        cout<<"Enter elements of array at index "<<i<<" : ";
        cin>>num[i];
    }
    if(Boom(num,length))
    {
        cout<<"BOOM!"<<endl;
    }
    else
    {
        cout<<"There is no 7 in the array"<<endl;
    }

    return 0;
}
bool Boom(int num[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(num[i]==7)
        {
            return 1;
        }
    }
    return 0;
}