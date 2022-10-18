#include <iostream>

using namespace std;

int main() 
{
    int n;
    int i,j;
    cin>>n;
    int b=(n*2)-1;
  	for( i=0;i<b;i++){
          for( j=0;j<b;j++){
            int a= i < j ? i : j;
            a = a < b-i ? a : b-i-1;
            a = a < b-j-1 ? a : b-j-1;
            cout<<n-a<<" "; 
          }
          cout<<"\n";
      }
    return 0;
}

