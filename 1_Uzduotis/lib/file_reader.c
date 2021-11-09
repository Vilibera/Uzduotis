
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <errno.h>


struct contacts
	{
		char name[20];
		int number;


	};


int addcontact(char *fileName,char name[],int pnumber)
{
	FILE *fp;
	struct contacts c1;
	fp=fopen(fileName,"a");
	if(fp== NULL)
	{
		printf("Value of errno: %d\n",errno);
		printf("The error message is: %s\n",strerror(errno));
	}
	else if(pnumber!=1)
	{
		printf("Value of errno is : %d\n",errno);
		printf("The error messageis: %s\n",strerror(errno));
	}
	
	else
	{
		strcpy(c1.name,name);
		c1.number = pnumber;

		fprintf(fp,"Name: %s\n Number: %d\n\n",c1.name,c1.number);
	}
	fclose(fp);
	return 0;
}


int deletecontacts(char *fileName)
{
	FILE *fp;	
	fp=fopen(fileName,"w");
	if(fp==NULL)
		{
			printf("Value of errno: %d\n",errno);
			printf("The error message is: %s\n",strerror(errno));
		}
		fprintf(fp," ");

	return 0;
}

int displaycontact(char *fileName)
{
        
	FILE *fp;

	char ch[999];

	

	fp = fopen(fileName, "r");

	if ( fp == NULL) {

		printf("Value of errno: %d\n",errno);
		printf("The error message is: %s\n",strerror(errno));

	}

	

	printf("The contents of %s file are:\n\n", fileName);

	

	while(fscanf(fp,"%s",ch)!=EOF) 	
		{
			
      		printf("%s",ch);

      	}



   	fclose(fp);

	return 0;	
}

int randomdisplay(char *fileName)
{

	FILE *fp;
	char ch[999];


	fp=fopen(fileName,"r");

	if(fp==NULL)
		{

			printf("Value of errno: %d\n",errno);
			printf("The error message is: %s\n",strerror(errno));
		}


		printf("The contents of %s file are: \n\n",fileName);
		
		while(fscanf(fp,"%s",ch)!=EOF)
			{
				printf("%s",ch);
			}
		fclose(fp);
		return 0;
}

int randomDate(char *fileName)
{
	time_t t;
	time(&t);
	FILE *fp;
	fp=fopen(fileName,"a");
	

	if(fp==NULL)
		{

			printf("Value of errno: %d\n",errno);
			printf("The error message is: %s\n",strerror(errno));
		}
	printf("Data is regerated in file %s\n\n",fileName);

	fprintf(fp,"/n Date is: %s ",ctime(&t));

	return 0;
	fclose(fp);

}
