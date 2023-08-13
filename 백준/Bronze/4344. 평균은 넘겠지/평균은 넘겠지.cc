#include <iostream>

using namespace std;

int main(void)
{
	int C, N;
	cin >> C;
	float* Student_Per = new float[C];

	for (int i = 0; i < C; i++) {
		cin >> N;
		int* Student_Score = new int[N];
		
		float sum = 0.0f, num = 0.0f;
		float Average, result;

		for (int j = 0; j < N; j++) {
			cin >> Student_Score[j];
			sum += Student_Score[j];
		}

		Average = ((float)sum / N);

		for (int j = 0; j < N; j++) 
			if (Student_Score[j] > Average)
				num += 1;

		Student_Per[i] = (num / N) * 100;
		
		delete[] Student_Score;
	}

	for (int i = 0; i < C; i++)
	{
		cout.precision(5);
		cout.setf(ios::showpoint);
		cout << Student_Per[i] << "%" << endl;
	}
}