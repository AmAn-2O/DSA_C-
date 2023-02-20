#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    int j = i;
    // while(j>0&&arr[j-1]>arr[j])
    while (arr[j] > arr[j + 1]) {
      int temp = arr[j + 1];
      arr[j + 1] = arr[j];
      arr[j] = temp;
      j--;
    }
  }
}
void bubble_sort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j <= n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
      }
    }
  }
}
void bubble_sort_optimizedver(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int swap = 0;
    for (int j = 0; j <= n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
        swap = 1;
      }
    }
    if (swap == 0) {
      break;
    }
  }
}
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
  bubble_sort(arr, n);
  bubble_sort_optimizedver(arr, n);
  cout << "Sorting According to Selection Sort:";
  cout << "Sorting According to Bubble Sort:";
  insertion_sort(arr, n);
  cout << "Sorting According to Insertion Sort:";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
