#include<iostream>
#include<string>
using namespace std;
int main()
{
    string FN1, FN2, FN3, bdayd, bdaym, bdayy, address, phone, email;
    cout<<"Type your complete name here"<<endl;
    cin>>FN1>>FN2>>FN3;
    cout<<endl<<"Type your birthdate MM(space)DD(space)YY."<<endl;
    cin>>bdaym>>bdayd>>bdayy;
    cout<<endl<<"Type your address."<<endl;
    cin>>address;
    cout<<endl<<"Type your phone number."<<endl;
    cin>>phone;
    cout<<endl<<"Type your email address."<<endl;
    cin>>email;
    cout<<endl;
    cout<<"NAME:\t\t"<<FN3<<", "<<FN1<<" "<<FN2<<endl;
    cout<<"BIRTHDATE:\t"<<bdaym<<"/"<<bdayd<<"/"<<bdayy<<endl;
    cout<<"ADDRESS:\t"<<address<<endl;
    cout<<"PHONE#:\t\t"<<phone<<endl;
    cout<<"Email:\t\t"<<email<<endl;
    return 0;

}
