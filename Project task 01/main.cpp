#include <iostream>
#include "logic.h"
using namespace std;

int main() {
	const int size = 5;

	int groups[DEFAULT_SIZE][DEFAULT_SIZE]{
	{7,8,9,10,10,},
	{8,8,9,10,10 },
	{7,8,6,10,10 }
	};
	int group_number = 3;
	int mark_number = 5;

	cout << "Best group --> "<< get_best_group(groups,group_number,mark_number) << endl;
	
	return 0;
}