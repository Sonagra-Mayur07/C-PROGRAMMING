//structure
//take id and pr of 2 student

#include<stdio.h>
struct student{
	int id;
	float pr;
};

int main()
{
	struct student s1,s2; 
	printf("enter id of 1st student");
	scanf("%d",&s1.id);
	s1.pr=90.56;
	s2.pr=50.50;
	printf("enter id for 2nd student");
	scanf("%d",&s2.id);
	printf("%.2f is pr and %d id of 1st student",s1.pr,s1.id);
	printf("\n%f is pr and %d id of 1st student",s2.pr,s2.id);
	
	return 0;
}
