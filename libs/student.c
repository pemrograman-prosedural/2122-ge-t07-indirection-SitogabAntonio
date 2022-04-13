#include "student.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student_t create_student(char *_id, char *_name, char *_year,enum gender_t _gender)  {
    
    struct student_t std;
    strcpy(std.id, _id);
    strcpy(std.name, _name);
    strcpy(std.year, _year);
    std.gender=_gender;
    std.dorm = malloc (sizeof(struct dorm_t));
    std.dorm = NULL;
  return std;
}
void print_student(struct student_t _students){
  if (_students.dorm==NULL)
  {
    if (_students.gender==0)
    {
      printf("%s|%s|%s|male|unassigned\n", _students.id, _students.name, _students.year);

    } 
    else if (_students.gender==1)
    {
      printf("%s|%s|%s|female|unassigned\n", _students.id, _students.name, _students.year);
    }
  } else {
    if (_students.gender==0)
    {
      printf("%s|%s|%s|male|%s\n", _students.id, _students.name, _students.year, _students.dorm->name);

    } 
    else if (_students.gender==1)
    {
      printf("%s|%s|%s|female|%s\n", _students.id, _students.name, _students.year, _students.dorm->name);
    }
  } 
  }
