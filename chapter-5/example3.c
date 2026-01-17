#include <stdio.h>
#include <stdlib.h>

typedef struct{
  char *name;
  int age;
}Dog;


int main()

{

 Dog ruby = {
    "Ruby",
    8
  };

  void increase_age(Dog *e){
    e->age = e->age + 1;
  }

  increase_age(&ruby);

  printf("Ruby is now %i years old", ruby.age);

}
