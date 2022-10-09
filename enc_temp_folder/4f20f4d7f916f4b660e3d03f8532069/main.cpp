#include <iostream>
#include "List.h"
using namespace std;
int main()
{
    List list;
	setlocale(LC_ALL, "Russian");
	int k(0),a(0);
	std::cout << "Введите кол-во элементов в списке: "; std::cin >> k;
	if (k > 0)
	{
		std::cout << "Заполните список: \t";
		std::cin >> a;
		list.initList(a);
		for (int i = 0; i < k - 1; ++i) {
			std::cin >> a;
			list.pushBack(a);
		}
	}
	else { std::cout << "Неправильно введено количество элементов, производится завершение программы\n"; return 0; }
	//std::cout<<"Оригинальный список: "; 
	list.print();
	list.Double(k);
	//std::cout<<"Изменённый список: ";
	std::cout<<" - >  ";
	list.print();
	list.clear();
	return 0;
}