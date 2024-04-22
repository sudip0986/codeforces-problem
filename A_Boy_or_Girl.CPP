#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    int sum=0;

    for(int i=0; i<s.size(); i++)
    {
        for(int j=i+1; j<s.size(); j++)
    {
        if(s[i]==s[j])
        {
            sum-=1;
            break;
        }
    }
        sum+=1;
    }
    if(sum%2==0)
    cout<<"CHAT WITH HER!";
    else
    cout<<"IGNORE HIM!";

}