#include <cstdio>

enum class Operation{
	Add,
	Subtract,
	Multiply,
	Divide
};

struct Calculator{
	Calculator(Operation op){
		operation = op;
	}
	
	void Calculate(int a, int b){
		switch(operation){
			case Operation::Add: {
				printf("%d + %d = %d\n", a, b, a+b);
				break;
			}
			case Operation::Subtract: {
				printf("%d - %d = %d\n", a, b, a-b);
				break;
			}
			case Operation::Multiply: {
				printf("%d * %d = %d\n", a, b, a*b);
				break;
			}
			case Operation::Divide: {
				double c = a/b;
				printf("%d / %d = %g\n", a, b, c);
				break;
			}
			default: {
				printf("Error: Unknown Operation");
				break;
			}

		}
	}

	private:
		Operation operation;
};

int main(){
	Calculator calc1{Operation::Add};
	calc1.Calculate(7, 1);

	Calculator calc2{Operation::Subtract};
	calc2.Calculate(7, 2);

	Calculator calc3{Operation::Multiply};
	calc3.Calculate(7, 3);

	Calculator calc4{Operation::Divide};
	calc4.Calculate(7, 4);

}
