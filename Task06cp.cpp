#include<iostream>
using namespace std;

void evenOddTransform(int arr[],int size,int numOfTimes);
void printArray(int arr[],int size);

int main()
{
    int size,transformations;
    cout<<"Enter size of array:";
    cin>>size;
    const int length=size;
    int array[length];
    for(int i=0;i<length;i++)
    {
        cout<<"Enter elements of array at index "<<i<<" : ";
        cin>>array[i];
    }
    cout<<"Enter number of times to transform array:";
    cin>>transformations;
    evenOddTransform(array,length,transformations);
}
void evenOddTransform(int array[],int size,int transformations)
{
    int x=1;
    while(x<=transformations)
    {
        for(int i=0;i<size;i++)
        {
            if(array[i]%2==0)
            {
                array[i]=array[i]-2;
            }
            else
            {
                array[i]=array[i]+2;
            }
        }
        x++;
    }
    printArray(array,size);
}
void printArray(int array[],int size)
{
    cout<<"{";
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<",";
    }
    cout<<"}";
}