#include "activity.h"


activity::activity()
{
	name[0] = '\0';
	place[0] = '\0';
	time[0] = '\0';
	descript[0] = '\0';	//description
	thought[0] = '\0';
	need[0] = '\0';		//supplies needed
	certain[0] = '\0';	//only available for certain dates
}

void activity::read_in()
{	
	cout<<"Please enter the name of the activity."<<endl;
	cin.get(name,16,'\n');
	cin.ignore(100,'\n');
	cout<<"Please enter the location of the activity."<<endl;
	cin.get(place,11,'\n');
	cin.ignore(100,'\n');
	cout<<"Please enter the time of year of the activity."<<endl;
	cin.get(time,16,'\n');
	cin.ignore(100,'\n');
	cout<<"Please enter the description of the activity."<<endl;
	cin.get(descript,131,'\n');
	cin.ignore(200,'\n');
	cout<<"Please enter your thought to the activity."<<endl;
	cin.get(thought,201,'\n');
	cin.ignore(200,'\n');
	cout<<"Please enter the supplies needed of the activity."<<endl;
	cin.get(need,31,'\n');
	cin.ignore(100,'\n');
	cout<<"Please enter the only available dates of the activity."<<endl;
	cin.get(certain,16,'\n');
	cin.ignore(100,'\n');

	return;
}

void activity::display()
{
	cout<<"Name : "<<name<<endl
	<<"Place : "<<place<<endl
	<<"Time : "<<time<<endl
	<<"Description : "<<descript<<endl
	<<"Thought : "<<thought<<endl
	<<"Supplies needed : "<<need<<endl
	<<"Only available dates : "<<certain<<endl;
	return;
}

bool activity::compare_subject(char to_compare[])
{
	if(strcmp(name,to_compare) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
