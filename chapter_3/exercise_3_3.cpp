#include <cstdio>

struct Element{
	Element* next{};
	Element* prev{};

	void insert_after(Element* newElement){
		newElement -> next = next;
		newElement -> prev = this;
		next = newElement;
	}

	void insert_before(Element* newElement){
		newElement -> next = this;
		newElement -> prev = prev;
		this -> prev -> next = newElement;
		prev = newElement;
	}

	char prefix[2];
	short operatingNumber;
};

int main(){
	Element trooper1, trooper2, trooper3, trooper4;
	
	//define trooper1
	trooper1.prefix[0] = 'T';
	trooper1.prefix[1] = 'K';
	trooper1.operatingNumber = 421;
	
	//define trooper3
	trooper3.prefix[0] = 'L';
	trooper3.prefix[1] = 'S';
	trooper3.operatingNumber = 5;

	//insert tooper3 after tooper1
	trooper1.insert_after(&trooper3);

	//define trooper2
	trooper2.prefix[0] = 'F';
	trooper2.prefix[1] = 'N';
	trooper2.operatingNumber = 2187;

	//insert trooper2 before trooper3
	trooper3.insert_before(&trooper2);

	//define tooper4
	trooper4.prefix[0] = 'H';
	trooper4.prefix[1] = 'C';
	trooper4.operatingNumber = 757;
	
	//insert trooper4 after trooper3
	trooper3.insert_after(&trooper4);

	//traverse front to back
	for(Element *cursor = &trooper1; cursor; cursor = cursor -> next){
		printf("stormtrooper %c%c %d\n", 
			cursor -> prefix[0], 
			cursor -> prefix[1], 
			cursor -> operatingNumber);
	}
	
	printf("\n\n\n");

	//traverse back to front
	for(Element *cursor = &trooper4; cursor; cursor = cursor -> prev){
		printf("stormtrooper %c%c %d\n", 
			cursor -> prefix[0], 
			cursor -> prefix[1], 
			cursor -> operatingNumber);
	}
}
