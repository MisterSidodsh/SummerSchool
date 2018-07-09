#include <stdio.h>

#define  N  5

int main(){

int a[N][N];

 int i=1,j,k,p=N/2;
 for(k=1;k<=p;k++) // Make a cycle for each line
 {
 for (j=k-1;j<N-k+1;j++) a[k-1][j]=i++; // Cycle for the firs horizontal line  
 for (j=k;j<N-k+1;j++) a[j][N-k]=i++; // Cycle for the right  vertical line 
 for (j=N-k-1;j>=k-1;--j) a[N-k][j]=i++; // Cycle for the low horizontal line 
 for (j=N-k-1;j>=k;j--) a[j][k-1]=i++; // Cycle for the left vertical line
 }
 if (N%2==1) a[p][p]=N*N; /* Make sure that cental element will be equal
                             to central element */
 for(i=0;i<N;i++) // Print matrix on console 
  for(j=0;j<N;j++)
  {
   printf(" %4d ",a[i][j]);
   if(j==N-1) printf("\n");
  }   
}