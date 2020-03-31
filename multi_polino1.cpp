// POLINOMIAL MULTIPLICATION
#include<iostream>
using namespace std;
int *multiply(int A[],int B[],int n){ 
   int *prod = new int[(n*2)-1]; 	
   for (int i = 0; i<(n*2)-1; i++) 
     prod[i] = 0;  
   for (int i=0; i<n; i++){ 
     for (int j=0; j<n; j++) 
         prod[i+j] += A[i]*B[j]; 
   } 
   return prod; 
}  
void printPoly(int poly[],int n){ 
    for (auto i=0;i<n;i++){ 
       cout<<poly[i]; 
       if (i != 0) 
        cout << "x^" << i ; 
       if (i != n-1) 
       cout << " + "; 
    }
   cout<<endl; 
}  
int main(){  
    int A[] = {3,2,5};  
    int B[] = {5,1,2};  
    int n = sizeof(B)/sizeof(B[0]); 
    cout<<"First polynomial is \n"; 
    printPoly(A, m); 
    cout<<"Second polynomial is \n"; 
    printPoly(B, n); 
    int *prod = multiply(A, B, n);  
    cout <<"Product polynomial is \n"; 
    printPoly(prod, (n*2)-1); 
  
} 
