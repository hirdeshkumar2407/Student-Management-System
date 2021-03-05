#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#define Student struct Stud
#define ENTER 13
#define TAB 9
#define BKSP 8

void end(char ele);
void fordelay(int j);
void endscr();
FILE * del(FILE * fp);
void add(FILE * fp);
void displayList(FILE * fp);
void search(FILE *fp ,FILE*course);
void header();
void coursename(FILE * fp);
void displaycourse(FILE * course) ;
void animated_tittle_page();

struct Stud
{
    char name[100];
    char Program[50];
    char section[50];
    int roll;
    float per;
    char course1[20], course2[20] , course3[20] , course4[20] , course5[20] , course6[20] , course7[20] , course8[20];

};

int main()
{
char h[0];
FILE * fp;
Student s;
int option;
char another;
int j = 0;
char ch;
if((fp=fopen("szabistszabiststudentInfo.txt","rb+"))==NULL)
{
    if((fp=fopen("szabistszabiststudentInfo.txt","wb+"))==NULL)
       {
        printf("can't open file");
        return 0;
       }
}

FILE * course;

if((course=fopen("szabiststudentcourse.dat","rb+"))==NULL)
{
    if((course=fopen("szabiststudentcourse.dat","wb+"))==NULL)
       {
           printf("can't open file");
           return 0;
       }
}

animated_tittle_page();

system("color 09");
 	char pass[10];
    char password[10] = "irfan123";
    char password1[10] = "IRFAN123";
    char mainexit;
    int i;

system("enterpss.mp3");
fordelay(500000000);

    	printf("\n\n\t\t*************************************************");
    	printf("\n\t\t\tEnter Password : ");

	while(1)
	{

		ch = getch();

	if(ch == ENTER || ch == TAB)
	{
	pass[j] = '\0';
	break;
	}

	else if(ch == BKSP)
	{
		if(j > 0)
		{
		j--;
		printf("\b \b");		//for backspace
		}

	}

	else
		{
		pass[j++] = ch;
		printf("* \b");				//to replace password character with *
		}

	}

		printf("\n\t\t*************************************************");
        printf("\n\n\nPlease Wait!");

        for(i=0; i<=9; i++)
	{
    fordelay(100000000);
        printf(".");
    }

    if(strcmp(password, pass)==0)
	{
system("cls");
    fordelay(100000000);
        printf("\n\n\n\n\n\n\t\t\t********* Correct Password *********");
system("correctpassword.mp3");
    for(i=0; i<=9; i++)
	{

    fordelay(100000000);

    }

    }

    else if(strcmp(password1, pass)==0)
	{
system("cls");
system("correctpassword.mp3");
	    printf("\n\n\n\n\n\t\t\t********* Correct Password *********");

    }
	else
	{
system("cls");
    	printf("\n\n\n\n\n\t\t\t\aXXXX Invalid Password  XXXX");
system("wrongPass.mp3");
system("cls");

    login_try:
       printf("\n\n\t\tDo you want to Exit\n\t\tType\n\t\t    (y or Y) IF Yes\n\t\t    (n or N) IF No\n\n\tEnter Your Choice ==> ");
        	scanf("%c",&mainexit);

    if(mainexit=='y' || mainexit=='Y')
	{
endscr();

 exit(1);
    }

    else if(mainexit=='n' || mainexit=='N')
	{
system("cls");
main();
    }

    else
    {
system("cls");
    	printf("\n\n\n\n\n\n\t\t\t\aXXXX Invalid Choice XXXX");
    fordelay(1000000000);
system("cls");
goto login_try;
	}

}

system("cls");
menue:

while(1)
{

system("color 0B");
header();

system("welcome_to_student_management_system.mp3");
		printf("\n===> Welcome To The Menu");
	    printf("\n\n\t\t\t1. Add New Student");
    	printf("\n\n\t\t\t2. Delete Student");
    	printf("\n\n\t\t\t3. Display Student List");
    	printf("\n\n\t\t\t4. Student Course Registration");
    	printf("\n\n\t\t\t5. Display List Of All Students With Course");
    	printf("\n\n\t\t\t6. Search Specific Complete Record");
    	printf("\n\n\t\t\t0. Exit");

    	printf("\n\n\t\tEnter Your Option ==>  ");
   			scanf("%s",&h[0]);

switch (h[0])
    {
        case '0': endscr();
                break;
        case '1': add(fp);
                break;
        case '2': del(fp);
                break;
        case '3': displayList(fp);
                break;
        case '4': coursename(course);
                 break;
        case '5': displaycourse(course);
                 break;

        case '6': search(fp,course);
                break;

        default: printf("Error! Key Pressed Is Not Valid \n");
   fordelay(500000000);
system("cls");
goto menue;

    }
}
return 1;

}

