//use number 10 for a good pattern
#include<bits/stdc++.h>

using namespace std; 

void pattern(int n){

   if(n % 2 != 0){
    cout << "Enter an even number";
    return;}
    else {
  for(int i=0; i<n/2; i++){
  for(int j=0;j<(n/2)-i;j++){
    cout<<"* ";
    }
      for(int j=0; j<i;j++){
      cout<<"  ";
   }
    for(int j=0; j<i;j++){
      cout<<"  ";
   }
  for(int j=0;j<(n/2)-i;j++){
    cout<<"* ";
    }
   cout<<endl;
  }
  for(int i=1; i<n/2; i++){
     for(int j=0;j<i+1;j++){
        cout<<"* ";
      }
      for(int j=0; j<(n/2)-i-1;j++){
      cout<<"  ";
   }
    for(int j=0; j<(n/2)-i-1;j++){
      cout<<"  ";
   }
  for(int j=0;j<i+1;j++){
    cout<<"* ";
    }
   cout<<endl;
  }
}
}

int main(){
  int n;

  cout<<"enter your numeber: "<<endl;

  cin>>n;

  pattern(n);

  return 0; 
}
