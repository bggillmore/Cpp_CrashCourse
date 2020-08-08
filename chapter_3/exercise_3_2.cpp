#include <cstdio>


char* read_from(char* arr, size_t size, size_t position){
	char* elementPtr;
	for(size_t i{}; i < size; i++){
		if(i == position){
			elementPtr = &arr[i];
			return elementPtr;
		}
	}
	return nullptr;
}

bool write_to(char* arr, size_t size, char newVal, size_t position){
	for(size_t i{}; i < size; i++){
		if(i == position){
			arr[i] = newVal;
			return true;
		}
	}
	return false;
}

int main(){
	char lower[] = "abc?e";
	char upper[] = "ABC?E";
	char* upper_ptr = upper;
	
	//print starting arrays
	printf("lower: %s\nupper: %s\n", lower, upper);
	
	//replace third element of lower array
	if(write_to(lower, sizeof(lower)/sizeof(lower[0]), 'd', 3) == true){
		printf("success\n");
	}
	else{
		printf("fail, out of bounds\n");
	}

	//print new third digit
	printf("lower[3]: %c\nupper[3]: %c\n", 
		*(read_from(lower, sizeof(lower)/sizeof(lower[0]), 3)),  
		*(read_from(upper, sizeof(upper)/sizeof(upper[0]), 3))
		);
	
	//replace third element of upper array
	if(write_to(upper, sizeof(upper)/sizeof(upper[0]), 'D', 3) == true){
		printf("success\n");
	}
	else{
		printf("fail, out of bounds\n");
	}

	//print new third digit
	printf("lower[3]: %c\nupper[3]: %c\n", 
		*(read_from(lower, sizeof(lower)/sizeof(lower[0]), 3)),  
		*(read_from(upper, sizeof(upper)/sizeof(upper[0]), 3))
		);
	
	//print final arrays
	printf("lower: %s\nupper: %s\n", lower, upper);
}
