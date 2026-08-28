//Check whether character is vowel or not
#include <iostream>
using namespace std;

int main()
{
    char c;
    cout<<"Enter a character: ";
    cin>>c;
        unsigned char uc = c;
        c = tolower(uc);
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        {
            cout<<uc<<" is a vowel"<<endl;
        }
        else
        {
            cout<<uc<<" is not a vowel"<<endl;
        }
        return 0;
    }