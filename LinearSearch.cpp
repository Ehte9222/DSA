#include <iostream>
using namespace std;
int linearsearch(int arr[], int size, int element) {
  for (int i =0; i < size; i++){
    if (arr[i] == element){
        return i;
    }
  }  return -1;
}
int main() { 
    int arr[] = {2, 4, 6, 8, 10, 12, 15, 16};
    int size = sizeof(arr)/sizeof(int);
    int element = 10;
    int searchIndex = linearsearch(arr, size, element);
    cout << "Element " << element << " found at index: " << searchIndex << endl;
    if (searchIndex == -1){
        cout << "Error: Element not found" << endl;
    }
    return 0;

}