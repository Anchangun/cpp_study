#include<iostream>
#include<chrono>
#include<Windows.h>

long long calculateTimeDifference(const std::chrono::system_clock::time_point& startTime, const std::chrono::system_clock::time_point& endTime) {
	auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime);
	return duration.count();
}
int main() {
	std::chrono::system_clock::time_point old_time = std::chrono::system_clock::now();
	//std::cout <<  << '\n';
	Sleep(20);
	std::chrono::system_clock::time_point cur_time = std::chrono::system_clock::now();
	long long timeDifference = calculateTimeDifference(old_time, cur_time);
	std::cout << "Time difference: " << timeDifference << " milliseconds" << std::endl;

	return 0;
}