#include<iostream>
using namespace std;

float calculatePrice(string movieArr[],string movieName);

int main()
{
    string movieArr[5]={"Gladiator","StarWars","Terminator","TakingLives","TombRider"};
    float price;
    string movieName;
    cout<<"Enter name of movie (Gladiator,StarWars,Terminator,TakingLives,TombRider): ";
    cin>>movieName;
    price=calculatePrice(movieArr,movieName);
    cout<<"Price of ticket of movie "<<movieName<<" is Rs."<<price;
}
float calculatePrice(string movieArr[],string movieName)
{
    int idx;
    for(int i=0;i<5;i++)
    {
        if(movieName==movieArr[i])
        {
            idx=i;
        }
    }
    float total=500;
    float discount;
    if(idx%2==0)
    {
        discount=10;
    }
    else
    {
        discount=5;
    }
    total=total-(total*(discount/100.0));
    return total;    
}