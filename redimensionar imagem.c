
#include <stdio.h>

int main(){
char link[1000];
int numx;
int numy;
	
FILE *fptr;	

fptr = fopen("C:\\Users\\Public\\Downloads\\image.html", "w"); 

if(fptr == NULL){
	printf("ERROR!");
	return 1;
}		

printf("Enter the image link: ");	
scanf("%s", &link);

printf("Enter horizontal pixel size: ");	
scanf("%d", &numx);

printf("Enter vertical pixel size: ");	
scanf("%d", &numy);



fprintf(fptr, "<!DOCTYPE html>");
fprintf(fptr, "<html>");
fprintf(fptr,"<img src= %s style=\"width: %dpx;height;%dpx>\" ", link, numx, numy);
fprintf(fptr, "<\\html>");

	
fclose(fptr);	
	
	
}
