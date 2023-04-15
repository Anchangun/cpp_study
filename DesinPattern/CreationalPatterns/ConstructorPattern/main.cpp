#include "Robot.hpp"

int main() {
	Robot turtlebot("turtlebot", 30, 20, 10, 50);
	turtlebot.fn_print_all();

	Robot wavembot("wavembot", 80, 50, 10);
	wavembot.fn_print_all();

	Robot changunbot("changunbot", 50, 20);
	changunbot.fn_print_all();

	return 0;
}