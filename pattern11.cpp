/*
1           7 
1 2       6 7
1 2 3   5 6 7
1 2 3 4 5 6 7
1 2 3   5 6 7
1 2       6 7 
1           7
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
  
    for(int i=1; i<=(n/2)+1;i++){
      for(int j=1;j<=i;j++){
           cout<<j<<" ";
           k=j;
       }
 
       for(int j=n-(2*i);j>0;j--){
           cout<<"  ";
       }
       for(int j=n-i+1;j<=n;j++){
           if(j==k)continue;
           cout<<j<<" ";
       }
       cout<<endl;
    }
  
for(int i=(n/2); i>0;i--){
      for(int j=1;j<=i;j++){
           cout<<j<<" ";
           k=j;
       }
 
       for(int j=n-(2*i);j>0;j--){
           cout<<"  ";
       }
       for(int j=n-i+1;j<=n;j++){
           if(j==k)continue;
           cout<<j<<" ";
       }
       cout<<endl;
    }




        
}
