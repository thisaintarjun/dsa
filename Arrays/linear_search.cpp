#include<iostream>
using namespace std;

void linear_search(int arr[], int num, int n){
  int flag=0;
  for(int i=0; i<n;i++){
    if(arr[i]==num){
      cout<<"number found at index: "<< i;
      flag=1;
    }
  }
  if(flag==0){
    cout<<"not found";
    }
}

int main(){
  int n;
  cin>>n;

  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  int num;
  cin>>num;

linear_search(arr, num, n);

return 0;
}
