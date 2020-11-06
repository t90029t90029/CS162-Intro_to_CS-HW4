#include "list.h"

int main()
{
	list my_list;

	int answer = 0;
	char test_name[16];

	cout<<"What do you want to do? Type 1 to add new item to the list, 2 to search a certain activity and display it,"
        <<" 3 to display all activities, and 4 to quit."<<endl;
        cin>>answer;
        cin.ignore(100,'\n');

	while(answer != 4)
	{
		if(answer == 1)
		{
			my_list.read_in_array();
		}
	
		if(answer == 2)
		{
			cout<<"Please enter a name to search a certain activity and display it."<<endl;
			cin.get(test_name,'\n');
			cin.ignore(100,'\n');
			
			my_list.display_match(test_name);
		}

		if(answer == 3)
		{
			my_list.display_all_array();
		}
		
		cout<<"Do you want to continue on using this program? If no, enter 4."<<endl;
		cout<<"Otherwise, Type 1 to add new item to the list, 2 to search a certain activity and display it,"
                <<" and 3 to display all activities."<<endl;
		cin>>answer;
                cin.ignore(100,'\n');
	}

	return 0;
}
