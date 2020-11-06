#include "list.h"

list::list()
{
	pointer = new activity[10];
	num = 0;			//the number of items in the array so far
	LIST_SIZE = 0;		//the size of the array once it is allocated
}

list::~list()
{
	if(pointer)
	{
		delete [] pointer;
	}
	else
	{
		pointer = NULL;
	}
}

void list::read_in_array()
{
	if(!pointer)
	{
		pointer[0].read_in();
		pointer[0].display();
		++num;
		return;
	}
	if(pointer && num < 10)
	{
		pointer[num].read_in();
		pointer[num].display();
		++num;
		return;
	}
}

void list::display_all_array()
{
	int counter = 0;
	if(pointer)
	{
		while(counter < num)
		{
			pointer[counter].display();
			++counter;
		}
	}
	return;				
}

void list::display_match(char test_name[])
{
	int counter = 0;

	while(pointer[counter].compare_subject(test_name)==0  && counter < 10)
	{
		++counter;
	}

	pointer[counter].display();

	return;	
}
