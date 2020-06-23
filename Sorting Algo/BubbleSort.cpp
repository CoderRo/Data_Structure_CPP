/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void bubbleSort(int arr[], int size) {
    int i = 0,j = 0;
    for( i = 0 ; i < size - 1 ; i++) {
        for ( j = 0 ; j < size - i - 1; j++) {
            if ( arr[j] > arr[j+1] ) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(i = 0 ; i < size ; i++) {
        cout<<arr[i]<<endl;
    }
}
int main()
{
  int *arr;
  int size;
  cin >> size;
  arr = new int[size];
  for ( int i = 0; i < size ; i++) {
      cin>>arr[i];
  }
  bubbleSort(arr,size);
}
