#include <cstdio>

int sum(int x, int y){
	return x + y;
}

int main(){
	int num1 = 5;
	int num2 = -2;

	printf("The sum of %d and %d is %d\n", num1, num2, sum(num1, num2));
}
