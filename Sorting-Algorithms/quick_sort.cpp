#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int n, int low, int high){
int pivot=arr[low];
int i=low;
int j=high;
while(i<j){
  while(arr[i]<=pivot && i<=high-1){
    i++;
  }  while(arr[j]>pivot && j>=low+1){
    j--;
  }
  if(i<j) swap(arr[i], arr[j]);
}
swap(arr[low], arr[j]);
return j;
}



void quick_sort(int arr[], int n, int low, int high){
  if(low<high){
    int pindex=partition(arr, n, low, high);
    quick_sort(arr, n,low, pindex-1);
    quick_sort(arr, n,pindex+1,high);
  }
}



int main(){
  int n;  
  cin>>n;
  int arr[n];
  for(int i=0; i<n;i++){
    cin>>arr[i];
  }
  int low=0; 
  int high=n-1;
  quick_sort(arr, n, low, high);
  for(int i=0; i<n;i++){
    cout<<arr[i];
  }
}
