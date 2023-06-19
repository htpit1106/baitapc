// 32 la ma asci cua phim space
/* cac ham xu li ki tu
	tep tieu de ctype.h
			toupper
			tolower
			vd : toupper('a')
	islower
	isupper(char)
	isalpha 
	isdigit
	isspace
	iscntrl 
	ham tra ve khac  0 la true
  khong la false
*/   
// hoang thi phuong   

// cach cua co
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
int main(){
	char s[100];
	int d =0, i=0;
	gets(s);
	for (i=0; s[i]!= '\0';i++)
		if(s[i]!=' '&&s[i+1] ==' ' || s[i] !=' '&&s[i+1] =='\0')d++;
		printf("kq: %d",d);
	
 	return 0;
}

