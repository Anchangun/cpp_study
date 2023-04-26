#include <iostream>

template <typename T>
void swap(T& a, T& b);

typedef struct job {
	char name[40];
	double salary;
	int floor;
}JOB;

template<> 
void swap<JOB>(JOB& j1, JOB& j2);
void show(JOB& j);

int main() {
	std::cout.precision(2);
	std::cout.setf(std::ios::fixed, std::ios::floatfield);
	int i = 10, j = 20;
	std::cout << "i,j = " << i << " , " << j << '\n';
	swap(i, j);
	std::cout << "i,j = " << i << " , " << j << '\n';


	JOB sue = { "coffee",73000.60,7 };
	JOB sidney = { "star",78060.72,9 };
	show(sue);
	show(sidney);
	swap(sue, sidney);
	show(sue);
	show(sidney);
	return 0;
}


template<typename T>
void swap(T& a, T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template<>
void swap<JOB>(JOB& j1, JOB& j2){
	double t1;
	int t2;
	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;

	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}

void show(JOB& j){
	std::cout << j.name << ' ' << j.floor << ' ' << j.salary << '\n';
}
