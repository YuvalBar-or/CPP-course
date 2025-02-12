#include "AdptArray.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct AdptArray_
{
	PElement *element;
	int ArrSize;
	COPY_FUNC copy;
	DEL_FUNC delete;
	PRINT_FUNC print;
};

PAdptArray CreateAdptArray(COPY_FUNC copy, DEL_FUNC delete, PRINT_FUNC print)
{
	PAdptArray pArr = (PAdptArray)malloc(sizeof(struct AdptArray_));
	if (pArr == NULL) return NULL;
	pArr->element = NULL;
	pArr->ArrSize = 0;
	pArr->copy = copy;
	pArr->delete = delete;
	pArr->print = print;
	return pArr;
}

void DeleteAdptArray(PAdptArray pArr)
{
	if (pArr == NULL) return;
	for (int i = 0; i < pArr->ArrSize; i++)
	{
		if (pArr->element[i] != NULL) pArr->delete (pArr->element[i]);
	}
	free(pArr->element);
	free(pArr);
}

Result SetAdptArrayAt(PAdptArray pAdptArray, int index, PElement pElement)
{
	if (pAdptArray == NULL || pElement == NULL || index < 0) return FAIL;

	if (index >= pAdptArray->ArrSize)
	{
		PElement *array = (PElement)calloc(index + 1, sizeof(PElement));
		if (array == NULL) return FAIL;

		memcpy(array, pAdptArray->element, pAdptArray->ArrSize * sizeof(PElement));
		free(pAdptArray->element);
		pAdptArray->element = array;
	}
	else
	{
		PElement p = pAdptArray->element[index];
		if (p != NULL) pAdptArray->delete (p);
	}

	pAdptArray->element[index] = pAdptArray->copy(pElement);
	pAdptArray->ArrSize = (index >= pAdptArray->ArrSize) ? index + 1 : pAdptArray->ArrSize;
	return SUCCESS;
}

PElement GetAdptArrayAt(PAdptArray adaptArray, int index)
{
	if (adaptArray == NULL || index >= adaptArray->ArrSize || adaptArray->element[index] == NULL) return NULL;
	if (index < 0) return NULL;
	return adaptArray->copy(adaptArray->element[index]);
}

int GetAdptArraySize(PAdptArray AdptArray_)
{
	if (AdptArray_ == NULL) return -1;
	return AdptArray_->ArrSize;
}

void PrintDB(PAdptArray AdptArray_)
{
	if (AdptArray_ == NULL) return;
	for (int i = 0; i < AdptArray_->ArrSize; i++)
	{
		if (AdptArray_->element[i] != NULL)
			AdptArray_->print(AdptArray_->element[i]);
	}
}