#include"Mylibrary.h"
/*дз:
* 1.Создать класс Попугай на основе Animal, реализовать нужные интерфейсы
* 2. Создать класс Самолет, и реализовать нужный интерфейс.
* 3. Создать функцию, который может работать и с объектом класса самолет, и с объектом класса попугай!!

*/
class Ship:public ISwim
{
public:
	virtual void Swim()
	{
		cout << "Корабль- водный транспорт\n";
	}
};

void flyFunc(IFly* ptr)
{
	ptr->Fly();
}
void MyFunc(ISwim * ptr)
{
	ptr->Swim();
}
int main()
{
	setlocale(0, "ru");
	system("chcp 1251");
   //Pinguin obj("Королевский пингвин", 100, "Арктика");
   //Animal* ptr = &obj;
   //ptr->Eat();
   //ptr->Print();
   //ptr->Continent();
   //MyFunc(&obj);
   //Ship sh;
   //MyFunc(&sh);
	Parrot parrot("Ара", 3, "Австралия");
	Airplane airplane(5000);
	flyFunc(&parrot);
	flyFunc(&airplane);
	


}