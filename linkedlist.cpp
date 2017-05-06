#include <iostream>

struct node{
	int playload;
	node* next;
};

int main()
{
	node* head = nullptr;
	for(int i=0;i<10;i++){
		node* new_node = new node;
		new_node ->playload = i*10;
		new_node ->next  = head;
		head = new_node;
	}
	//output each node in the linked-list
	node* iterator = head;
	while(iterator){
		std::cout << iterator -> playload << std::endl;
		iterator = iterator->next;
	}
	return 0;
}