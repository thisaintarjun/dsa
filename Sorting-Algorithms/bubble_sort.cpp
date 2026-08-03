#include<bits/stdc++.h>
using namespace std;

void  bubble_sort(int arr[], int n){
  for(int i=n-1;i>=0;i--){
    int didSwap=0;
   for(int j=0;j<=i-1;j++){
    if(arr[j+1]<arr[j]){
      int temp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=temp;
      didSwap=1;
    }
  }
  if(didSwap=0) break; 
  }
}
int main(){
  int n;
  cin>>n;

  int arr[n];

  for(int i=0; i<=n-1;i++){
    cin>>arr[i];
  }

  bubble_sort(arr,n);

  for(int i=0; i<=n-1;i++){
    cout<<arr[i];
  }
}