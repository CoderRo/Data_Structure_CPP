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