void end(char ele)
{
system("color 0C");

system("cls");

reenter :  printf("\n\nDo You Want To Retun To Main Menue ? \n\t Press (Y/y) To Return To Main Menu \n\t Press (N/n) To Exit Program ");
			printf("\n\nEnter Your Choice ==>  ");
 			   scanf("%s",&ele);

    if(ele=='Y' || ele=='y')
	{
        system("cls");
    }

	else if(ele=='N' || ele=='n')
	{
		endscr();
	}

	else
	{
	fordelay(100000000);

	goto reenter;
	}

system("cls");

}

void fordelay(int j)
{
	int i,k;
    for(i=0;i<j;i++)
    k=i;
}

void add(FILE * fp)
{
char ele;
system("color 0e");
system("cls");
system("add.mp3");

char another='y';
Student s;
int i;
float per;

fseek(fp,0,SEEK_END);
while(another=='y'||another=='Y')
{
		printf("\t\t\t*****************************");
		printf("\n\t\t\t ------> WELCOME TO <------ ");
		printf("\n\t\t\t       ADD NEW STUDENT       \n");
		printf("\t\t\t*****************************\n");
 	name:
   		printf("\n\n\t\tEnter Name of Student\n\t\tE.g; [ FirstName ] [ LastName ]   : ");
    fflush(stdin);
    		fgets(s.name,100,stdin); 		//fgets takes an extra \n character as input
    s.name[strlen(s.name)-1]='\0';

		printf("\n\n\t\tEnter Program\n\t\tE.g; [ Bs(CS) ]                 : ");
    fflush(stdin);
    		fgets(s.Program,50,stdin);
    s.Program[strlen(s.Program)-1]='\0';

    	printf("\n\n\t\tEnter Section\n\t\tE.g;  [ 1A ]                    : ");
    fflush(stdin);
    		fgets(s.section,50,stdin);
    s.section[strlen(s.section)-1]='\0';

   		printf("\n\n\t\tEnter Roll Number\n\t\tE.g; [ 1234567 ]                : ");
    		scanf("%d",&s.roll);

       printf("\n\n\tEnter Precentage Of Last Exam \n\t\tE.g; [ <=100 ] \t\t : ");
    scanf("%f",&s.per);
        system("successfullystudentdadded.mp3");

fwrite(&s,sizeof(s),1,fp);

    	printf("\n\n\t\tWant To Enter Another Student Info (Y/N) Or (y/n) : ");
    fflush(stdin);
another=getchar();
system("cls");
}

end(ele);

}

