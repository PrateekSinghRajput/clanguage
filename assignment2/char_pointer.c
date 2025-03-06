#include <stdio.h>
int main (){


char num = 'W';
char *ptr =&num;


if (ptr != NULL){

printf("pointer is valid and points to valid address\n");

}

else{
printf("Pointer is NUll\n");
return 1;
}


printf("vaule of num: %c\n", num);
printf("size of num: %ld\n", (sizeof(num)));
printf("Address of num:%ld\n", (sizeof(&num)));
printf("size of ptr:%ld\n", (sizeof(ptr)));
printf("size of *ptr:%ld\n", (sizeof(*ptr)));


if(*ptr+1)
{
printf("Pointer arithmatetic *ptr+1 =%ld\n", *ptr + 1);
}
else{
printf("pointer arithmatetic is failed \n" );
}

if(*ptr-1)
{
printf("Pointer arithmatetic *ptr-1 =%ld\n", *ptr - 1);
}
else{
printf("pointer arithmatetic is failed \n" );
}


if(ptr++)
{
printf("Pointer arithmatetic ptr++ =%ld\n", ptr ++);
}
else{
printf("pointer arithmatetic is failed \n" );
}

if(ptr--)
{
printf("Pointer arithmatetic ptr-1 =%ld\n", ptr - 1);
}
else{
printf("pointer arithmatetic is failed \n" );
}


if(ptr+2)
{
printf("Pointer arithmatetic ptr+2 =%ld\n", ptr + 2);
}
else{
printf("pointer arithmatetic is failed \n" );
}

if(ptr+3)
{
printf("Pointer arithmatetic ptr+3 =%ld\n", ptr +3);
}
else{
printf("pointer arithmatetic is failed \n" );
}

if(ptr-3)
{
printf("Pointer arithmatetic ptr-3 =%ld\n", ptr -3);
}
else{
printf("pointer arithmatetic is failed \n" );
}


if((ptr+1)>ptr)
{
printf("Pointer arithmatetic ptr+1 =%ld\n", ptr +1);
}
else{
printf("pointer arithmatetic is failed \n" );
}

printf("vaule of num: %ld\n", num);
if(*ptr+3)
{
printf("Pointer arithmatetic *ptr+3 =%ld\n", *ptr +3);
}
else{
printf("pointer arithmatetic is failed \n" );
}

return 0;


}
