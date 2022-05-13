#include"Base.h"

#define MAX_num 1024

int main()
{
	float data[MAX_num];
	int i = 0;
	float temp;
	while(cin >> temp)
	{
		data[i++] = temp;
	}

	float average = 0.0, variance = 0.0;

	for(int j = 0; j < i; j++)
	{
		average += data[j];
	}
	average /= i;

	for(int j = 0; j < i; j++)
	{
		variance += (data[j] - average) * (data[j] - average) / i;
	}

	cout << " average = "  << average << "\n variance = " << variance << endl;
 
	system("spause");
	return 0;
}