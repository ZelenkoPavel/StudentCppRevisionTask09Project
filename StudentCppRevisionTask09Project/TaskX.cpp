#include "tasks.h"

/*	Task X. Boxes [коробки]
*
*	Есть две коробки, первая размером A1, B1, C1, вторая размером A2, B2, C2.
*	Определите, можно ли разместить одну из этих коробок внутри другой,
*	при условии, что поворачивать коробки можно только на 90 градусов
*	вокруг рёбер.
*
*	Предварительные условия:
*	1)	Стенки коробок имеют нулевую толщину.
*	2)	Одна коробка не может "выглядывать" из другой, она должна помещаться
*	в ней полностью, однако признак вложенности допускает равенство одного
*	или двух соответствующих сторон коробок (но не всех трёх одновременно,
*	потому что тогда коробки будут считаться одинаковыми).
*	3)	Объёмы коробок не могут служить надёжным критерием для их сравнения!
*	4)	Не забудьте про "защиту от дурака": все величины должны быть больше нуля.
*
*	Формат входных данных
*	Функция получает на вход шесть целых чисел типа int.
*
*	Формат выходных данных
*	Функция должна возвратить одну из следующих строчек:
*	1) "Boxes are equal." - если коробки одинаковые.
*	2) "The first box is smaller than the second one." - если первая коробка
*	может быть вложена во вторую.
*	3) "The first box is larger than the second one." - если вторая коробка
*	может быть вложена в первую.
*	4) "Boxes are incomparable." - во всех остальных случаях.
*	5) "Error." - если размеры коробок заданы некорректно.
*
*	[ input 1]: 1 2 3 3 2 1
*	[output 1]: Boxes are equal.
*
*	[ input 2]: 2 2 3 3 2 1
*	[output 2]: The first box is larger than the second one.
*
*	[ input 3]: 3 2 1 2 2 3
*	[output 3]: The first box is smaller than the second one.
*
*	[ input 4]: 3 11 5 4 7 9
*	[output 4]: Boxes are incomparable.
*
*	[ input 5]: 0 11 5 4 7 9
*	[output 5]: Error.
*
*	[ input 6]: 3 -11 5 4 7 9
*	[output 6]: Error.
*/

string taskX(int a1, int b1, int c1, int a2, int b2, int c2) {
	if (a1 < 1 || b1 < 1 || c1 < 1 || a2 < 1 || b2 < 1 || c2 < 1) {
		return "Error.";
	}
	///////////////////////////////
	bool exit = true;

	int* box1 = new int[3];
	*box1 = a1;
	*(box1 + 1) = b1;
	*(box1 + 2) = c1;

	while(exit){
		exit = false;
		for (int i = 0; i < 2; i++)
		{
			if (*(box1 + i) > *(box1 + i + 1)) {
				exit = true;
				int temp = *(box1 + i);
				*(box1 + i) = *(box1 + i + 1);
				*(box1 + i + 1) = temp;
			}
		}
	}
	a1 = *box1;
	b1 = *(box1 + 1);
	c1 = *(box1 + 2);
	delete[] box1;
	///////////////////////////////
	exit = true;

	int* box2 = new int[3];

	*box2 = a2;
	*(box2 + 1) = b2;
	*(box2 + 2) = c2;

	while (exit) {
		exit = false;
		for (int i = 0; i < 2; i++)
		{
			if (*(box2 + i) > *(box2 + i + 1)) {
				exit = true;
				int temp = *(box2 + i);
				*(box2 + i) = *(box2 + i + 1);
				*(box2 + i + 1) = temp;
			}
		}
	}
	a2 = *box2;
	b2 = *(box2 + 1);
	c2 = *(box2 + 2);
	delete[] box2;
	///////////////////////////////
	if (a1 == a2 && b1 == b2 && c1 == c2) {
		return "Boxes are equal.";
	}
	else if (a1 > a2 && b1 > b2 && c1 > c2 ||
			a1 == a2 && b1 > b2 && c1 > c2 ||
			a1 > a2 && b1 == b2 && c1 > c2 ||
			a1 > a2 && b1 > b2 && c1 == c2 ||
			a1 == a2 && b1 == b2 && c1 > c2 ||
			a1 > a2 && b1 == b2 && c1 == c2 ||
			a1 == a2 && b1 > b2 && c1 == c2) {
		return "The first box is larger than the second one.";
	}
	else if (a1 < a2 && b1 < b2 && c1 < c2 ||
		a1 == a2 && b1 < b2 && c1 < c2 ||
		a1 < a2 && b1 == b2 && c1 < c2 ||
		a1 < a2 && b1 < b2 && c1 == c2 ||
		a1 == a2 && b1 == b2 && c1 < c2 ||
		a1 < a2 && b1 == b2 && c1 == c2 ||
		a1 == a2 && b1 < b2 && c1 == c2) {
		return "The first box is smaller than the second one.";
	}

	return "Boxes are incomparable.";
}