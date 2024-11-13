#include<iostream>
#include<string>
using namespace std;

void newPin(string moves[],string pin);

int main()
{
    string pin;
    string moves[10]={"Shimmy","Shake","Piroutte","Slide","Boxstep","Headspin","Dosado","Pop","Lock","Arabesque"};
    cout<<"Enter your four digits pin: ";
    cin>>pin;
    for(int i=0;pin[i]!='\0';i++)
    {
        if(((pin[i]!='0') || (pin[i]!='1') || (pin[i]!='2') || (pin[i]!='3') || (pin[i]!='4')
        ||  (pin[i]!='5') || (pin[i]!='6') || (pin[i]!='7') || (pin[i]!='8') || (pin[i]!='9')) && (pin.size()!=4))
        {
            cout<<"Invalid input"<<endl;
            return 0;
        }
    }
    newPin(moves,pin);
    return 0;
}
void newPin(string moves[],string pin)
{
    int digit=0;
    int position=0;
    int index=0;
    for(int i=0;pin[i]!='\0';i++)
    {
        digit=pin[i] - '0';                 //for converting character to integer
        index=position+digit;
        if(index>9)
        {
            index=index%10;
        }
        cout<<"'"<<moves[index]<<"' , ";
        position++;
    }
}