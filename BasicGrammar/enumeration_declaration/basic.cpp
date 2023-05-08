#include<iostream>
#include<cassert>
enum Color { red, green, blue };
enum Foo { a, b, c = 10, d, e = 1, f, g = f + c };
enum Access_t { read = 1, write = 2, exec = 4 };
int main() {
	Color r = green;
	switch (r)
	{
	case red: 
		std::cout << "red\n";   
		break;
	case green: 
		std::cout << "green\n"; 
		break;
	case blue: 
		std::cout << "blue\n";  
		break;
	}

	std::cout << Foo::a << ' ' << Foo::b << ' ' << Foo::c << ' ' << Foo::d << ' ' << Foo::e << ' ' << Foo::f << ' ' << Foo::g << '\n';
	std::cout << Access_t::read << ' ' << Access_t::write << ' ' << Access_t::exec << '\n';
	Access_t rwe = static_cast<Access_t>(7);
	assert((rwe & read) && (rwe & write) && (rwe & exec));
	Access_t x = static_cast<Access_t>(8.0); // undefined behavior since CWG 1766
	Access_t y = static_cast<Access_t>(8);   // undefined behavior since CWG 1766

}