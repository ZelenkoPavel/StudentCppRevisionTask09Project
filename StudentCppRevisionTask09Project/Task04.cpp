#include "tasks.h"

/*	Task 04. Arithmetic Progression [�������������� ����������]
 *
 *	���� ������ ����� �����.
 *	����������, �������� �� ������ ����� (� ��������� �������)
 *	����������������� ������� ���������� �������������� ���������� �, ���� ��,
 *	�� ����� ������ ������ �������������� ����������:
 *	������������, ��������� ��� ����������.
 *
 *	������ ������� ������ [input]
 *	�� ���� ������� ��������� ������ ����� ����� ���� int.
 *
 *	������ �������� ������ [output]
 *	������� ������ ���������� ���� �� ��������� �������:
 *	1) "Ascending arithmetic progression." - ���� �����
 *	������� ������������ �������������� ����������.
 *	2) "Descending arithmetic progression." - ���� �����
 *	������� ��������� �������������� ����������.
 *	3) "Monotonic arithmetic progression." - ���� �����
 *	������� ���������� �������������� ����������.
 *	4) "No arithmetic progression." - ���� �����
 *	�� �������� ����������������� ������� ������� �������������� ����������.
 *
 *	[ input 1]: 1 2 3 4
 *	[output 1]: Ascending arithmetic progression.
 *
 *	[ input 2]: 2 4 6 8
 *	[output 2]: Ascending arithmetic progression.
 *
 *	[ input 3]: 15 10 5 0
 *	[output 3]: Descending arithmetic progression.
 *
 *	[ input 4]: 7 7 7 7
 *	[output 4]: Monotonic arithmetic progression.
 *
 *	[ input 5]: 2 4 8 16
 *	[output 5]: No arithmetic progression.
 */

string task04(int a, int b, int c, int d) {
	if (b - a == c - b && c - b == d - c && 
		a != b && b != c && c != d) {
		return b - a > 0 ? "Ascending arithmetic progression."
			: "Descending arithmetic progression.";
	}
	else if (a == b && b == c && c == d) {
		return "Monotonic arithmetic progression.";
	}
	else {
		return "No arithmetic progression.";
	}
}