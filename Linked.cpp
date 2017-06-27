//****************************************
//
//     Author:K M YerriSwamy
//     Data Structure Linked List
//
//****************************************
#include <iostream>
using namespace std;

 struct id
 {
 	int num;
 	struct id* next;
 };
 
 typedef struct id node;
 void create(node* list);
 void print(node * list);
 int count(node* list);
 int main(int argc, char const *argv[]) {
 
 	node *head = (node *)malloc(sizeof(node));

 	create(head);
 	cout<<"Linked List Is:";
 	print(head);
 	count(head);
 	std::cout<<count(head)<<endl;
 	std::cin.ignore(); 
 	cout<<"Press Enter Key to exit"<<endl;
 	std::cin.get();
    return 0;
}


void create(node* list){

   cout<<"Input a number"<<endl;
   cin>>list->num;
   if(list->num==-999){
   	list->next=NULL;
   }
   else{     
   list->next=(node*)malloc(sizeof(node));
   create(list->next); // recursion for the creation next node of list
   }

}

void print(node *list){
     
	if (list->next!=NULL)
	{

		cout<<list->num<<"-->";
		if(list->next->next==NULL)
			cout<<list->next->num<<endl;
		print(list->next);
	}
	else{
		cout<<"Empty Lists"<<endl;
	}
	return;
}

int count(node* list){
	int count=0;
	while(list->next!=NULL){
		count++;
		list=list->next;
	}
	return count;
}