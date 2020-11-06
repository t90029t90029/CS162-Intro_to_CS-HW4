#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

class activity
{
	public:
		activity();
		void read_in();
		void display();
		bool compare_subject(char to_compare[]);
	
	private:
		char name[16];
		char place[11];
		char time[16];
		char descript[131];	//description
		char thought[201];
		char need[31];		//supplies needed
		char certain[16];	//only available for certain dates
};
