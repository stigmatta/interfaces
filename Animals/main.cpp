#include"Mylibrary.h"
/*��:
* 1.������� ����� ������� �� ������ Animal, ����������� ������ ����������
* 2. ������� ����� �������, � ����������� ������ ���������.
* 3. ������� �������, ������� ����� �������� � � �������� ������ �������, � � �������� ������ �������!!

*/
class Ship:public ISwim
{
public:
	virtual void Swim()
	{
		cout << "�������- ������ ���������\n";
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
   //Pinguin obj("����������� �������", 100, "�������");
   //Animal* ptr = &obj;
   //ptr->Eat();
   //ptr->Print();
   //ptr->Continent();
   //MyFunc(&obj);
   //Ship sh;
   //MyFunc(&sh);
	Parrot parrot("���", 3, "���������");
	Airplane airplane(5000);
	flyFunc(&parrot);
	flyFunc(&airplane);
	


}