void displayList(FILE * fp)
{
system("cls");
system("color 0e");
system("display.mp3");

char ele;
    Student s;
    int j;
    j=1;
    int i,siz=sizeof(s);

    rewind(fp);
    	printf("\n\t\t\t*****************************");
		printf("\n\t\t\t ------> WELCOME TO <------  ");
		printf("\n\t\t\t    DISPLAY STDUDENT LIST     \n");
		printf("\t\t\t*****************************\n");

    while((fread(&s,siz,1,fp))==1)
    {
		printf("\n\n************************* Student %d **************************\n\n",j);
        printf("\n\t\t\tNAME    : %s",s.name);
        printf("\n\n\t\t\tProgram : %s",s.Program);
        printf("\n\n\t\t\tsection : %s",s.section);
        printf("\n\n\t\t\tRoll No : %d",s.roll);
        printf("\n\n\t\t     Percentage : %.f %%",s.per);
     	printf("\n\n*************************************************************** \n\n");
    j++;
    }

    	printf("\n\t");

    system("pause");
        system("cls");

    end(ele);

}

void displaycourse(FILE * course)
{
system("cls");

char ele;
    Student s;
    int j;
    j=1;
    int i,siz=sizeof(s);
    rewind(course);

system("color 0e");

		printf("\n\t\t\t**********************************************************");
		printf("\n\t\t\t ---------------------> WELCOME TO <--------------------- ");
		printf("\n\t\t\t\tDISPLAY STDUDENT LIST WITH COURSE REGISTERED\n");
		printf("\t\t\t**********************************************************\n");

    while((fread(&s,siz,1,course))==1)
    {
		printf("\n\n***************************** STUDENT %d *****************************\n",j);
        printf("\tName    : %s\n",s.name);
        printf("\tProgram : %s\n",s.Program);
        printf("\tSection : %s\n",s.section);
        printf("\tRoll No : %d\n",s.roll);
        printf("\nRegistered Courses Are : \n");
        printf("\t\tCourse1: %s\n",s.course1);
        printf("\t\tCourse2: %s\n",s.course2);
        printf("\t\tCourse3: %s\n",s.course3);
        printf("\t\tCourse4: %s\n",s.course4);
        printf("\t\tCourse5: %s\n",s.course5);
        printf("\t\tCourse6: %s\n",s.course6);
        printf("\t\tCourse7: %s\n",s.course7);
        printf("\t\tCourse8: %s\n",s.course8);
		printf("\n************************************************************************\n\n");
    j++;
    }

    	printf("\n\t");

system("pause");
end(ele);

}

void search(FILE *fp, FILE * course)
{
    char ele;
system("cls");
system("color 0e");
system("search.mp3");



int tempRoll,flag,siz,i;
Student s;
char another='y';

siz=sizeof(s);

	while(another=='y'||another=='Y')
{

		printf("\n\t\t\t*****************************************");
		printf("\n\t\t\t --------------> WELCOME TO <----------- ");
		printf("\n\t\t\t       SEARCH A RECORD OF A STUDENT      \n");
		printf("\t\t\t*****************************************\n");


		printf("\n\n\tEnter Roll Number of Student to search the record : ");
			scanf("%d",&tempRoll);

rewind(fp);

	while((fread(&s,siz,1,fp))==1)
	{
    if(s.roll==tempRoll)
        {
			flag=1;
        	break;
        }
	}

if(flag==1)
 	    {
    	printf("\n\t\tName   : %s",s.name);
    	printf("\n\n\t\tProgram : %s",s.Program);
        printf("\n\n\t\tSection : %s",s.section);
        printf("\n\n\t\tRoll No   : %d",s.roll);
        printf("\n\n\t   Percentage  : %.f %%",s.per);
		}

rewind(course);

	while((fread(&s,siz,1,course))==1)
	{
    if(s.roll==tempRoll)
        {flag=1;
        break;
        }
	}

if(flag==1)
    	{
        printf("\n\n\t\tCourse1: %s",s.course1);
        printf("\n\n\t\tCourse2: %s",s.course2);
        printf("\n\n\t\tCourse3: %s",s.course3);
        printf("\n\n\t\tCourse4: %s",s.course4);
        printf("\n\n\t\tCourse5: %s",s.course5);
        printf("\n\n\t\tCourse6: %s",s.course6);
        printf("\n\n\t\tCourse7: %s",s.course7);
        printf("\n\n\t\tCourse8: %s",s.course8);
		}

else
		printf("\n\n\t\t!!!! Error! No Record Found !!!!");
		printf("\n\n\t\tWant To Enter Another Search (Y/N) Or (y/n) : ");
		fflush(stdin);
		another=getchar();

		system("cls");
}

 end(ele);

}

