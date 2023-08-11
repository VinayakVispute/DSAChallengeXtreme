#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> separateNegativeAndPositive(vector<int> &arr) {
  int size = arr.size();
  int high = 0;
  for (int low = 0; low < size; low++) {
    if (arr[low] < 0) {
        int temp = arr[low];
        arr[low]= arr[high];
        arr[high++]=temp;
      
    }
  }
  return arr;
}

int main() {

    vector<int> arr={1,-4,-2,5,3};

    separateNegativeAndPositive(arr);
    for(auto element : arr){
        cout<<element<<" ";
    }
}