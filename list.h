#include "activity.h"
class list
{
	public:
		list();
		~list();
		void read_in_array();
		void display_all_array();
		void display_match(char test_name[]);
	private:
		activity * pointer;
		int num;	//the number of items in the array so far
		int LIST_SIZE;	//the size of the array once it is allocated
};

