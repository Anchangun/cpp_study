#include<iostream>
#include<string>
typedef struct free_throws {
	std::string name;
	int made;
	int attempts;
	float percent;
}FT;

void display(const free_throws& ft) {
	std::cout << "[name] : " << ft.name << '\n';
	std::cout << "[made] : " << ft.made << '\n';
	std::cout << "[attempts] : " << ft.attempts << '\n';
	std::cout << "[percent] : " << ft.percent << '\n';
}
void setting_pc(free_throws& ft) {
	if (ft.attempts != 0) {
		ft.percent = 100.0f * static_cast<float>(ft.made) / static_cast<float>(ft.attempts);
	}
	else {
		ft.percent = 0;
	}
}

FT& acc(FT& target, const FT& source) {
	target.attempts += source.attempts;
	target.made += source.made;
	setting_pc(target);
	return target;
}

int main() {
	// Partial Initialization
	FT a = { "a",10,20 };
	FT b = { "b",11,21 };
	FT c = { "c",12,22 };
	FT d = { "d",13,23 };
	FT e = { "e",14,24 };
	FT t = { "t",0,0 };
	// Not Initialization
	FT dumy;
	setting_pc(a);
	display(a);
	std::cout << '\n';
	acc(t, a);
	display(t);
	std::cout << '\n';
	// Return Value Parameters
	display(acc(t, b));
	std::cout << '\n';
	acc(acc(t, c), d);
	display(t);
	std::cout << '\n';
	// Use return value as substitution value
	dumy = acc(t, e);
	std::cout << "[team] : ";
	display(t);
	std::cout << '\n';
	std::cout << " [change_dumy] : ";
	display(dumy);
	std::cout << '\n';
	setting_pc(d);

	// Problem 
	acc(dumy, e) = d; // 
	std::cout << "[problem] : ";
	display(dumy);
	std::cout << '\n';
	return 0;
}