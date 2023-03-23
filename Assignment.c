1) 
 #include<stdio.h> 
 int main(){ 
     int arr[]={6,12,18,24}; 
     int x=0; 
     x=arr[1]+(arr[1]=2); 
     printf("%d",x); 
     return 0; 
 } 
  
 //Output : 14 
  
 2) 
 #include<stdio.h> 
  
 void main(){ 
     int i=3,val; 
     val=sizeof f(i)+ +f(i=1)+ +f(i-1); 
     printf("%d %d",val,i); 
 } 
 int f(int num){ 
     return num*5; 
 } 
  
 //Output : 9 1 
  
 3) 
 #include<stdio.h> 
  
 float avg(float,float,float); 
 void main(){ 
     float p=1,q=2,r=-2,a; 
     a=avg(p,(q=4,r=-12,q),r); 
     printf("%f",a);   
 } 
 float avg(float x,float y,float z){ 
     return (x+y+z)/3; 
 } 
 // Output : -2.333333 
  
 4) 
 void main() 
 { 
 int const * p=5; 
 printf("%d",++(*p)); 
 } 
  
 //Output : p is a constant so it creates an error. 
  
 5) 
 main() 
 { 
 int c[ ]={2.8,3.4,4,6.7,5}; 
 int j,*p=c,*q=c; 
 for(j=0;j<5;j++) { 
 printf(" %d ",*c); 
 ++q; } 
 for(j=0;j<5;j++){ 
 printf(" %d ",*p); 
 ++p; } 
 } 
 // Output : 2  2  2  2  2  2  3  4  6  5  
  
 6) 
 main() 
 { 
 char string[]="Hello World"; 
 display(string); 
 } 
 void display(char *string) 
 { 
 printf("%s",string); 
 } 
 // Output : Hello World 
  
 7) 
   #include <stdio.h> 
  
 void main(){ 
         int n,i,j,k; 
         printf("Enter n:"); 
         scanf("%d",&n); 
         for (i = 1; i <= n; i++){ 
                 for (k = 0; k <n-i;k++){ 
                                 printf(" "); 
                         } 
                 for (j = 1; j<=i; j++){ 
                         printf("%d",j); 
                 } 
                 printf("\n"); 
         } 
 } 
  
 //Input : Enter n : 5 
 //Output :  
     1 
    12 
   123 
  1234 
 12345 
  
 8) 
 #include <stdio.h> 
  
 void main(){         
         int i, first = -1; 
     int arr[] = { 1, 2, 3, 6, 2 }; 
     int n = sizeof(arr) / sizeof(int); 
     int x = 6; 
     for (i = 0; i < n; i++) { 
         if (x != arr[i]){ 
             continue; 
             } 
         if (x == arr[i]){ 
                 first = i; 
                 break; 
             }         
     } 
     printf("%d",first); 
 } 
  
 //Output : 3 
  
 9) 
 #include "string.h" 
 typedef struct stu1{ 
     char name1[6]; 
     char name2[6]; 
     double marks; 
 }STU1; 
 void main(){ 
     STU1 s1={"rohit","kumar",87.43},*p1; 
     char *p; 
     p1=&s1; 
     p=memchr(p1,'u',sizeof(STU1)); 
     printf("%s",p);   
 } 
  
 //Output : umar 
  
 10) 
 #define square(x) x*x 
 main() 
 { 
 int i; 
 i = 64/square(4); 
 printf("%d",i); 
 } 
  
  
 //Output : 64 
                
                                  
                                  
                                 
