#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string>
#include "TrieDataStructure.h"


int main(void)
{
	Trienode* root = getNode(NULL);
	Insert(root, "the a there answer any by bye their");
	  remove(root, "the"); //depth is a private local variable to the parameters
	return 0;
}