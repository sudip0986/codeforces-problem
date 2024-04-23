#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x=0;
    for(int i =0; i<n; i++)
    {
        string condition;
        cin >>condition;

        string s1 ="++X";
        string s2 ="X++";


        if(condition == s1 || condition == s2 )
        x=++x;
        else
        x=--x;
    }

    cout<<x;
}