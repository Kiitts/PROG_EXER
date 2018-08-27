#include<iostream>
using namespace std;
int main()
{
    float pnds, bag, result;
    pnds=2205;
    cout<<"Type the amount of the rice that can hold in a bag."<<endl;
    cin>>bag;
    cout<<endl;
    result=pnds/bag;
    cout<<"You need "<<result<<" bags.";
    return 0;
}
