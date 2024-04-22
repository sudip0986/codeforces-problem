#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while (t--)
    {
        int hh, mm;
        char s;
        cin>> hh>>s>>mm;
        if(hh==0)
        printf("12:%02d AM\n",mm);

        else if(hh==12 )
        printf("12:%02d PM\n",mm);

        else if(hh>12)
        {
            int h= hh-12;
            printf("%02d:%02d PM\n",h,mm);
        }
        else
        printf("%02d:%02d AM\n",hh,mm);

    }
}