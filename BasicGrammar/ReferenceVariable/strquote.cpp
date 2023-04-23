#include<iostream>
#include<string> // getline
std::string version1(const std::string& s1, const std::string& s2);

const std::string version2(std::string& s1, const std::string& s2);

const std::string version3(std::string& s1, const std::string& s2);

void version4(std::string& s1);

int main() {
	std::string input;
	std::string copy;
	std::string result;

	getline(std::cin, input);
	copy = input;
	std::cout << "input string : " << input << '\n';
	result = version1(input, "***");
	std::cout << "trans stirng : " << result << '\n';
	std::cout << "origin string : " << input << '\n';

	result = version2(input, "###"); //dangerous - return & , result std::string
	std::cout << "trans stirng : " << result << '\n';
	std::cout << "origin string : " << input << '\n';

	std::cout << "reset" << '\n';
	input = copy;
	result = version3(input, "!!!");
	std::cout << "trans stirng : " << result << '\n';
	std::cout << "origin string : " << input << '\n';

	std::string& test= input;
	std::cout << "trans stirng : " << test << '\n';
	std::cout << "origin string : " << copy << '\n';

	return 0;
}

std::string version1(const std::string& s1, const std::string& s2)
{
	std::string temp;
	temp = s2 + s1 + s2;
	return temp;
}

const std::string version2(std::string& s1, const std::string& s2){
	s1 = s2 + s1 + s2;
	return s1;// local variable
}

const std::string version3(std::string& s1, const std::string& s2){
	std::string temp;
	temp = s2 + s1 + s2;
	return temp;
}

void version4(std::string& s1){
	s1 += "#####";
}



