/*Завдання 1.
  Які рядки коду безпечні?
  Що може бути вразливим?
  Які зміни потрібно зробити, щоб зробити цей код більш безпечним і захищеним?*/

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int length;
	int volume;
	int factorial[10] = { 1,2,6,24,120,720,5040,40320,362880,3628800 }; //безпечно
	int index;
	cout << "Enter the length of the cube as a whole number : ";
	cin >> length;
	volume = length * length * length; /*вразливо. Може бути переповнення, тому повинна бути перевірка на length
	                                     щоб користувач не ввів число більше, за int (втрата даних)*/
	cout << "The volume is " << volume << endl; //вразливо. Може бути виведена помилкова інформація
	cout << "Which factorial do you want ? Enter its index : ";
	cin >> index;
	cout << "Factorial[" << index << "] is " << factorial[index] << endl; /*вразливо. Якщо буде вихід за межі діапазону,
                                                                            буде виведена помилкова інформація. 
																			Необхідно вводити число лише з діапазону від 0 до 9*/
                                                                          
	return 0;
}