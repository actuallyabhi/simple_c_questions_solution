#include <stdio.h>
#include <ctype.h>
void main() {
	char f_name[10],m_name[10], l_name[10];
	
	printf("Enter your full name (f_name m_name l_name)- ");
	scanf("%s %s %s",f_name, m_name, l_name);

	printf("-----Abbreviated name-----\n");
	printf("%c. %c. %s",toupper(f_name[0]), toupper(m_name[0]), l_name);
	
}
