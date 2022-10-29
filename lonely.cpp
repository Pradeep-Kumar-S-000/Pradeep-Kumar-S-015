#include<iostream>
using namespace std;
int findUnique(int *arr, int n) {
    
  
    if( n == 1){
return arr[0];
    }
  
  for( int i = 0; i < n; i++){
      
       if(arr[i] == ' '){
          continue;
          
      }
      
      int uniquenum = arr[i];
      int count = 0;
      
     
      
      for(int j = i + 1; j < n; j++){
          
          
         
      if( uniquenum == arr[j] ){
          arr[j] = ' ';
         
         break;
      }
      
      else{
          
          count++;
      }
      }
          if (count == (n-i-1)){
          
          return uniquenum;
      }
      
      
  }
}
  
          
      
      int main()
      {
        int a[7]={-1,2,4,3,2,4,3};
        int c=findUnique(a,7);
        cout << c << endl;
      }