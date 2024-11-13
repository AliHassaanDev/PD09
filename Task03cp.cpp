#include<iostream>
using namespace std;

bool checkEven(string word);
int main()
{
    string word;
    cout<<"Enter a word:";
    cin>>word;
    cout<<checkEven(word)<<endl;
}
bool checkEven(string word)
{
    int i=0;
    while(word[i]!='\0')
    {
        i++;
    }
    if(i%2==0)
    {
        return true;
    }
    return false; 
}