#include <iostream>
#include <algorithm>

using namespace std;

#include <bits/stdc++.h> 

//OLD APPROACH

void sort012(int arr[], int n)
{
   //   Write your code here
   int no1=0,no2=0,no0=0;
   for(int i =0 ; i<n;i++){
    if(arr[i] ==0){
        no0++;
    }else if(arr[i] ==  1){
        no1++;
    } else{
        no2++;
    }
   }

   for(int i = 0; i<n;i++){
    if(no0>0){
        arr[i] = 0;
        no0--;
    }
    else if(no0 == 0 && no1>0){
        arr[i] = 1;
        no1--;
    }
    else{
        arr[i] = 2;

no2--;
    }
   }
}
// 2 Pointer Approach
void sort012(int *arr, int n)
{
  int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    for (int i = j; i < n; i++) {
        if (arr[i] == 1) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

//3 Pointer Approach
void sort012(int arr[],int n){
    int temp,low = 0,mid = 0,high = n-1;


    while(mid<=high){
        if(arr[mid]==0){
            temp = arr[low];
            arr[low++] = arr[mid];
            arr[mid++]= temp;
            
        }else if(arr[mid]==1){
            mid++;

        } else{
            temp = arr[high];
            arr[high--] = arr[mid];
            arr[mid]= temp;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

sort012(arr,n);
for(int i = 0 ; i<n;i++)
{
    cout<<arr[i]<<" ";
}
}