#include <cstdio>

int main(){
	auto original{100};
	auto& originalRef = original;
	printf("Original: %d\n", original);
	printf("Original Ref: %d\n", originalRef);

	auto newValue{200};
	originalRef = newValue;
	printf("Original: %d\n", original);
	printf("New Value: %d\n", newValue);
	printf("Original Ref: %d\n", originalRef);
}
