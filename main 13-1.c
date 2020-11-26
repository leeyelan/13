#include <stdio.h>
#include <stdlib.h>

	
	struct student{
		int id;
		char name[10];
		double grade;
	};
int main(void){
	
	struct student s1 = {123456,"Juyeop", 4.3};
	
	s1.id = 456123;
	s1.grade = 2.0;
	
	printf("ID : %d\n",s1.id);
	printf("name: %s\n",s1.name);
	printf("grade: %f",s1.grade);
	
	return 0;
	
}
