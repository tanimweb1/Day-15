// Sum of even numbers

#include<stdio.h>
int main(){

int n;
scanf("%d", &n);
int sum =0 ;
for(int i = 2; i<=n;i  = i+2){

    sum = sum+i;
    
}

printf("Sum is %d\n", sum);



    return 0;
}






// Sum of Odd numbers

#include<stdio.h>
int main(){

int n;
scanf("%d", &n);
int sum =0 ;
for(int i = 1; i<=n;i  = i+2){

    sum = sum+i;
    
}

printf("Sum is %d\n", sum);



    return 0;
}











// Product of Even numbers

#include<stdio.h>
int main(){

int n;
scanf("%d", &n);
int product =1 ;
for(int i = 2; i<=n;i  = i+2){

    product = product*i;
    
}

printf("Product is %d\n", product);



    return 0;
}










// product of odd numbers

#include<stdio.h>
int main(){

int n;
scanf("%d", &n);
int product =1 ;
for(int i = 1; i<=n;i  = i+2){

    product = product*i;
    
}

printf("Product is %d\n", product);



    return 0;
}




// SUM of Numbers

#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int sum =0;

for (int i = 1; i<=n; i++){


    sum = sum + i;
}
 printf("%d", sum);


    return 0;
}