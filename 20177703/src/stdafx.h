
#include<iostream>

#include<stdlib.h>

#pragma warning(disable:4996)

using namespace std;

#ifndef SUDOKU_H_

#define SUDOKU_H_





/*������ά����*/

extern int shudu[9][9], s, t, block, block_line, block_column;



/*����Check���������Լ����������Ƿ�Ϸ�*/

bool Check(int num, int now_line, int now_column);



/*���뺯��*/

void Input();



/*��������*/

bool Work(int now_line, int now_column);



/*�������*/

void Output();



#endif
