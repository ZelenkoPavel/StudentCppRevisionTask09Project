#include "tasks.h"

/*	Task 01. The Leap Year [���������� ���]
 *
 *	����������, �������� �� �������� ��� ����������
 *	(��� ����� ���, ��� � �� ����� ���).
 *
 *	����������
 *	1) ��� �������� ����������, ���� ��� ����� ������ 4,
 *	�� �� ������ 100, ��� ���� �� ������ 400.
 *	2) ����� ����������� ����������� �������� � ���� �������� ���������.
 *
 *	������ ������� ������ [input]
 *	�� ���� ������� �������� ����� ����� ���� int.
 *
 *	������ �������� ������ [output]
 *	������� ������ ���������� ��������� � ���� ���������� ��������.
 *
 *	[ input 1]: 2023
 *	[output 1]: false
 *
 *	[ input 2]: 1984
 *	[output 2]: true
 *
 *	[ input 3]: 2000
 *	[output 3]: true
 *
 *	[ input 4]: 0
 *	[output 4]: true
 *
 *	[ input 5]: -100
 *	[output 5]: false
 */

bool task01(int year) {

	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}