#include<iostream>
using namespace std;

bool identitalElements(string arr[]);
int main()
{
    string elements[4];
    for(int i=0;i<4;i++)
    {
        cout<<"Enter elements of array at index "<<i<<": ";
        cin>>elements[i];
    }
    cout<<identicalElements(elements)<<endl;
    return 0;
}
bool identicalElements(string arr[])
{
    for(int i=0;i<4;i++)
    {
        if(arr[0]==arr[i])
        {
            return true;
        }
    }
    return false;
}