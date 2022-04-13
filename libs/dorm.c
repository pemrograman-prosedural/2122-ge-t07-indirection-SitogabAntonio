#include "dorm.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct dorm_t create_dorm(char *_name, unsigned short _capacity, enum gender_t _gender) {

    struct dorm_t dorm_;

  strcpy(dorm_.name, _name);
  dorm_.capacity = _capacity;
  dorm_.gender = _gender;
  dorm_.residents_num = 0;

  return dorm_;
}

void print_dorm(struct dorm_t _dorm )
{
  if(_dorm.gender==0){
      printf("%s|%d|male|%d\n", _dorm.name, _dorm.capacity, _dorm.residents_num);
    }
     else if(_dorm.gender==1)
    {
     printf("%s|%d|female|%d\n", _dorm.name, _dorm.capacity, _dorm.residents_num);
   } 
}
