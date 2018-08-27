#include<iostream>
using namespace std;
int main()
{
    float k, m1, m2, d, f;
    k=0.0000000667;
    cout<<"Please type the first body mass."<<endl;
    cin>>m1;
    cout<<endl;
    while (cin.fail())
    {
        cout<<"Please type a number only."<<endl;
        cin.clear();
        cin.ignore();
        cin>>m1;
        cout<<endl;
    }
    cout<<"Please type the second body mass."<<endl;
    cin>>m2;
    cout<<endl;
    while (cin.fail())
    {
        cout<<"Please type a number only."<<endl;
        cin.clear();
        cin.ignore();
        cin>>m2;
        cout<<endl;
    }
    cout<<"Please type the distance between the bodies."<<endl;
    cin>>d;
    cout<<endl;
    while (cin.fail())
    {
        cout<<"Please type a number only."<<endl;
        cin.clear();
        cin.ignore();
        cin>>d;
        cout<<endl;
    }
    f=((m1*m2)/(d*d))*k;
    cout<<"The force you get is: "<<f;
    cout<<endl;
    return 0;
}
