#include<iostream>
template<typename T>
void show_array(T arr[], int n);

template<class T>
void show_array(T* arr[], int n);

typedef struct debts {
	char name[50];
	double amount;
}DEBTS;

int main() {
	int things[6] = { 13,31,103,301,310,130 };
	DEBTS mr_E[3] = {
		{"wolf", 2400.0 },
		{"fox",1300.0},
		{"dog",1800.0}
	};
	double* pd[3];
	for (int i = 0; i < 3; i++) {
		pd[i] = &mr_E[i].amount;
	}
	show_array(things, 6);
	show_array(pd, 3);

	return 0;
}

template<typename T>
void show_array(T arr[], int n) {
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';
}

template<class T>
void show_array(T* arr[],int n){
	for (int i = 0; i < n; i++) {
		std::cout << *arr[i] << ' ';
	}
	std::cout << '\n';

}