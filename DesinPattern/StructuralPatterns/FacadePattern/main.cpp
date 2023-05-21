#include"HomeFacade.hpp"
#include<memory>
int main() {
	std::unique_ptr<HomeFacade> home_ = std::make_unique<HomeFacade>();
	int num = 1;
	home_->watch_movie("Home", num);
	home_->end_movie();
	return 0;
}