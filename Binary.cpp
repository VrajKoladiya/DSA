#include<iostream>
using namespace std;

int binarySearch(int arr[], int l, int h, int number)
{

    int mid;
    mid = (l+h)/2;
    int count = 0;

    if(arr[mid] != number && l <= h)
    {
        if(arr[mid] < number)
        {
           
            return binarySearch(arr, l = mid + 1, h, number);
        }
        else
        {
            return binarySearch(arr, l, h = mid - 1, number);
         
        }
      
       
    }

    if(arr[mid] == number)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;

}

int main(){

    cout << "---------------------------Binary Search---------------------------" << endl;

    int low = 0;
    int high, num;
    

    int a[6] = {2,5,9,10,12,15};

    high = sizeof(a)/sizeof(a[0]);
     

    cout << "Enter a number: ";
    cin >> num;

    binarySearch(a, low, high, num);

    


    return 0;
}