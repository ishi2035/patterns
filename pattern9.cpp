/*
 E         E 
  D       D
   C     C
    B   B
      A
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char k=65+n-1;

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
    cout<<"A"<<endl;

        
}
