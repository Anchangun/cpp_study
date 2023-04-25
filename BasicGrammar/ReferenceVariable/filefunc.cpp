#include <iostream>
#include <fstream>
#include <cstdlib>

void file_it(std::ostream& os, double fo, const double fe[], int n);
const int LIMIT = 5;

int main() {
	std::ofstream fout;
	const char* fn = "ep-data.txt";
	fout.open(fn);
	if (!fout.is_open()) {
		exit(EXIT_FAILURE);
	}
	double objective;
	std::cout << "Enter the objective lens focal length in mm : " << '\n';
	std::cin >> objective;
	double eps[LIMIT];
	std::cout << "Enter the focal length of the branch alternative lens in mm" << '\n';
	for (int i = 0; i < LIMIT; i++) {
		std::cin >> eps[i];
	}
	file_it(fout, objective, eps, LIMIT);
	file_it(std::cout, objective, eps, LIMIT);
	std::cout << '\n';
	return 0;
}

void file_it(std::ostream& os, double fo, const double fe[], int n){
	std::ios_base::fmtflags initial;
	initial = os.setf(std::ios_base::fixed);
	os.precision(0);
	os << "an objective lens : " << fo << " mm\n";
	os.setf(std::ios::showpoint);
	os.precision(1);
	os.width(17);
	os << "Alternative lens focal length";
	os.width(15);
	os << " ! " << '\n';
	for (int i = 0; i < n; i++) {
		os.width(17);
		os << fe[i];
		os.width(15);
		os << int(fo / fe[i] + 0.5) << '\n';
	}
	os.setf(initial);
}
