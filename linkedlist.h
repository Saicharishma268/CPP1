#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include<iostream>
#include<algorithm>
using namespace std;

struct node
{
	int data;
	node*next;
	node(int val)
	{
		data=val;
		next=nullptr;
	}
};
struct linkedlist{
	node*head=nullptr;
	node*temp=nullptr;
	
	void insert(int val)
	{
		node*newnode=new node(val);
		if(head==nullptr)
		{
			head=newnode;
			temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		
	}
	void display()
	{
		node*current=head;
		while(current!=nullptr)
		{
			cout<<current->data<<" ";
			current=current->next;
		}
	}
		 
};
