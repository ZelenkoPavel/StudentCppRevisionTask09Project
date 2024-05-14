#include "tasks.h"

/*	Task X. Boxes [�������]
*
*	���� ��� �������, ������ �������� A1, B1, C1, ������ �������� A2, B2, C2.
*	����������, ����� �� ���������� ���� �� ���� ������� ������ ������,
*	��� �������, ��� ������������ ������� ����� ������ �� 90 ��������
*	������ ����.
*
*	��������������� �������:
*	1)	������ ������� ����� ������� �������.
*	2)	���� ������� �� ����� "�����������" �� ������, ��� ������ ����������
*	� ��� ���������, ������ ������� ����������� ��������� ��������� ������
*	��� ���� ��������������� ������ ������� (�� �� ���� ��� ������������,
*	������ ��� ����� ������� ����� ��������� �����������).
*	3)	������ ������� �� ����� ������� ������� ��������� ��� �� ���������!
*	4)	�� �������� ��� "������ �� ������": ��� �������� ������ ���� ������ ����.
*
*	������ ������� ������
*	������� �������� �� ���� ����� ����� ����� ���� int.
*
*	������ �������� ������
*	������� ������ ���������� ���� �� ��������� �������:
*	1) "Boxes are equal." - ���� ������� ����������.
*	2) "The first box is smaller than the second one." - ���� ������ �������
*	����� ���� ������� �� ������.
*	3) "The first box is larger than the second one." - ���� ������ �������
*	����� ���� ������� � ������.
*	4) "Boxes are incomparable." - �� ���� ��������� �������.
*	5) "Error." - ���� ������� ������� ������ �����������.
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

	if (a1 == a2 && b1 == b2 && c1 == c2 ||
		a1 == b2 && b1 == a2 && c1 == c2 ||
		a1 == c2 && b1 == b2 && c1 == a2 ||
		a1 == a2 && b1 == c2 && c1 == b1 ||
		a1 == c2 && b1 == a2 && c1 == b2 ||
		a1 == b2 && b1 == c2 && c1 == a2) {
		return "Boxes are equal.";
	}
	else if (a1 > a2 && b1 == b2 && c1 == c2 ||
		a1 == a2 && b1 > b2 && c1 == c2 ||
		a1 == a2 && b1 == b2 && c1 > c2 ||
		a1 > a2 && b1 > b2 && c1 == c2 ||
		a1 > a2 && b1 == b2 && c1 > c2 ||
		a1 == a2 && b1 > b2 && c1 > c2) {
		return "The first box is larger than the second one.";
	}
	else if (a1 < a2 && b1 == b2 && c1 == c2 ||
		a1 == a2 && b1 < b2 && c1 == c2 ||
		a1 == a2 && b1 == b2 && c1 < c2 ||
		a1 < a2 && b1 < b2 && c1 == c2 ||
		a1 < a2 && b1 == b2 && c1 < c2 ||
		a1 == a2 && b1 < b2 && c1 < c2) {
		return "The first box is smaller than the second one.";
	}

	return "Boxes are incomparable.";
}