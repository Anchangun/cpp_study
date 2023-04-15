#include<iostream>
double robot(int lns);
double changun(int lns);
void estimate_test(int lines, double(*pf)(int));
int main() {
	int code = 0;
	std::cout << "�ʿ��� �ڵ��� �� ���� �Է��Ͻʽÿ� : ";
	std::cin >> code;
	std::cout << "robot�� �ð� ���� : ";
	estimate_test(code, robot);
	std::cout << std::endl;
	std::cout << "changun�� �ð� ���� : ";
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
	std::cout << lines << "���� �ۼ��ϴµ� �ɸ��� �ð��� : ";
	std::cout << pf(lines) << " hour �ɸ��ϴ�." << std::endl;
}
