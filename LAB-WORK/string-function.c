//string inbuilt function

#include<stdio.h>
#include<string.h>
void main()
{
	char name[]="mayur";
//	char name[]={'m','a','y','u','r'};
//    printf ("%s",name);

    char name1[100];
    char name2[100];
    printf("enter another name");
    scanf("%s",& name1);
    
//    printf("%s is another name",name1);

    // sizeof
//    printf("%d is size of 1st string",sizeof(name));
//    printf("%d is size of 2st string",sizeof(name1));

    
//    strcat
      strcat (name,naem1);
//      printf("merged string is %s",name);

     
//     strcmp
//       printf("comparison between string 1 and string 2 is %d",strcmp(name,name1));

      
//      1st string > 2nd string op: positive
//      1st string < 2nd string op: negitive
//	  1st string == 2nd string op: Zero      

  
//       strcpy
//         strcpy(name,name1);
//         printf("%s is name2",name2);


//      strrev
        printf("%s",strrev(name));
        
        

}
