#include <iostream>
#include <vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]) {
  int i = 0; //first index of arr1
  int j = 0; //first index of arr2
  while(i<n && j<m){
    if(arr1[i] < arr2[j]){
      arr3[]
    }
  }
}


int main() {


  int arr1[5] = {1,3,5,7,9};
  int arr2[4] = {2,4,6,8};
  
  int arr3[9] = {0};

  merge(arr1, 5, arr2, 4, arr3 ); //arr1 ,array size. 
  print(arr3,9);

  return 0;
  
}
