#include<iostream>
#include<cctype>
using namespace std;

int checkPassword(char str[],int n)
{
    if(n<4) return 0;

    if(isdigit(str[0])) return 0;
    bool hasDigit=false;
    bool hasUppercase=false;

    for(int i=0;i<n;i++)
    {
        if(isdigit(str[i]))hasDigit=true;
        if(isupper(str[i]))hasUppercase=true;
        if(str[i]== ' ' || str[i]== '/')return 0;
    }
    return(hasDigit && hasUppercase)? 1:0;
}
int main()
{
    char password1[]="aKdf_23";
    char password2[]="wee23";
    cout << "Output 1: " << checkPassword(password1, sizeof(password1)- 1) << endl;
    cout << "Output 2: " << checkPassword(password2, sizeof(password2) - 1 ) << endl;

    return 0;
}
