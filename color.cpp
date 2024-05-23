#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    string test;
    cout<<"Enter character/string: ";
    cin>>test;

    for(int i=0 ; i<2000 ; i++)
    {
        cout<<i<<". "<<test<<" ";
        system("Color 01");
        system("Color 02");
        system("Color 03");
        system("Color 04");
        system("Color 05");
        system("Color 06");
    }

}
