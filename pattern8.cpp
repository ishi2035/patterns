/*
      1
    2   2
   3     3
  4       4
 5         5
 4         4
  3       3
   2     2
    1   1
      1

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=2;
    for(int i=0;i<=n;i++){
        cout<<" ";
    }
    cout<<"1"<<endl;
    for(int i=1;i<n;i++){
       for(int j=n-i;j>0;j--){
           cout<<" ";
       }
       cout<<k<<" ";
       for(int j=2*i;j>0;j--){
           cout<<" ";
       }
       cout<<k<<" ";
       k++;
       cout<<endl;

    }

     k=4;
    for(int i=n-1; i>0;i--){

      for(int j=n-i;j>0;j--){
           cout<<" ";
       }
       cout<<k<<" ";
       for(int j=2*i;j>0;j--){
           cout<<" ";
       }
       cout<<k<<" ";
       k--;
       cout<<endl;
    }


    for(int i=0;i<=n;i++){
        cout<<" ";
    }
    cout<<"1"<<endl;

        
}
