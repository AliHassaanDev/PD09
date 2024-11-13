#include<iostream>
using namespace std;

float calculatePrice(string arr1[],int arr2[],string fruit,int kilos);
int findInArray(string arr1[],string fruit);
int main()
{
    string fruitArr[4]={"peach","apple","guava","watermelon"};
    int priceArr[4]={60,70,40,30};

    float kgs,total;
    string fruit;
    cout<<"Enter fruit name (peach,apple,guava,watermelon): ";
    cin>>fruit;
    cout<<"Enter Quantity of fruit in kgs: ";
    cin>>kgs;
    total=calculatePrice(fruitArr,priceArr,fruit,kgs);
    cout<<"Total price of "<<kgs<<" kilograms of "<<fruit<<" is Rs."<<total;
}
int findIndex(string fruitArr[],string fruit)
{
    for(int i=1;i<=4;i++)
    {
        if(fruit==fruitArr[i])
        {
            return i;
        }
    }
    return 0;
}
float calculatePrice(string fruitArr[],int priceArr[],string fruit,int kgs)
{
    float total;
    int idx=findIndex(fruitArr,fruit);
    total=priceArr[idx]*kgs;
    return total;  
}