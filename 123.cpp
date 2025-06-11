#include<iostream>
#include <string>


using namespace std;
int main()
{
    string b;

    cout<<"Enter a string: ";
    getline(cin,b);
    cout << "The string you entered is: " << b << endl;

    cout << "Length of the string: " << b.length() << endl;

    for(int i=0; i<b.length(); i++)
    {
        for(int j=i+1; j<b.length(); j++)
        {
            if(b[i]==b[j])
            {
                b.erase(j,1);
                j--;
            }
        }
    }
   
    cout << "All String in the dublicate caracter erase: " << b << endl;

    

    return 0;
   
   

} 