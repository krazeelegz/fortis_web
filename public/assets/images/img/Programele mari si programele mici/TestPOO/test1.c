#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int abs(int i);
double abs(double d);
long abs(long l);




int main()
{
    cout<<abs(-10)<<endl;
    cout<<abs(-11.0)<<endl;
    cout<<abs(-9l)<<endl;


    return 0;
}

int abs(int i)
{
    cout<<"Using int abs\n";
    return i<0 ? -i : i;
}
double abs (double d)
{
    cout<<"Using double abs\n";
    return d<0.0 ? -d : d;

}

long abs(long l)
{
    cout<<"Using long abs\n";
    return l<0 ? -l : l;

}