void coursename(FILE * course)
{
system("courseregistrationmenu.mp3");
system("cls");
system("color 0e");

char ele;
char another='y';
Student s;
float per;

fseek(course,0,SEEK_END);
while(another=='y'||another=='Y')
{
	    printf("\t\t\t***********************************");
		printf("\n\t\t\t ---------> WELCOME TO <---------  ");
		printf("\n\t\t\t      ADD STUDENT COURSE INFO     \n");
		printf("\t\t\t***********************************\n");
name:
		printf("\n\n\t\tEnter Name of Student\n\t\tE.g; [FirstName] [LastName]       : ");
    	fflush(stdin);
    		fgets(s.name,100,stdin); //fgets takes an extra \n character as input
    	s.name[strlen(s.name)-1]='\0';

 		printf("\n\n\t\tEnter Program\n\t\t E.g; [Bs(CS)]                    : ");
       	fflush(stdin);
    		fgets(s.Program,50,stdin);
    	s.Program[strlen(s.Program)-1]='\0';

    	printf("\n\n\t\tEnter Section\n\t\t  E.g; [1A]                       : ");
		fflush(stdin);
    		fgets(s.section,50,stdin);
    	s.section[strlen(s.section)-1]='\0';

    	printf("\n\n\t\tEnter Roll number\n\t\t E.g; [1234567]                   :  ");
   			scanf("%d",&s.roll);

    	printf("\n\n\n\t   Select form the following Courses : \n");
	 	printf(" __________________________________________________________________\n");
	 	printf("|                                                                  |");
     	printf("\n|FOP\t  Maths\t   ITC\t   \t  English\t AppliedPhysics    |\n");
     	printf("|                                                                  |");
 		printf("\n|FOP(LAB)  DLD    ITC(LAB)    English(OCPS)     AppliedPhysics(LAB)|\n");
  		printf("|__________________________________________________________________|\n");

    	printf("\n\n\t\tCourse 1 of Student \t     : ");
   		fflush(stdin);
    		fgets(s.course1,100,stdin); 	//fgets takes an extra \n character as input
    	s.course1[strlen(s.course1)-1]='\0';

   	 	printf("\n\t\tCourse 2 of Student \t     : ");
    	fflush(stdin);
    		fgets(s.course2,100,stdin);
    	s.course2[strlen(s.course2)-1]='\0';

    	printf("\n\t\tCourse 3 of Student \t     : ");
    	fflush(stdin);
    		fgets(s.course3,100,stdin);
    	s.course3[strlen(s.course3)-1]='\0';

    	printf("\n\t\tCourse 4 of Student \t     : ");
    	fflush(stdin);
    		fgets(s.course4,100,stdin);
    	s.course4[strlen(s.course4)-1]='\0';

    	printf("\n\t\tCourse 5 of Student \t     : ");
    	fflush(stdin);
    		fgets(s.course5,100,stdin);
    	s.course5[strlen(s.course5)-1]='\0';

    	printf("\n\t\tCourse 6 of Student \t     : ");
    	fflush(stdin);
    		fgets(s.course6,100,stdin);
    	s.course6[strlen(s.course6)-1]='\0';

    	printf("\n\t\tCourse 7 of Student \t     : ");
    	fflush(stdin);
    		fgets(s.course7,100,stdin);
    	s.course7[strlen(s.course7)-1]='\0';

    	printf("\n\t\tCourse 8 of Student \t     : ");
    	fflush(stdin);
    		fgets(s.course8,100,stdin);
    	s.course8[strlen(s.course8)-1]='\0';

fwrite(&s,sizeof(s),1,course);

printf("\n ==> Do You Want To Enter A Record Of Another Student (Y/N) Or (y/n) : ");
another=getchar();
system("cls");

}
end(ele);

}

