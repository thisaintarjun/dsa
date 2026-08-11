//we could sort the array and return the second last element of it
// or we could also do the below cause its time complexity is less as compared to the first approach
#include<iostream>
#include<climits>

using namespace std;


int second_largest(int arr[], int n){
  int largest=INT_MIN;
  int second_large=-1;

  for(int i=0; i<n;i++){
    if(arr[i]>largest){
      second_large=largest;
      largest=arr[i];
    }
    else if(arr[i]>second_large && arr[i]<largest){
      second_large=arr[i];
    }
  }

  return second_large;

}


int main(){
  int n;
  cin>>n;
  
  int arr[n];
   for(int i=0; i<n;i++){
    cin>>arr[i];
   }

   int sec=second_largest(arr, n);

   cout<<"The second largest number of this array is: "<<sec;

  return 0;
}