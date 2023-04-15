#include<iostream>
double robot(int lns);
double changun(int lns);
void estimate_test(int lines, double(*pf)(int));
int main() {
	int code = 0;
	std::cout << "필요한 코드의 행 수를 입력하십시오 : ";
	std::cin >> code;
	std::cout << "robot의 시간 예상 : ";
	estimate_test(code, robot);
	std::cout << std::endl;
	std::cout << "changun의 시간 예상 : ";
	estimate_test(code, changun);
	return 0;
}

double robot(int lns){
	return 0.05 * lns;
}

double changun(int lns)
{
	return 0.03*lns;
}

void estimate_test(int lines, double(*pf)(int)){
	std::cout << lines << "행을 작성하는데 걸리는 시간은 : ";
	std::cout << pf(lines) << " hour 걸립니다." << std::endl;
}
