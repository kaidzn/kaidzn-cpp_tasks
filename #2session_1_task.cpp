#include <iostream>
using namespace std;
int main()
{
    int a[50][50], n, m, even[50];
    cout << "Enter size of array : ";
     cin >> n >> m ;
     for(int i = 0 ; i < n ; i++){
         for(int j = 0 ; j < m ; j++){
           cin >> a[i][j];
     }
     }
     for(int i = 0 ; i < n ; i++){
       for(int j = 0; j < n; j++){
       cout << a[i][j]<<" ";
       }
       cout << endl;
     }
     int sum = 0;
     for(int i = 0 ; i < n ; i++){
         even[i] = a[i][0];
         for(int j = 0 ; j < m ; j++){
             if(a[i][j]%2 == 0){
                even[i] = a[i][j];
                sum+=even[i];
               
              }
               
          }
          
           cout << i + 1 <<"-row sum is "<< sum << endl;
           sum = 0;
      }

    
}
