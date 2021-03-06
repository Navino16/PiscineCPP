/*
** main.c for  in /home/jaunet_n/Rendu/cpp_d03/ex00
**
** Made by Nathan Jaunet
** Login   <jaunet_n@epitech.net>
**
** Started on  Fri Jan  6 09:35:32 2017 Nathan Jaunet
** Last update Fri Jan 06 17:12:25 2017 Nathan Jaunet
*/

#include "String.h"
#include <stdio.h>

int	main(void)
{
  //Ex00
  String ex00_1;
  String ex00_2;
  printf("---- Ex00 ----\n");
  StringInit(&ex00_1, "Hello, ");
  StringInit(&ex00_2, "World !!");
  printf("Init Value : %s\n", ex00_1.str);
  printf("Init Value : %s\n", ex00_2.str);
  StringDestroy(&ex00_1);
  StringDestroy(&ex00_2);

  //Ex01
  String ex01_1;
  String ex01_2;
  printf("\n---- Ex01 Set/Unset ----\n");
  StringInit(&ex01_1, "Hello, ");
  StringInit(&ex01_2, "World !!");
  printf("Initial values :\nValue 1 : %s\nValue 2: %s\n", ex01_1.str, ex01_2.str);
  ex01_1.assign_s(&ex01_1, &ex01_2);
  printf("assing_s: %s\n", ex01_1.str);
  ex01_1.assign_c(&ex01_1, "Bite");
  printf("assing_c: %s\n", ex01_1.str);
  StringDestroy(&ex01_1);
  StringDestroy(&ex01_2);

  //Ex02
  String ex02_1;
  String ex02_2;
  printf("\n---- Ex02 Append ----\n");
  StringInit(&ex02_1, "Hello, ");
  StringInit(&ex02_2, "World !!");
  printf("Initial values :\nValue 1 : %s\nValue 2: %s\n", ex02_1.str, ex02_2.str);
  ex02_1.append_s(&ex02_1, &ex02_2);
  printf("append_s: %s\n", ex02_1.str);
  ex02_1.append_c(&ex02_1, " Yes");
  printf("append_c: %s\n", ex02_1.str);
  StringDestroy(&ex02_1);
  StringDestroy(&ex02_2);

  //Ex03
  String ex03_1;
  printf("\n---- Ex03 CharAt ----\n");
  StringInit(&ex03_1, "Test char !");
  printf("Original value : %s\n", ex03_1.str);
  printf("Char at index %d : %c\n", 5, ex03_1.at(&ex03_1, 5));
  StringDestroy(&ex03_1);

  //Ex04
  String ex04_1;
  printf("\n---- Ex04 Clear ----\n");
  StringInit(&ex04_1, "Test string");
  printf("Original value : %s\n", ex04_1.str);
  ex04_1.clear(&ex04_1);
  printf("Final value : %s\n", ex04_1.str);
  StringDestroy(&ex04_1);

  //Ex05
  String ex05_1;
  printf("\n---- Ex05 Size ----\n");
  StringInit(&ex05_1, "Test string yolo");
  printf("Expected value : %d\n", 16);
  printf("Your value : %d\n", ex05_1.size(&ex05_1));
  StringDestroy(&ex05_1);

  //Ex06
  String ex06_1;
  printf("\n---- Ex06 Compare ----\n");
  StringInit(&ex06_1, "Test string yolo");
  printf("With same String :\n\tReturn value : %d\n", ex06_1.compare_s(&ex06_1, &ex06_1));
  printf("With differents String :\n\tReturn value : %d\n", ex06_1.compare_c(&ex06_1, "sdqjhkqsldsql"));
  StringDestroy(&ex06_1);

  //Ex07
  String ex07_1;
  char *str;
  printf("\n---- Ex07 Copy ----\n");
  StringInit(&ex07_1, "Test string yolo");
  str = malloc(sizeof(char) * 7);
  printf("Initial String : %s\n", ex07_1.str);
  printf("Expected char copied : 6\nNb copied char : %zd\n", ex07_1.copy(&ex07_1, str, 6, 5));
  printf("Str : %s\n", str);
  free(str);
  StringDestroy(&ex07_1);

  //Ex08
  String ex08_1;
  printf("\n---- Ex08 GetStr ----\n");
  StringInit(&ex08_1, "Blackbeard is OP");
  printf("Initial String : %s\n", ex08_1.str);
  printf("Result String : %s\n", ex08_1.c_str(&ex08_1));
  StringDestroy(&ex08_1);

  //Ex09
  String ex09_1;
  printf("\n---- Ex09 Empty ----\n");
  StringInit(&ex09_1, "");
  if (ex09_1.empty(&ex09_1) == 1)
    printf("This String is empty\n");
  else
    printf("Error, this String is not empty\n");
  StringDestroy(&ex09_1);

  //Ex10
  String ex10_1;
  String ex10_2;
  int nb;
  printf("\n---- Ex10 Find ----\n");
  StringInit(&ex10_1, "Une chaine dans une chaine !!!");
  StringInit(&ex10_2, "dans une chaine");
  if ((nb = ex10_1.find_s(&ex10_1, &ex10_2, 4)) == -1)
    printf("String '%s' in '%s' not found\n", ex10_2.str, ex10_1.str);
  else
    printf("String '%s' in '%s' found at index %d\n", ex10_2.str, ex10_1.str, nb);
  ex10_1.assign_c(&ex10_1, "Yolo, je suis une chaine et moi aussi");
  if ((nb = ex10_1.find_c(&ex10_1, "chaine", 6)) == -1)
    printf("String '%s' in '%s' not found\n", "chaine", ex10_1.str);
  else
    printf("String '%s' in '%s' found at index %d\n", "chaine", ex10_1.str, nb);
  StringDestroy(&ex10_1);
  StringDestroy(&ex10_2);

  //Ex11
  String ex11_1;
  String ex11_2;
  printf("\n---- Ex10 Insert ----\n");
  StringInit(&ex11_1, "Une chaine dans une chaine !!!");
  StringInit(&ex11_2, " dans une chaine");
  ex11_1.insert_s(&ex11_1, 10, &ex11_2);
  printf("Insert '%s' at %d : %s\n", ex11_2.str, 10, ex11_1.str);
  ex11_1.insert_c(&ex11_1, 10, " dans une chaine");
  printf("Insert '%s' at %d : %s\n", " dans une chaine", 10, ex11_1.str);
  StringDestroy(&ex11_1);
  StringDestroy(&ex11_2);

  return (0);
}
