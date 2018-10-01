// Cooper Nissenbaum & Maggie Zhao
// Systems-Level Programming Pd10

#include <stdio.h>
#include <string.h>
#include "StrHead.h"

 int main(void) {
   // ------------------------------- strlen -------------------------------
   printf("---------------mystrlen testing---------------\n");
   char s0[20] = "hillbilly";
   char s1[5] = "james";
   char s2[] = "hola";
   char *s3 = "computadora";
   char s4[30] = "kavanaugh";

   printf("\nWord 0: %s\n", s0);
   printf("Word 1: %s\n", s1);
   printf("Word 2: %s\n", s2);
   printf("Word 3: %s\n", s3);
   printf("Word 4: %s\n", s4);

   printf("\n[standard]: %lu\n", strlen(s0) );
   printf("[mine]: %d\n", mystrlen(s0) );
   printf("[standard]: %lu\n", strlen(s1) );
   printf("[mine]: %d\n", mystrlen(s1) );
   printf("[standard]: %lu\n", strlen(s2) );
   printf("[mine]: %d\n", mystrlen(s2) );
   printf("[standard]: %lu\n", strlen(s3) );
   printf("[mine]: %d\n", mystrlen(s3) );
   printf("[standard]: %lu\n", strlen(s4) );
   printf("[mine]: %d\n", mystrlen(s4) );

   // ------------------------------- strcpy -------------------------------
   char t0[20] = "hillbilly";
   char t1[5] = "james";
   char t2[] = "hola";
   char *t3 = "computadora";
   char t4[30] = "kavanaugh";

   printf("---------------mystrcpy testing---------------\n");
   printf("\nCopying s2 into s1\n");
   printf("[standard]: %s\n", strcpy(s1,s2));
   printf("[mine]: %s\n", mystrcpy(t1,t2));

   printf("\nCopying s2 into s3\n");
   printf("[standard]: ERROR\n"); //%s\n ", strcpy(s3,s2));
   printf("[mine]: ERROR\n"); //%s\n", mystrcpy(t3,t2));

   printf("\nCopying s3 into s4\n");
   printf("[standard]: %s\n", strcpy(s4,s3));
   printf("[mine]: %s\n", mystrcpy(t4,t3));

   // ------------------------------- strncat -------------------------------
   printf("---------------mystrncat testing---------------\n");
   char u0[20] = "hillbilly";
   char u1[5] = "james";
   char u2[] = "hola";
   char *u3 = "computadora";
   char u4[30] = "kavanaugh";

   char v0[20] = "hillbilly";
   char v1[5] = "james";
   char v2[] = "hola";
   char *v3 = "computadora";
   char v4[30] = "kavanaugh";
   printf("\nConcatenating s0 & s1 with 3 chars\n");
   printf("[standard]: %s\n", (strncat(u0,u1, 3)));
   printf("[mine]: %s\n", (mystrncat(v0, v1, 3)) );

   printf("\nConcatenating s1 & s2 with 4 chars\n");
   printf("[standard]: ERROR\n");// %s\n", (strncat(s1,s2, 4)));
   printf("[mine]: ERROR\n");//%s\n", (mystrncat(s1, s2, 4)) );


   printf("\nConcatenating s3 & s2 with 4 chars\n");
   printf("[standard]: ERROR\n"); //%s\n", (strncat(s3,s2, 4)));
   printf("[mine]: ERROR\n"); // %s\n", (mystrncat(s3, s2, 4)) );

   printf("\nConcatenating s4 & s3 with 8 chars\n");
   printf("[standard]: %s\n", (strncat(u4,u3, 8)));
   printf("[mine]: %s\n", (mystrncat(v4, v3, 8)) );

  // ------------------------------- strcmp -------------------------------
  printf("---------------mystrcmp testing---------------\n");
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

   printf("\n[standard] 0 & 1: %d\n",   strcmp(word0,word1));
   printf("[mine] 0 & 1: %d\n", mystrcmp(word0,word1));
   printf("[standard] 0 & 2: %d\n",   strcmp(word0,word2));
   printf("[mine] 0 & 2: %d\n", mystrcmp(word0,word2));
   printf("[standard] 0 & 3: %d\n",   strcmp(word0,word3));
   printf("[mine] 0 & 3: %d\n", mystrcmp(word0,word3));
   printf("[standard] 0 & 4: %d\n",   strcmp(word0,word4));
   printf("[mine] 0 & 4: %d\n", mystrcmp(word0,word4));

  // ------------------------------- strchr -------------------------------
  printf("---------------mystrchr testing---------------\n");
   char letter = 'n';

   printf("\nWord: %s\n", word0);
   printf("Char to find: %c\n", letter);

   printf("[standard]: %p\n",   strchr(word0, letter));
   printf("[mine]: %p\n", mystrchr(word0, letter));

   letter = 'g';

   printf("\nWord: %s\n", word2);
   printf("Char to find: %c\n", letter);

   printf("[standard]: %p\n",   strchr(word2, letter));
   printf("[mine]: %p\n", mystrchr(word2, letter));

   letter = 's';

   printf("\nWord: %s\n", word4);
   printf("Char to find: %c\n", letter);

   printf("[standard]: %p\n",   strchr(word4, letter));
   printf("[mine]: %p\n", mystrchr(word4, letter));

   printf("\n");

   return 0;
 }