void endscr()
{

system("Thanksforusingourprogram.mp3");
system("cls");
system("color 0A");
    int i=0;
system("cls");
		printf("\n\n\t\tProject Topic : STUDENT MANAGEMENT SYSTEM\n");
		printf("\n\n\n\t\tThanks for Using");
	fordelay(300000000);
		{
		printf("\n\n\n\t\t\tMade By : \n\t\t\n\t\t\t\t");
		}

	fordelay(300000000);
		printf("==> Syed Hurrar Hasan Rizvi\n\n\t\t\t\t");

	fordelay(300000000);
		printf("==> Syed Mustafa Imam\n\n\t\t\t\t");

	fordelay(300000000);
		printf("==> Hirdesh Kumar\n\n\t\t\t\t");

	fordelay(300000000);
		printf("==> Mahek Dembra\n\n\t\t\t\t");

	fordelay(300000000);
		printf("==> Rajni Kingrani\n\n\n\t");

getch();

    	printf("Press Any Key  To Exit.....\n\n\n\n");

    exit(1);
}

FILE * del(FILE * fp)
{
char ele;
system("color 0e");
system("cls");
system("deleterecord.mp3");
		printf("\n\t\t\t ****************************");
		printf("\n\t\t\t ------> WELCOME TO <------  ");
		printf("\n\t\t\t   DELETE STUDENT RECORD    \n");
		printf("\t\t\t ****************************\n");
Student s;
int grpA=0,tempRoll,siz=sizeof(s);
FILE *delfile;

if((delfile=fopen("temp.txt","wb+"))==NULL)
{
    	printf("\n\n\t\t\t\\t!!! Error !!!\n\t\t");
system("pause");
	return fp;
}

		printf("\n\n\tEnter Roll Number Of Student To Delete The Record : \n");
		printf("\t==================================================\n");
		printf("\n\t\t\tRoll No : ");
    	printf("Please Enter An Integer : ");
    while(scanf("%d",&tempRoll) != 1)
    {
system("cls");

        printf("Please Enter An Integer : ");
	while(getchar() != '\n');
    }

		printf("\t=================================================\n");
rewind(fp);
		printf("\n\t\t\tRecord Deleted For ");
while((fread(&s,siz,1,fp))==1)
{
    if(s.roll==tempRoll)
{
	grpA=1;
		printf("\n\t=================================================\n");
		printf("\n\n\t\tName : %s",s.name);
		printf("\n\n\t\tProgram : %s",s.Program);
		printf("\n\n\t\tSection : %s",s.section);
		printf("\n\n\t\tRoll No : %d",s.roll);
		printf("\n\n\t\tPercentage : %.f %%\n\n",s.per);
    continue;
}

fwrite(&s,siz,1, delfile);

}

fclose(fp);
fclose(delfile);

remove("szabistszabiststudentInfo.txt");
rename("temp.txt","szabistszabiststudentInfo.txt");

if((fp=fopen("szabistszabiststudentInfo.txt","rb+"))==NULL)
{
    	printf("Error!");
return  NULL;
}

if(grpA==0)
{
		printf("\n\n\t\t!!!! Error! Record Not Found \n\t\n\t");
}
system("pause");

end(ele);

system("cls");

return fp;

}

void header()
{
		printf("\t\t\t*****************************");
		printf("\n\t\t\t ------> WELCOME TO <------  ");
		printf("\n\t\t\t  STUDENT MANAGEMENT SYSTEM  ");
		printf("\n\t\t\t    FOP GROUP PROJECT BY     ");
		printf("\n\t\t\t    GROUP-A [BS(CS)-1A]      \n");
		printf("\t\t\t*****************************\n");
}

