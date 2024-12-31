#include<iostream> 
using namespace std; 

inline int kali(int i, int j) 
{ 
  return(i * j); 
} 

int main()
{ 
  int k; 
  
  for(k = 1; k < 20; k++) 
  {
	cout<<kali(k, k*2)<<" ";   	
  }
 
  getchar(); 
}
