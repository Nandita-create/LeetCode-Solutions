//Changer Lowercase to Upper Case and vice-versa
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    //otherwise std::string

    cout<<"Enter a string: ";
    cin>>str;
    cout<<"Original string: "<<str<<endl;

    /*Meaning of 'char &c' in for loop
    'char' means each element is a character. 
    'c' is the variable storing the current character.
    The '&' means reference.
    Instead of making a copy of each character, 
    c becomes another name for the original character inside the string.*/
    for (char &c: str)
    {
        /*On some systems, char is signed by default. Characters with values above 127 
        (such as accented letters like é) may become negative numbers when stored in a signed char. 
        Passing those negative values to these functions can cause undefined behavior.*/
        unsigned char uc = c;
        if(isupper(uc))
        {
            c = tolower(uc);
        }
        else if(islower(uc))
        {
            c = toupper(uc);
        }
    }
    cout<<"Modified string: "<<str<<endl;
    return 0;
}