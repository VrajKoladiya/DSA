#include<iostream>
using namespace std;

int main(){

    int arr[10] = {2,50,6,1,4,85,97,10,67,59};
    int n = sizeof(arr)/sizeof(arr[0]);



    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
          
        arr[j + 1] = key;

        for(int i=0; i<n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    

    return 0 ;
}