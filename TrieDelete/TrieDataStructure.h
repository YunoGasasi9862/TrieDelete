#pragma once
#define ALPHABET_SIZE 25
#define ARRAY_SIZE(a) sizeof(a)/sizeof(a[0])
#define CHAR_TO_INT(c) ((int)c - (int)'a')

typedef char TType;
typedef struct Trienode
{
	TType data;
	Trienode* Children[ALPHABET_SIZE];
	bool isEndofWord;

}Trienode;

Trienode* getNode(TType data)
{

	Trienode* root;
	root = (Trienode*)malloc(sizeof(Trienode));

	if (root)
	{
		root->data = data;
		root->isEndofWord = false;

		for (int i = 0; i < ALPHABET_SIZE; i++)
		{
			root->Children[i] = NULL;
		}

	}

	return root;
}

void Insert(Trienode* root, const char* key)
{
	Trienode* crawl = root;
	int index;
	int length = strlen(key);

	for (int level = 0; level < length; level++)
	{
		index = CHAR_TO_INT(key[level]);

		if (!crawl->Children[index] && key[level]!=' ')
		{
			crawl->Children[index] = getNode(key[level]);
		}
		if (key[level] != ' ')
		{
			crawl = crawl->Children[index];

		}
	}
	crawl->isEndofWord = true;
}

bool Search(Trienode* root, const char* key)
{
	int index;
	Trienode* crawl = root;
	int length = strlen(key);

	for (int level = 0; level < length; level++)
	{
		index = CHAR_TO_INT(key[level]);

		if (!crawl->Children[index])  
			return false; //no such word exists

		//or if comparing the data
		//if(crawl->data !=key[level])
		//return false? simple as that

		crawl = crawl->Children[index];
	}

	return crawl->isEndofWord; //at the end

}

bool isEmpty(Trienode* root)
{
	for (int i = 0; i < ALPHABET_SIZE; i++)
	{
		if (root->Children[i])
			return false;
	}

	return true;
}

void remove(Trienode* root, const char* key)
{
	Trienode* crawl = root;
	int length = strlen(key);
	while (!crawl->isEndofWord)
	{
		for (int i = 0; i < ALPHABET_SIZE; i++)
		{
			int index=key[]
		}
	}

	
	
	


	


}