void animated_tittle_page()
{
system("color 09");
system("1stWelcome.mp3");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t*****************************");
        printf("\n\t\t\t ------> WELCOME TO <------  ");
        printf("\n\t\t\t  STUDENT MANAGEMENT SYSTEM  ");
        printf("\n\t\t\t    FOP GROUP PROJECT BY     ");
        printf("\n\t\t\t    GROUP-A [BS(CS)-1A]      \n");
        printf("\t\t\t*****************************\n");
fordelay(50000000);
system("cls");

    	printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t*****************************");
        printf("\n\t\t\t ------> WELCOME TO <------  ");
        printf("\n\t\t\t  STUDENT MANAGEMENT SYSTEM  ");
        printf("\n\t\t\t    FOP GROUP PROJECT BY     ");
        printf("\n\t\t\t    GROUP-A [BS(CS)-1A]      \n");
        printf("\t\t\t*****************************\n");
fordelay(50000000);
system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t*****************************");
        printf("\n\t\t\t ------> WELCOME TO <------  ");
        printf("\n\t\t\t  STUDENT MANAGEMENT SYSTEM  ");
        printf("\n\t\t\t    FOP GROUP PROJECT BY     ");
        printf("\n\t\t\t    GROUP-A [BS(CS)-1A]      \n");
        printf("\t\t\t*****************************\n");
fordelay(50000000);
system("cls");

        printf("\n\n\n\n\n\n\n\n\t\t\t*****************************");
        printf("\n\t\t\t ------> WELCOME TO <------  ");
        printf("\n\t\t\t  STUDENT MANAGEMENT SYSTEM  ");
        printf("\n\t\t\t    FOP GROUP PROJECT BY     ");
        printf("\n\t\t\t    GROUP-A [BS(CS)-1A]      \n");
        printf("\t\t\t*****************************\n");
fordelay(50000000);
system("cls");

        printf("\n\n\n\n\n\n\n\t\t\t*****************************");
        printf("\n\t\t\t ------> WELCOME TO <------  ");
        printf("\n\t\t\t  STUDENT MANAGEMENT SYSTEM  ");
        printf("\n\t\t\t    FOP GROUP PROJECT BY     ");
        printf("\n\t\t\t    GROUP-A [BS(CS)-1A]      \n");
        printf("\t\t\t*****************************\n");
fordelay(50000000);
system("cls");

        printf("\n\n\n\n\t\t\t*****************************");
        printf("\n\t\t\t ------> WELCOME TO <------  ");
        printf("\n\t\t\t  STUDENT MANAGEMENT SYSTEM  ");
        printf("\n\t\t\t    FOP GROUP PROJECT BY     ");
        printf("\n\t\t\t    GROUP-A [BS(CS)-1A]     \n");
        printf("\t\t\t*****************************\n");
fordelay(50000000);
system("cls");

        printf("\n\n\n\t\t\t*****************************");
        printf("\n\t\t\t -----> WELCOME TO <------  ");
        printf("\n\t\t\t STUDENT MANAGEMENT SYSTEM  ");
        printf("\n\t\t\t    FOP GROUP PROJECT BY     ");
        printf("\n\t\t\t   GROUP-A [BS(CS)-1A]      \n");
        printf("\t\t\t*****************************\n");
fordelay(50000000);
system("cls");

        printf("\n\n\t\t\t*****************************");
        printf("\n\t\t\t ------> WELCOME TO <------  ");
        printf("\n\t\t\t  STUDENT MANAGEMENT SYSTEM  ");
        printf("\n\t\t\t    FOP GROUP PROJECT BY     ");
        printf("\n\t\t\t    GROUP-A [BS(CS)-1A]      \n");
        printf("\t\t\t*****************************\n");
system("color 09");
fordelay(500000000);
fordelay(100000000000);
}
