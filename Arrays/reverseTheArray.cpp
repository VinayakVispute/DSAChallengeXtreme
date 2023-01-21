#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr, int m) {
  int size = arr.size();

  for (int i = m + 1; i < m + (size - m + 1) / 2; i++) {
    arr[size - (i - (m + 1)) - 1] = arr[i] - arr[size - (i - (m + 1)) - 1] +
                                    (arr[i] = arr[size - (i - (m + 1)) - 1]);
  }
}

int main() {
  vector<int> arr;
  int n, m;
  cin >> n;
  cin >> m;
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    arr.push_back(temp);
  }

  reverseArray(arr, m);
  cout << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}