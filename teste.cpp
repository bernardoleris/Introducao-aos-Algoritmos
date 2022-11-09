#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int arr[] = {10,20,30,40,50,60,70};
  vector<int> vec (7);

  copy(arr, arr + 7, vec.begin());

  cout << "Copied Vector contains: ";
  for (int x: vec)
    cout << x << " ";

  return 0;
}