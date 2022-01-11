/*
        1 
      3 2 1
    5 4 3 2 1
  7 6 5 4 3 2 1 
9 8 7 6 5 4 3 2 1

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=1;
    
    for(int i=1;i<=n;i++){

        for(int j=n-i;j>0;j--)
            cout<<"  ";
        k=((2*i)-1);
        for(int j=1;j<=((2*i)-1);j++){
                cout<<k--<<" ";
        }
         cout<<endl;
    }

        
}
