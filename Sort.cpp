#include<iostream>
using namespace std;

void BubbleSort(int a[], int length, int shorted){

    for(int i=0; i<length; i++)
    {
        shorted = 0;
        for(int j=0; j<length-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j], a[j+1]);
                shorted = 1;
                
            }
        }

        if(shorted == 0)
        {
            break;
        }
        for(int k=0; k<length; k++)
        {
            cout << a[k] << " ";
        }
        cout << endl;
    }
}

void SelectionSort(int a[], int length, int shorted){

    int temp;

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
        for(int k=0; k<length; k++)
        {
            cout << a[k] << " ";
        }
        cout << endl;
    }

}

void InsertionSort(int arr[], int n){
    
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
}


int main(){

    int choice;

    cout << "1. Bubble Sort" << endl;
    cout << "2. Selection Sort" << endl;
    cout << "3. Insertion Sort" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    int a[10] = {2,50,6,1,4,85,97,10,67,59};
    int length = sizeof(a)/sizeof(a[0]);
    int shorted = 0;

    switch(choice)
    {
        case 1:
            cout << "--------------------------------Bubble Sort--------------------------------" << endl;
            BubbleSort(a, length, shorted);
            break;
        case 2:
            cout << "--------------------------------Selection Sort--------------------------------" << endl;
            SelectionSort(a, length, shorted);
            break;
        case 3:
            cout << "--------------------------------Insertion Sort--------------------------------" << endl;
            InsertionSort(a, length);
            break;
        default:
            cout << "Invalid choice" << endl;
    }


}