#include<stdio.h>

int fibonaci(int n){
	if(n ==0){
	return 0;
	} else if(n == 1){
	return 1;
	} else {
	return (fibonaci(n-1) + fibonaci(n-2));
	}
}

int fibonaci_iter(int n){
	int x0=0;
	int x1=1;

	for(int i=0; i<n;i++){
	int temp = x0 + x1;
	x0 = x1;
	x1 = temp;

	}return x0;
	
}




int main(){
	
	printf("FIBONACI REKURENCYJNIE\n");
	int a;
	printf("Podaj liczbe:");
	scanf("%d", &a);
	printf("Podano: %d \n", a);
	int fib = fibonaci(a);
	printf("Fibonaci z %d, wynosi %d\n",a,fib);
	
	printf("----------\n");
	int fib2 = fibonaci_iter(a);
	printf("Fibonaci iteracyjnie z %d, wynosi %d",a,fib2);
	
      return 0;
}

