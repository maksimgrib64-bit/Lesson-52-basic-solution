#include "logic.h"


double calculate_avg_mark(int* group, int size) {
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += group[i];
	}
	return sum / size;
}
int get_best_group_index(double* avgs, int size) {
	int index = 0;
	for (int i = 1; i < size; i++)
	{
		if (avgs[index] < avgs[i]) {
			index = i;
		}
	}
	return index;
}

int get_best_group(int groups[DEFAULT_SIZE][DEFAULT_SIZE], int row, int column){
	double avgs[DEFAULT_SIZE]{};

	for (int i = 0; i <row ; i++)
	{
		avgs[i] = calculate_avg_mark(groups[i], column);
	}

	int index = get_best_group_index(avgs, row);


	return index + 1;  
}

 