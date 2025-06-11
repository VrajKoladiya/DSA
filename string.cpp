#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    
    string a,b;


    cout<<"Enter a string: ";
    cin>>a;
    b=a;

    cout << "The string you entered is: " << a << endl;

    reverse(a.begin(), a.end());

    cout << "The reversed string is: " << a << endl;

    
    
    if(a==b)
    {
        cout<<"The string is a palindrome";
    }
    else
    {
        cout<<"The string is not a palindrome";
    }

    cout << endl<< "--------------------------------------------------------------------------------------------"<< endl;

    return 0;

}