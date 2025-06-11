#include <iostream>
using namespace std;

int main(){

    cout << "---------------------------------------Selection Sort---------------------------------------" << endl;

    int a[5] = {3,5,4,1,2};
    int length, shorted = 0, temp;
    length = sizeof(a)/sizeof(a[0]);

    for(int i=0; i<length; i++)
    {
        temp = i;
        shorted = 0;
        for(int j=i+1; j<length; j++)
        {
            if(a[temp] > a[j])
            {
                temp = j;
                
            }
        }

        if(temp != i){
            swap(a[i], a[temp]);
            shorted = 1;
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