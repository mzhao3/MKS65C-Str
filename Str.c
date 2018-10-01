// Cooper Nissenbaum & Maggie Zhao
// Systems-Level Programming Pd10

#include <stdio.h>
#include <string.h>
#include "StrHead.h"
// ------------------------------- mystrlen -------------------------------
//computes the length of the string s
int mystrlen(char * s)
{
  int i = 0;
  while (*s) {
    i++;
    s++;
  }
  return i;
}

// ------------------------------- mystrcpy -------------------------------
//copies the string src to dst (including the terminating `\0' character.)
//return dst
char * mystrcpy(char *dest, char *source) {

  char * destStart = dest;
  while (*source)
    * dest ++ = *source++;
  *dest = '\0';
  return destStart;
}

// ------------------------------- mystrncat -------------------------------
//appends not more than n characters from the null-terminated string src to the end of the null-terminated string dest, then adds a terminating `\0'.  The string s1 must have sufficient space to hold the result.
//returns the pointer dest
char * mystrncat( char *dest, char *source, int n ) {
   char * destStart = dest;
   while (*dest)
    dest++;

  for (int i = 0; i < n && *source; i++)
    * dest ++ = *source++;

  *dest = '\0';
  return destStart;
 }

// ------------------------------- mystrcmp -------------------------------
//lexicographically compare the null-terminated strings s0 and s1
//returns an integer >, =, or < 0, according as the string s0 is >, =, or < the string s1
int mystrcmp(char * s0, char * s1) {
	while (*s0 == *s1) {
		s0++;
		s1++;
	}

	return *s0 - *s1;
}

// ------------------------------- mystrchr -------------------------------
//locates the first occurrence of c (converted to a char) in the string pointed to by s. The terminating null character is considered to be part of the string; therefore if c is `\0', the functions locate the terminating `\0
//returns a pointer to the located character, or NULL if the character does not appear in the string
char * mystrchr(char * s, char c) {
	int i = 0;
	int length = strlen(s);

	for( ; i - length; i++) {
		if (*s == c) return s;
		s++;
	}

	return 0;
}
