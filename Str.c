#include <stdio.h>
#include <string.h>

int mystrcmp(char * s0, char * s1) {

	while (*s0 == *s1) {
		s0++;
		s1++;
	}

	return *s0 - *s1;
}

char * mystrchr(char * s, char c) {

	int i = 0;
	int length = strlen(s);

	for( ; i - length; i++) {
		if (*s == c) return s;
		s++;
	}

	return 0;
}


int main()
{
	
// ------------------------------- strcmp -------------------------------

	char word0[] = "eggplant";
	char word1[] = "egg";
	char word2[] = "Kard";
	char word3[] = "";
	char word4[] = "surprise";

	printf("\nWord 0: %s\n", word0);
	printf("Word 1: %s\n", word1);
	printf("Word 2: %s\n", word2);
	printf("Word 3: %s\n", word3);
	printf("Word 4: %s\n", word4);

	printf("\nMY 0 & 1: %d\n", mystrcmp(word0,word1));
	printf("CF 0 & 1: %d\n",   strcmp(word0,word1));	
	printf("MY 0 & 2: %d\n", mystrcmp(word0,word2));
	printf("CF 0 & 2: %d\n",   strcmp(word0,word2));
	printf("MY 0 & 3: %d\n", mystrcmp(word0,word3));
	printf("CF 0 & 3: %d\n",   strcmp(word0,word3));
	printf("MY 0 & 4: %d\n", mystrcmp(word0,word4));
	printf("CF 0 & 4: %d\n",   strcmp(word0,word4));

// ------------------------------- strchr -------------------------------

	char letter = 'n';

	printf("\nWord: %s\n", word0);
	printf("Char to find: %c\n", letter);

	printf("MY strchr: %p\n", mystrchr(word0, letter));
	printf("CF strchr: %p\n",   strchr(word0, letter));

	letter = 'g';

	printf("\nWord: %s\n", word2);
	printf("Char to find: %c\n", letter);

	printf("MY strchr: %p\n", mystrchr(word2, letter));
	printf("CF strchr: %p\n",   strchr(word2, letter));

	letter = 's';

	printf("\nWord: %s\n", word4);
	printf("Char to find: %c\n", letter);

	printf("MY strchr: %p\n", mystrchr(word4, letter));
	printf("CF strchr: %p\n",   strchr(word4, letter));

	printf("\n");

	return 0;
}