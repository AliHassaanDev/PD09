#include<iostream>
using namespace std;

int sameCharacters(string word1,string word2);

int main()
{
    string word1;
    string word2;
    int result;
    cout<<"Enter first word: ";
    cin>>word1;
    cout<<"Enter second word: ";
    cin>>word2;
    result=sameCharacters(word1,word2);
    cout<<"The number of common characters are: "<<result;
}
int sameCharacters(string word1,string word2)
{
    int count=0;
    for(int i=0;word1[i]!='\0';i++)
    {
        for(int j=0;word2[j]!='\0';j++)
        {
            if(word2[j]==word1[i])
            {
                count++;
                word2[j]='0';
                break;
            }
        }
    }
    return count;
}