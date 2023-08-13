#include <iostream>
#include <math.h>
#include <cmath>
#include <algorithm>
#include <vector>

#define ABS_CALCULATOR(num) abs(((A * num) + (B * sin(num)) - C))

using namespace std;

constexpr long double PI = 3.141592653589793; // 15
long double x = 19.441787; // 19.441787
long double A, B, C;

bool Compare(long double x, long double y, long double absTolerance = (1.0e-8)) {
	long double diff = x - y;
	if (fabs(diff) <= absTolerance)
		return 0;

	return (diff > 0) ? true : false;
}

long double Fun(const long double& num, int version) {
	if (version == 0) {
		// cout << "\n Start Version 0 \n";
		long double i = 0;
		long double Prev, Now, Result;
		while (true) {
			Prev = ABS_CALCULATOR(i);
			i += 1.0;
			Now = ABS_CALCULATOR(i);
			if (Prev < Now) {
				vector<pair<long double, long double>> vec_Result_Return;
				long double temp = i - 2;
				for (int j = 0; j < 20; j++) {
					long double num = ABS_CALCULATOR(temp);
					// cout << "temp : " << temp << " :: " << num << "\n";
					vec_Result_Return.push_back({ num, temp });
					temp += 0.1;
				}
				sort(vec_Result_Return.begin(), vec_Result_Return.end());
				// cout << "==== vec ==== \n";
				// for (const pair<long double, long double>& iter : vec_Result_Return)
				// 	cout << iter.first << " " << iter.second << "\n";

				Result = vec_Result_Return[0].second;
				break;
			}
		}

		// cout << "version == 0 -> " << Result << "\n";
		return Result;
	}
	else if (version == 1){
		// cout << "\n Start Version 1 \n";
		long double i = num, Result;
		vector<pair<long double, long double>> vec_Result_Return;
		long double temp = i - 0.1;
		for (int j = 0; j < 20; j++) {
			long double num = ABS_CALCULATOR(temp);
			// cout << "temp : " << temp << " :: " << num << "\n";
			vec_Result_Return.push_back({ num, temp });
			temp += 0.01;
		}
		sort(vec_Result_Return.begin(), vec_Result_Return.end());
		// cout << "==== vec ==== \n";
		// for (const pair<long double, long double>& iter : vec_Result_Return)
		// 	cout << iter.first << " " << iter.second << "\n";

		Result = vec_Result_Return[0].second;

		// cout << "version == 1 -> " << Result << "\n";
		return Result;
	}
	else if (version == 2) {
		// cout << "\n Start Version 2 \n";
		long double i = num, Result;
		vector<pair<long double, long double>> vec_Result_Return;
		long double temp = i - 0.01;
		for (int j = 0; j < 20; j++) {
			long double num = ABS_CALCULATOR(temp);
			// cout << "temp : " << temp << " :: " << num << "\n";
			vec_Result_Return.push_back({ num, temp });
			temp += 0.001;
		}
		sort(vec_Result_Return.begin(), vec_Result_Return.end());
		// cout << "==== vec ==== \n";
		// for (const pair<long double, long double>& iter : vec_Result_Return)
		// 	cout << iter.first << " " << iter.second << "\n";

		Result = vec_Result_Return[0].second;

		// cout << "version == 1 -> " << Result << "\n";
		return Result;
	}
	else if (version == 3) {
		// cout << "\n Start Version 3 \n";
		long double i = num, Result;
		vector<pair<long double, long double>> vec_Result_Return;
		long double temp = i - 0.001;
		for (int j = 0; j < 20; j++) {
			long double num = ABS_CALCULATOR(temp);
			// cout << "temp : " << temp << " :: " << num << "\n";
			vec_Result_Return.push_back({ num, temp });
			temp += 0.0001;
		}
		sort(vec_Result_Return.begin(), vec_Result_Return.end());
		// cout << "==== vec ==== \n";
		// for (const pair<long double, long double>& iter : vec_Result_Return)
		// 	cout << iter.first << " " << iter.second << "\n";

		Result = vec_Result_Return[0].second;

		// cout << "version == 1 -> " << Result << "\n";
		return Result;
	}
	else if (version == 4) {
		// cout << "\n Start Version 4 \n";
		long double i = num, Result;
		vector<pair<long double, long double>> vec_Result_Return;
		long double temp = i - 0.0001;
		for (int j = 0; j < 20; j++) {
			long double num = ABS_CALCULATOR(temp);
			// cout << "temp : " << temp << " :: " << num << "\n";
			vec_Result_Return.push_back({ num, temp });
			temp += 0.00001;
		}
		sort(vec_Result_Return.begin(), vec_Result_Return.end());
		// cout << "==== vec ==== \n";
		// for (const pair<long double, long double>& iter : vec_Result_Return)
		// 	cout << iter.first << " " << iter.second << "\n";

		Result = vec_Result_Return[0].second;

		// cout << "version == 1 -> " << Result << "\n";
		return Result;
	}
	else if (version == 5) {
		// cout << "\n Start Version 5 \n";
		long double i = num, Result;
		vector<pair<long double, long double>> vec_Result_Return;
		long double temp = i - 0.00001;
		for (int j = 0; j < 20; j++) {
			long double num = ABS_CALCULATOR(temp);
			// cout << "temp : " << temp << " :: " << num << "\n";
			vec_Result_Return.push_back({ num, temp });
			temp += 0.000001;
		}
		sort(vec_Result_Return.begin(), vec_Result_Return.end());
		// cout << "==== vec ==== \n";
		// for (const pair<long double, long double>& iter : vec_Result_Return)
		// 	cout << iter.first << " " << iter.second << "\n";

		Result = vec_Result_Return[0].second;

		// cout << "version == 1 -> " << Result << "\n";
		return Result;
	}
	else if (version == 6) {
		// cout << "\n Start Version 6 \n";
		long double i = num, Result;
		vector<pair<long double, long double>> vec_Result_Return;
		long double temp = i - 0.000001;
		for (int j = 0; j < 20; j++) {
			long double num = ABS_CALCULATOR(temp);
			// cout << "temp : " << temp << " :: " << num << "\n";
			vec_Result_Return.push_back({ num, temp });
			temp += 0.0000001;
		}
		sort(vec_Result_Return.begin(), vec_Result_Return.end());
		// cout << "==== vec ==== \n";
		// for (const pair<long double, long double>& iter : vec_Result_Return)
		// 	cout << iter.first << " " << iter.second << "\n";

		Result = vec_Result_Return[0].second;

		// cout << "version == 1 -> " << Result << "\n";
		return Result;
	}
	else if (version == 7) {
		// cout << "\n Start Version 7 \n";
		long double i = num, Result;
		vector<pair<long double, long double>> vec_Result_Return;
		long double temp = i - 0.0000001;
		for (int j = 0; j < 20; j++) {
			long double num = ABS_CALCULATOR(temp);
			// cout << "temp : " << temp << " :: " << num << "\n";
			vec_Result_Return.push_back({ num, temp });
			temp += 0.00000001;
		}
		sort(vec_Result_Return.begin(), vec_Result_Return.end());
		// cout << "==== vec ==== \n";
		// for (const pair<long double, long double>& iter : vec_Result_Return)
		// 	cout << iter.first << " " << iter.second << "\n";

		Result = vec_Result_Return[0].second;

		// cout << "version == 1 -> " << Result << "\n";
		return Result;
	}
	else if (version == 8) {
		// cout << "\n Start Version 8 \n";
		long double i = num, Result;
		vector<pair<long double, long double>> vec_Result_Return;
		long double temp = i - 0.00000001;
		for (int j = 0; j < 20; j++) {
			long double num = ABS_CALCULATOR(temp);
			// cout << "temp : " << temp << " :: " << num << "\n";
			vec_Result_Return.push_back({ num, temp });
			temp += 0.000000001;
		}
		sort(vec_Result_Return.begin(), vec_Result_Return.end());
		// cout << "==== vec ==== \n";
		// for (const pair<long double, long double>& iter : vec_Result_Return)
		// 	cout << iter.first << " " << iter.second << "\n";

		Result = vec_Result_Return[0].second;

		// cout << "version == 1 -> " << Result << "\n";
		return Result;
	}
	else if (version == 9) {
		// cout << "\n Start Version 9 \n";
		long double i = num, Result;
		vector<pair<long double, long double>> vec_Result_Return;
		long double temp = i - 0.000000001;
		for (int j = 0; j < 20; j++) {
			long double num = ABS_CALCULATOR(temp);
			// cout << "temp : " << temp << " :: " << num << "\n";
			vec_Result_Return.push_back({ num, temp });
			temp += 0.0000000001;
		}
		sort(vec_Result_Return.begin(), vec_Result_Return.end());
		// cout << "==== vec ==== \n";
		// for (const pair<long double, long double>& iter : vec_Result_Return)
		// 	cout << iter.first << " " << iter.second << "\n";

		Result = vec_Result_Return[0].second;

		// cout << "version == 1 -> " << Result << "\n";
		return Result;
	}
	else if (version == 10) {
		// cout << "\n Start Version 10 \n";
		long double i = num, Result;
		vector<pair<long double, long double>> vec_Result_Return;
		long double temp = i - 0.0000000001;
		for (int j = 0; j < 20; j++) {
			long double num = ABS_CALCULATOR(temp);
			// cout << "temp : " << temp << " :: " << num << "\n";
			vec_Result_Return.push_back({ num, temp });
			temp += 0.00000000001;
		}
		sort(vec_Result_Return.begin(), vec_Result_Return.end());
		// cout << "==== vec ==== \n";
		// for (const pair<long double, long double>& iter : vec_Result_Return)
		// 	cout << iter.first << " " << iter.second << "\n";

		Result = vec_Result_Return[0].second;

		// cout << "version == 1 -> " << Result << "\n";
		return Result;
	}
	else if (version == 11) {
		// cout << "\n Start Version 11 \n";
		long double i = num, Result;
		vector<pair<long double, long double>> vec_Result_Return;
		long double temp = i - 0.00000000001;
		for (int j = 0; j < 20; j++) {
			long double num = ABS_CALCULATOR(temp);
			// cout << "temp : " << temp << " :: " << num << "\n";
			vec_Result_Return.push_back({ num, temp });
			temp += 0.000000000001;
		}
		sort(vec_Result_Return.begin(), vec_Result_Return.end());
		// cout << "==== vec ==== \n";
		// for (const pair<long double, long double>& iter : vec_Result_Return)
		// 	cout << iter.first << " " << iter.second << "\n";

		Result = vec_Result_Return[0].second;

		// cout << "version == 1 -> " << Result << "\n";
		return Result;
	}
	else if (version == 12) {
		// cout << "\n Start Version 12 \n";
		long double i = num, Result;
		vector<pair<long double, long double>> vec_Result_Return;
		long double temp = i - 0.000000000001;
		for (int j = 0; j < 20; j++) {
			long double num = ABS_CALCULATOR(temp);
			// cout << "temp : " << temp << " :: " << num << "\n";
			vec_Result_Return.push_back({ num, temp });
			temp += 0.0000000000001;
		}
		sort(vec_Result_Return.begin(), vec_Result_Return.end());
		// cout << "==== vec ==== \n";
		// for (const pair<long double, long double>& iter : vec_Result_Return)
		// 	cout << iter.first << " " << iter.second << "\n";

		Result = vec_Result_Return[0].second;

		// cout << "version == 1 -> " << Result << "\n";
	return Result;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed);

	cin >> A >> B >> C;

	// cout.precision(7);
	// cout << sin(x) << " = " << (C - (A * x)) / B << "\n";
	// cout << Compare(sin(x), (C - (A * x)) / B) << "\n";
	
	/*cout.precision(6);
	for (int i = 0; i < 80; i++) {
		cout << "sin((long double)i) : " << sin((long double)i) << "\n";
		cout << " i : " << i << " = " << ((A * i) + (B * sin((long double)i)) - C) << "\n";
	}*/

	cout.precision(15);
	long double Result = 0.0;
	for (int i = 0; i < 13; i++) {
		Result = Fun(Result, i);
	}
	
	cout << Result << "\n";

	return 0;
}