#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

//Normal Native Approach
// O(m*n)
pair<int, int> findSimilarity(vector<int> arr1, vector<int> arr2, int n,
                              int m) {
  int intersection = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr1[i] == arr2[j]) {
        intersection++;
      }
    }
  }
  int unionNo= (m + n - intersection);
  pair <int,int> ans;
  ans.first = intersection;
  ans.second = unionNo;
  return ans;
}

//Sets Approach 
//O(mlogm + nlogn)

pair<int, int> findSimilarity(vector<int> arr1, vector<int> arr2, int n,
                              int m) {

  set<int> s;
  for (int i = 0; i < n; i++) {
    s.insert(arr1[i]);
  }
  for (int i = 0; i < m; i++) {
    s.insert(arr2[i]);
  }

  int unionNo = s.size();
  int intersection = n+m-unionNo;
  pair<int,int> ans;
  ans.first = intersection;
  ans.second= unionNo;
  return ans;
}

int main() {

  vector<int> arr1;
  vector<int> arr2;
  int n, m;
  cin >> n >> m;
  cout << endl << "First : " << endl;
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    arr1.push_back(temp);
  }
  cout << endl << "Second : " << endl;

  for (int i = 0; i < m; i++) {
    int temp;
    cin >> temp;
    arr2.push_back(temp);
  }

 pair <int,int> ans= findSimilarity(arr1, arr2, n, m);

 cout<<endl<<ans.first<<" "<<ans.second;
}