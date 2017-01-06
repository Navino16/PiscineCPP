/*
** main.c for  in /home/jaunet_n/Rendu/cpp_d03/ex00
**
** Made by Nathan Jaunet
** Login   <jaunet_n@epitech.net>
**
** Started on  Fri Jan  6 09:35:32 2017 Nathan Jaunet
** Last update Fri Jan 06 13:51:13 2017 Nathan Jaunet
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
  printf("\n---- Ex01 ----\n");
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
  printf("\n---- Ex02 ----\n");
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
  printf("\n---- Ex03 ----\n");
  StringInit(&ex03_1, "Test char !");
  printf("Original value : %s\n", ex03_1.str);
  printf("Char at index %d : %c\n", 5, ex03_1.at(&ex03_1, 5));
  StringDestroy(&ex03_1);

  //Ex04
  String ex04_1;
  printf("\n---- Ex04 ----\n");
  StringInit(&ex04_1, "Test string");
  printf("Original value : %s\n", ex04_1.str);
  ex04_1.clear(&ex04_1);
  printf("Final value : %s\n", ex04_1.str);
  StringDestroy(&ex04_1);

  //Ex05
  String ex05_1;
  printf("\n---- Ex05 ----\n");
  StringInit(&ex05_1, "Test string yolo");
  printf("Expected value : %d\n", 16);
  printf("Your value : %d\n", ex05_1.size(&ex05_1));
  StringDestroy(&ex05_1);

  return (0);
}
