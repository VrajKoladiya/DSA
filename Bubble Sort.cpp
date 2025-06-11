#include <iostream>
using namespace std;

int main(){

    cout << "----------------------------------------Bubble Sort----------------------------------------" << endl;

    int a[5] = {3,5,4,1,2};
    int length, shorted = 0;

    length = sizeof(a)/sizeof(a[0]);

    for(int i=0; i<length; i++)
    {
        shorted = 0;
        for(int j=0; j<length-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                shorted = 1;
                
            }
        }

        if(shorted == 0)
        {
            break;
        }
        for(int k=0; k<5; k++)
        {
            cout << a[k] << " ";
        }
        cout << endl;
    }

    


    return 0;
}