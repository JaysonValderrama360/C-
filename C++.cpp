#include <iostream>
  6 #include <cstdlib>
  7 #include <cstime>
  8 
  9 using namespace std;
 10      int main ()  {
 11         int n=1;
 12         double sum=0;
 13             while (n<=500) {
 14                 if (n%2==0) {
 15                        x= sum += sqrt(n); 
 16                    n= n+1;
 17                 }
 18                  else n = n+1;
 19              
 20                  int p;
 21                  srand (time(0));
 22          for (int r=1; r <= 10; r++){
 23          for (int c=1; c <= 20; c++){
 24                  if (n%2==1){
 25               cout << rand()%100;
 26               cout << "\t";}
 27         }
 28       
 29       }
 30      
 31      
 32      return 0;
 33    } 3