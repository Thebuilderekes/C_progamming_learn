 #include <stdio.h>

 typedef struct {
   const char *description;
   float value;
 } swag;

 typedef struct {
   swag *swag;
   const char *sequence;
 } combination;

 typedef struct {
 combination numbers;
 const char *make;
}safe;


 int main()
 {
   swag gold = {"GOLD!", 1000000.0};
   combination numbers = {&gold, "6502"};
   safe s = {numbers, "RAMACON250"};
   // printf("This is gold: %s", gold.description );
 printf("Contents = %s\n", s.numbers.swag->description);
// dot operator used for actual structure variable member and -> operator used for pointer to structure address member
 }

