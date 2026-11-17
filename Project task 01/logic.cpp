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

int get_best_group(int* group1, int* group2, int* group3, int size) {
	double avg1 = calculate_avg_mark(group1, size);
	double avg2 = calculate_avg_mark(group2, size);
	double avg3 = calculate_avg_mark(group3, size);

	double avgs[]{ avg1,avg2,avg3 };

	int index = get_best_group_index(avgs, 3);


	return index + 1;
}

