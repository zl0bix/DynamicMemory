#include<iostream>
#include"Header.h"
#include<ctime>
#include<cstdlib>
//#include<stdlib.h>

void arr_add(int*& arr, int length, int num) {
	if (num <= 0)
		return;
	int* tmp = new int[length + num]{};
	for (int i = 0; i < length; i++)
		tmp[i] = arr[i];
	
	delete[] arr;
	arr = tmp;//��������� ���������������
}


int main() {
	int n;
	// ������������ ������
	/*
	int* pointer = new int; //����������� ��������� �� ������������ ������� ������������� ������ �������� � 4 �����(int)
	
	*pointer = 15; //������ � ������������ ������ ����� 15
	std::cout <<"*pointer = " << *pointer << std::endl;
	std::cout << "pointer = " << pointer << std::endl;
	
	delete pointer; //������������(�������) ������� ������������ ������  �� ������� ��������� ���������
	//���������� �� ��������� ������ ������
	pointer = new int; //��������� ������ ������� ������������ ������

	std::cout << "pointer = " << pointer << std::endl;
	*pointer = 7;
	std::cout << "*pointer = " << *pointer << std::endl;

	delete pointer;
	*/

	// ������������ �������
	/*
	std::cout << "Enter array size -> ";
	int size;
	std::cin >> size;
	int* d_arr = (int*) malloc(sizeof(int)*size);//new int[size]
	std::cout << "Array enter:\n";
	for (int i = 0; i < size; i++) {
		std::cout << "Enter " << i + 1 << " elements " << ' ';
		std::cin >> d_arr[i];
	}
	std::cout << "Finaly array:\n";
	for (int i = 0; i < size; i++)
		std::cout << d_arr[i] << "\t";	
	std::cout << std::endl;
	//std::cout << sizeof(int);
	free(d_arr); //delete[] d_arr;
	*/
	
	// ��������� ������������ ������
	/*
	int rows, cols;
	std::cout << "Enter V array size -> ";
	std::cin >> rows >> cols;
	//int* mx = new int[rows][cols]; //�� �������� ������
	int** mx = new int* [rows];
	for (int i = 0; i < rows; i++)
		mx[i] = new int[cols];
	//delete
	for (int i = 0; i < rows; i++)
		delete[] mx[i];
	delete[] mx;
	*/
	
	// Ex1 ���������� �������

	std::cout << "Ex1\n\tEnter array size -> ";
	int size1;
	std::cin >> size1;
	int* arr1 = new int[size1];
	srand(time(NULL));
	std::cout << "Array:";
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % 11 + 10;// [10..20]
			std::cout << arr1[i] << ' ';
	}
	std::cout << "\nEnter new elements -> ";
	std::cin >> n;
	arr_add(arr1,size1,n);
	size1 += n;
	std::cout << "The last array:\n";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';


	return 0;
}