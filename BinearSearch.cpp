#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int element) {
  int low=0, mid, high=size-1;
  //searching
  while(low <= high){
  mid = (low + high)/2;
  if (arr[mid] == element) {
    return mid;
  } else if (arr[mid] < element) {
    low = mid + 1;
}
else if (arr[mid] > element) {
    high = mid - 1;
}}
  return -1;
} // searching ends 
int main() { 
    int arr[] = {2, 4, 6, 8, 10, 12, 15, 16};
    int size = sizeof(arr)/sizeof(int);
    int element = 16;
    int searchIndex = binarySearch(arr, size, element);
    cout << "Element " << element << " found at index: " << searchIndex << endl;
    if (searchIndex == -1){
        cout << "Error: Element not found" << endl;
    }
    return 0;

}