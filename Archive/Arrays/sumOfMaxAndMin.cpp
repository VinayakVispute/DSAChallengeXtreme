#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;

int sumOfMaxMin(int arr[], int n) {
  int max_element = INT_MIN;
  int min_element = INT_MAX;
  for (int i = 0; i < n; i++) {
    max_element = max(max_element, arr[i]);
    min_element = min(min_element, arr[i]);
  }
  return max_element + min_element;
}

int main() {
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << sumOfMaxMin(arr, n);
}