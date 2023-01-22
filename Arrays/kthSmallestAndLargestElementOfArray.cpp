#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> kthSmallLarge(vector<int> &arr, int n, int k){
    sort(arr.begin(),arr.end());
    vector<int> ans;
    ans.push_back(arr[k-1]);
    ans.push_back(arr[n-k]);    
    return ans;
}

int main(){
int n;
int k;
cin>>n>>k;

vector <int> arr;

for(int i = 0;i<n;i++){
    int temp;
    cin>>temp;
    arr.push_back(temp);
}

vector<int> ans = kthSmallLarge(arr,n,k);

for(auto element:ans){
    cout<<element<<" ";
}


}