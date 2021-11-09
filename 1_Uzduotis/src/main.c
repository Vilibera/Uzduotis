
#include <stdio.h>
#include "menu.h"
#include <file_reader.h>

void menuactions(char operator)

{

	char name[10];
	int pnumber;

	switch(operator) {

			case '1':
				printf("\n\n");
				printf("Enter contacts data \n");
				printf("Enter name: ");
				scanf("%s",&name[0]);
				printf("\n Enter phone number: ");
				scanf("%d",&pnumber);
				addcontact("./contacts.txt",&name[0],pnumber);

				break;

			case '2':

				printf("Delete contacts \n\n");
				deletecontacts("./contacts.txt");
				printf("Your contacts deleted \n\n");
				break;

			case '3':

				printf("Display contacts");
				displaycontact("./contacts.txt");
				printf("\n\n");

				break;

			case '4':
				printf("\n\n");
				randomDate("./random.txt");
				printf("\n\n");
				break;
			case '5':
				printf("\n\n");
				randomdisplay("./random.txt");
				printf("\n\n");

			case 'h':

				printf("\n\n");
				printf("Vilius Bernikas");

				break;

			case 'q':

				break;

			default:

				printf("Command not found\n");

		}

}
int main(void)
{
randomDate("./random.txt");
int operator;

	print_menu();
	printf("Enter command: ");
	while((operator=getchar()) !='0')
	{
		if(operator=='q')
			{
			printf("\n");
			printf("Program is closing \n");
			break;
			}
		if(operator!='\n')
		{
			menuactions(operator);
			printf("Enter command: ");
		}
	}

return 0;
}

