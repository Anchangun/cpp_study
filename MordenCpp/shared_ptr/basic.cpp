#include<iostream>
#include<memory>
int main() {
	std::shared_ptr<int> t = std::make_shared<int>(7);
	std::cout << "create t1 : " << *t <<' ' << t.use_count() <<' '<<(t.get()) << '\n';
	//get() returns the stored pointer, not the managed pointer.
	auto output = [](std::string msg, int const* pInt) {
		std::cout << msg << *pInt << " in " << pInt << "\n";
	};
	output("Shared pointer with get() ", t.get());

	std::shared_ptr<int> t2 = t;
	std::cout << "copy t2 : " << *t2 << ' ' << t2.use_count() << ' ' << (t2.get()) << '\n';
	auto t3 = t2;
	std::cout << "copy t3 : " << *t3 << ' ' << t3.use_count() << ' ' << (t3.get()) << '\n';
	t3.reset();
	std::cout << "copy t2 : " << *t2 << ' ' << t2.use_count() << ' ' << (t2.get()) << '\n';
	// std::cout << "reset t3 : " << *t3 << ' ' << t3.use_count() << ' ' << (t3.get()) << '\n'; reset error

	std::cout << "operator bool : " << t.operator bool() << '\n';
	t.reset();
	std::cout << "operator bool : " << t.operator bool() << '\n';
	if (t3.operator bool()) {
		std::cout << "reset t3 : " << *t3 << ' ' << t3.use_count() << ' ' << (t3.get()) << '\n';
	}
	else {
		std::cout << "reset t3" << '\n';
	}
	t = std::make_shared<int>(8);
	std::cout << "create t1 : " << *t << ' ' << t.use_count() << ' ' << (t.get()) << '\n';
	std::cout <<  "t2 : " << *t2 << ' ' << t2.use_count() << ' ' << (t2.get()) << '\n';
	t.swap(t2);
	std::cout << "swap t1 : " << *t << ' ' << t.use_count() << ' ' << (t.get()) << '\n';
	std::cout << "swap t2 : " << *t2 << ' ' << t2.use_count() << ' ' << (t2.get()) << '\n';
	return 0;
}