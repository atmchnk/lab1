/* Завдання 2.
   Скомпонуйте і запустіть.
   Введіть адекватне число, перш ніж продовжити.
   Як ви думаєте, що станеться, якщо ви введете значення, більші за найвище значення 
   Знову запустіть і введіть значення, яке перевищує максимально можливе значення(спробуйте 11 -
   значне число). Що сталося? Чому?
   Видаліть коментарі(//) з початку рядка перед поверненням 0. Скомпілюйте. Ви отримаєте
   попередження «warning C4307 : +: переполнение целой константы».Чому? Як ви думаєте?*/

#include <stdio.h>
#include <iostream>
#include <limits>

using namespace std;

int main()
{
	int i;
	cout << "For this compiler: " << endl;
	cout << "integers are " << sizeof(int) << " bytes" << endl;
	cout << "largest integer is " << INT_MAX << endl;
	cout << "smallest integer is " << INT_MIN << endl;
	cout << "integers__64 are " << sizeof(__int64) << " bytes" << endl;
	cout << "largest integer is " << _I64_MAX << endl;
	cout << "smallest integer is " << _I64_MIN << endl;
	cout << "Input an integer value " << endl;
	cin >> i;
	cout << endl << "You entered the following value: " << endl;
	cout << "integer: " << i << endl; /*при введенні 11-значного числа, вивелося зовсім інше значення.		
									  Якщо ввести значення більше, ніж INT_MAX, то на екрані виведеться значення INT_MAX*/
	//cout << "Integer Overflow: " << INT_MAX + 1 << endl; //значення не може бути поміщене в n-бітний цілочислений тип даних
	return 0;
}