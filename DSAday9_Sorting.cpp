#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n) {
  for (int i = 0; i < n - 2; i++) {
    int min = i;
    for (int j = i; j < n - 1; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }
    int temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
  }
}
int main() {
  wap to find the smallest among all the elements of the array !int temp, n;
  cout << "Length of array:";
  cin >> n;
  int arr[n];
  cout << "Enter the elements of array:";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++) {
    if (arr[i] < arr[i + 1]) {
      temp = arr[i];
      break;
    }
  }
  cout << "smallest no. " << temp;

  int n;
  cout << "Length of array:";
  cin >> n;
  int arr[n];
  cout << "Enter the elements of array:";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  selection_sort(arr, n);
  cout << "Sorting According to Selection Sort:";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}