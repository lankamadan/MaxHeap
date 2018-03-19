/*
 ============================================================================
 Name        : MaxHeap.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define HEAP_SIZE 20
#define ARRAY_SIZE(a) sizeof(a)/sizeof(a[0])

int length = 0;

void heapify (int *b, int index){
	if (index == 0){
		return;
	}

//	printf ("While in progress \n");
//	for (int i =0; i < length; i++){
//		printf ("%d",b[i],"\n");
//	}

	int parent = (index-1)/2;

	if (b[parent] <= b[index]){
		int temp = b[parent];
		b[parent] = b[index];
		b[index] = temp;
	}

	heapify(b, index-1);
}

void insert (int* b, int a){
	b[length] = a;
	heapify(b, length);
	length++;
}

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	int a[] = {20, 10, 100, 40, 50, 25, 99, 44, 23, 69, 150};
	//int* b = (int *)malloc (sizeof (int) * HEAP_SIZE);

	int b[HEAP_SIZE];
	for (int i =0; i < ARRAY_SIZE(a); i++){
		insert (b, a[i]);
	}

	printf ("Heap \n");
	for (int i =0; i < ARRAY_SIZE(a); i++){
		printf ("%d ",b[i],"\n");
	}

	return EXIT_SUCCESS;
}
