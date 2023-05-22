#pragma once
namespace IMPLEMENTOR {
	class IProdouct{
	public :
		virtual void show_details() = 0;
	};
	class Book : public IProdouct {
	public :
		void show_details() override;
	};
	class Clothing : public IProdouct {
	public :
		void show_details() override;
	};
}
