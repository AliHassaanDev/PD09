#include<iostream>
using namespace std;

int calculateTime(string paint[],int length);

int main()
{
    int size,totalTime;
    cout<<"Enter the number of paint in pattern:";
    cin>>size;
    const int length=size;
    string paint[length];
    for(int i=0;i<length;i++)
    {
        cout<<"Enter paint color at index "<<i<<" : ";
        cin>>paint[i];
    }
    totalTime=calculateTime(paint,length);
    cout<<"Time required to paint the pattern is "<<totalTime<<" seconds."<<endl;

    return 0;
}
int calculateTime(string paint[],int length)
{
    int time=2;
    for(int i=1;i<length;i++)
    {
        time=time+2;
        if(paint[i]!=paint[i-1])
        {
            time=time+1;
        }
    }
    return time;
}