#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#define nline 10
#define space 32
#define PROGRESS_BAR_SIZE 40
void add();
void disp_stud();
void disp_mark();
void main_menu();
void student_menu();
void exam_menu();
void operate_menu();
void operate_student();
void operate_exam();
void display();
void modify();
void deletes();
void del(int r);
void mark_entry();
void mark_display();
void mark_modify();
void mark_delete();
void report();
void display_report();
void display_progress_bar(int);
FILE *fp;
struct Student
{
	int reg;
	char name[35],fname[30],mname[30],address[40],course[15],gender[10];
}s;
struct Exam
{
	int regd,phy,che,maths,eng,comp;
}e;
void main()
{
	int p,i,a=4,f=0;
	system("color C0");
 	for(i=1;i<=17;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=72;i++)
	{
		printf("%c",space);
	}
	printf("LOADING\n");
 	for (p = 0; p <= 100; ++p)
	{
 		display_progress_bar(p);
 		sleep(50);
 	}
 	do
	{
		system("cls");
		char pass[25],id[25],ch;
		printf("#");
		for(i=1;i<157;i++)
		{
			printf("-");
		}
		printf("#");
		for(i=1;i<=3;i++)
		{
			printf("%c",nline);
		}
		for(i=1;i<=66;i++)
		{
			printf("%c",space);
		}
		printf("L O G I N P A G E");
		for(i=1;i<=3;i++)
		{
			printf("%c",nline);
		}
			printf("#");
		for(i=1;i<157;i++)
		{
			printf("-");
		}
		printf("#");
		for(i=1;i<=15;i++)
		{
			printf("%c",nline);
		}
		for(i=1;i<=72;i++)
		{
			printf("%c",space);
		}
		printf("ENTER ID : ");
		scanf("%s",&id);
		for(i=1;i<=2;i++)
		{
			printf("%c",nline);
		}
		for(i=1;i<=72;i++)
		{
			printf("%c",space);
		}
		printf("PASSWORD : ");
		i=0;
		while(1)
		{
			ch=getch();
			if(ch==13)
			{
				break;
			}
			pass[i++]=ch;
			printf("*");
			}
			pass[i]='\0';
			if(strcmp(id,"admin")==0&&strcmp(pass,"pass")==0)
			{
				printf("\n\n\n");
			for(i=1;i<=63;i++)
			{
				printf("%c",space);
			}
			printf("~~~~~~~~ ACCESS GRANTED ~~~~~~~~\n");
			printf("\n\n");
			for(i=1;i<=66;i++)
			{
				printf("%c",space);
			}
			system("pause");
			system("cls");
			system("color 60");
			f=1;
			printf("#");
			for(i=1;i<157;i++)
			{
				printf("-");
			}
			printf("#");
			for(i=1;i<=2;i++)
			{
				printf("%c",nline);
			}
			for(i=1;i<=70;i++)
			{
				printf("%c",space);
			}
			printf("W E L C O M E");
			for(i=1;i<=3;i++)
			{
				printf("%c",nline);
			}
			for(i=1;i<=75;i++)
			{
				printf("%c",space);
			}
			printf("T O");
			for(i=1;i<=3;i++)
			{
				printf("%c",nline);
			}
			for(i=1;i<=49;i++)
			{
				printf("%c",space);
			}
			printf("S T U D E N T I N F O R M A T I O N S Y S T E M");
			for(i=1;i<=2;i++)
			{
				printf("%c",nline);
			}
			printf("#");
			for(i=1;i<157;i++)
			{
				printf("-");
			}
			printf("#");
			for(i=1;i<=16;i++)
			{
				printf("%c",nline);
			}
			for(i=1;i<=135;i++)
			{
				printf("%c",space);
			}
			printf("DEVELOPED BY :");
			for(i=1;i<=1;i++)
			{
				printf("%c",nline);
			}
			for(i=1;i<=129;i++)
			{
				printf("%c",space);
			}
			printf("-------------------------");
			for(i=1;i<=2;i++)
			{
				printf("%c",nline);
			}
			for(i=1;i<=130;i++)
			{
				printf("%c",space);
			}
			printf("Manoj Krushna Mohanta");
			for(i=1;i<=2;i++)
			{
				printf("%c",nline);
			}
			for(i=1;i<=130;i++)
			{
				printf("%c",space);
			}
			printf("Regd. No. : 1701341024");
			for(i=1;i<=2;i++)
			{
				printf("%c",nline);
			}
			for(i=1;i<=130;i++)
			{
				printf("%c",space);
			}
			printf("Branch : CSE");
			for(i=1;i<=2;i++)
			{
				printf("%c",nline);
			}
			printf("#");
			for(i=1;i<157;i++)
			{
				printf("-");
			}
			printf("#");
			
			//End of Welcome page defination
			for(i=1;i<=2;i++)
			{
				printf("%c",nline);
			}
			system("pause");
			system("cls");
			main_menu();
		}
		if(f==0)
		{
			if(a>0)
			{
				printf("\n\n\n");
				for(i=1;i<=73;i++)
				{
					printf("%c",space);
				}
				printf("Access Denied !\n");
				for(i=1;i<=66;i++)
				{
					printf("%c",space);
				}
				printf("(Invalid ID/PASSWORD Entered)\n\n");
				for(i=1;i<=65;i++)
				{
					printf("%c",space);
				}
				printf("----- %d attempts remaining -----\n\n\n",a);
				for(i=1;i<=69;i++)
				{
					printf("%c",space);
				}
				a--;
				system("pause");
			}
			else
			{
				exit(0);
			}
		}
	}while(f==0);
}

//Main Menu declaration
void main_menu()
{
	system("cls");
	int i;
	system("color ED");
	//Defination of MAIN MENU
	printf("#");
	for(i=1;i<157;i++)
	{
		printf("-");
	}
	printf("#");
	for(i=1;i<=3;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=53;i++)
	{
		printf("%c",space);
	}
	printf("S T U D E N T I N F O R M A T I O N S Y S T E M");
	for(i=1;i<=3;i++)
	{
		printf("%c",nline);
	}
	printf("#");
	for(i=1;i<157;i++)
	{
		printf("-");
	}
	printf("#");
	for(i=1;i<=6;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=62;i++)
	{
		printf("%c",space);
	}
	printf("#===============================#");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=70;i++)
	{
		printf("%c",space);
	}
	printf("M A I N M E N U");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=62;i++)
	{
		printf("%c",space);
	}
	printf("#===============================#");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=70;i++)
	{
		printf("%c",space);
	}
	printf("1. Student Menu");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=70;i++)
	{
		printf("%c",space);
	}
	printf("2. Exam Menu");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=70;i++)
	{
		printf("%c",space);
	}
	printf("3. Exit");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=62;i++)
	{
		printf("%c",space);
	}
	printf("#===============================#");
	//End of MAIN MENU defination
	operate_menu();
}

void operate_menu()
{
	int i;
	char ch;
	system("color ED");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=69;i++)
	{
		printf("%c",space);
	}
	printf("Enter your choice : ");
	fflush(stdin);
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: student_menu();
				break;
		case 2: exam_menu();
				break;
		case 3: system("cls");
				for(i=1;i<=15;i++)
				{
					printf("%c",nline);
				}
				for(i=1;i<=66;i++)
				{
					printf("%c",space);
				}
				printf("T H A N K Y O U");
				for(i=1;i<=15;i++)
				{
					printf("%c",nline);
				}
				exit(0);
		default:for(i=1;i<=2;i++)
				{
				printf("%c",nline);
				}
				for(i=1;i<=69;i++)
				{
				printf("%c",space);
				}
				printf("Invalid choice ... Please try again");
				sleep(1);
				main_menu();
	}
}

//Student Menu declaration
void student_menu()
{
	system("cls");
	int i;
	system("color BD");
	//Defination of Student Menu
	printf("#");
	for(i=1;i<157;i++)
	{
		printf("-");
	}
	printf("#");
	for(i=1;i<=3;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=53;i++)
	{
		printf("%c",space);
	}
	printf("S T U D E N T I N F O R M A T I O N S Y S T E M");
	for(i=1;i<=3;i++)
	{
		printf("%c",nline);
	}
	printf("#");
	for(i=1;i<157;i++)
	{
		printf("-");
	}
	printf("#");
	for(i=1;i<=6;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=62;i++)
	{
		printf("%c",space);
	}
	printf("#==================================#");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=67;i++)
	{
		printf("%c",space);
	}
	printf("S T U D E N T M E N U");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=62;i++)
	{
		printf("%c",space);
	}
	printf("#==================================#");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=65;i++)
	{
		printf("%c",space);
	}
	printf("1. Add Student Information");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=65;i++)
	{
		printf("%c",space);
	}
	printf("2. Display Student Information");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=65;i++)
	{
		printf("%c",space);
	}
	printf("3. Modify Student Information");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=65;i++)
	{
		printf("%c",space);
	}
	printf("4. Delete Student Information");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=65;i++)
	{
		printf("%c",space);
	}
	printf("5. Go back to Main Menu");
	{
		printf("%c",nline);
	}
	for(i=1;i<=62;i++)
	{
		printf("%c",space);
	}
	printf("#==================================#");
	//End of defination for Student Menu
	operate_student();
}

void operate_student()
{
	system("color BD");
	int i,ch;
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=68;i++)
	{
		printf("%c",space);
	}
	printf("Enter your choice : ");
	fflush(stdin);
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: add();
				break;
		case 2: display();
				break;
		case 3: modify();
				break;
		case 4: deletes();
				break;
		case 5: main_menu();
				break;
		default:for(i=1;i<=2;i++)
				{
				printf("%c",nline);
				}
				for(i=1;i<=69;i++)
				{
				printf("%c",space);
				}
				printf("Invalid choice ... Please try again");
				sleep(1);
				student_menu();
	}
}

//Exam Menu declaration
void exam_menu()
{
	system("cls");
	int i;
	system("color BD");
	//Defination of Exam Menu
	printf("#");
	for(i=1;i<157;i++)
	{
		printf("-");
	}
	printf("#");
	for(i=1;i<=3;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=53;i++)
	{
		printf("%c",space);
	}
	printf("S T U D E N T I N F O R M A T I O N S Y S T E M");
	for(i=1;i<=3;i++)
	{
		printf("%c",nline);
	}
	printf("#");
	for(i=1;i<157;i++)
	{
		printf("-");
	}
	printf("#");
	for(i=1;i<=6;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=62;i++)
	{
	printf("%c",space);
	}
	printf("#==================================#");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=70;i++)
	{
		printf("%c",space);
	}
	printf("E X A M M E N U");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=62;i++)
	{
		printf("%c",space);
	}
	printf("#==================================#");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=68;i++)
	{
		printf("%c",space);
	}
	printf("1. Enter mark details");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=68;i++)
	{
		printf("%c",space);
	}
	printf("2. Display mark details");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=68;i++)
	{
		printf("%c",space);
	}
	printf("3. Modify mark details");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=68;i++)
	{
		printf("%c",space);
	}
	printf("4. Delete mark details");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=68;i++)
	{
		printf("%c",space);
	}
	printf("5. Display Report Card");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=68;i++)
	{
		printf("%c",space);
	}
	printf("6. Go back to Main Menu");
	{
		printf("%c",nline);
	}
	for(i=1;i<=62;i++)
	{
		printf("%c",space);
	}
	printf("#=================================#");
	//End of defination for Exam Menu
	operate_exam();
}

void operate_exam()
{
	system("color BD");
	int i,ch,r;;
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=69;i++)
	{
		printf("%c",space);
	}
	printf("Enter your choice : ");
	fflush(stdin);
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: mark_entry();
				break;
		case 2: mark_display();
				break;
		case 3: mark_modify();
				break;
		case 4: mark_delete();
				break;
		case 5: report();
				break;
		case 6: main_menu();
				break;
		default:for(i=1;i<=2;i++)
				{
					printf("%c",nline);
				}
				for(i=1;i<=69;i++)
				{
					printf("%c",space);
				}
				printf("Invalid choice ... Please try again");
				sleep(1);
				exam_menu();
	}
}

//LOADING SCREEN
void print_n_chars(int n, int c)
{
 	while (n-- > 0) putchar(c);
}
void display_progress_bar(int p)
{
	 putchar('\r');
	 printf("\t\t\t\t\t\t\t");
	 putchar('|');
	 print_n_chars(PROGRESS_BAR_SIZE * p / 100,':');
	 print_n_chars(PROGRESS_BAR_SIZE - PROGRESS_BAR_SIZE * p / 100, ' ');
	 putchar('|');
}
//LOADING SCREEN END

//For entering Student Data
void add()
{
	char ch;
	int r,i,f=0;
	do
	{
		system("color A0");
		system("cls");
		printf("#");
		for(i=1;i<157;i++)
		{
			printf("=");
		}
		printf("#");
		for(i=1;i<=2;i++)
		{
			printf("%c",nline);
		}
		for(i=1;i<=58;i++)
		{
			printf("%c",space);
		}
		printf("A D D S T U D E N T I N F O R M A T I O N ");
		for(i=1;i<=2;i++)
		{
			printf("%c",nline);
		}
		printf("#");
		for(i=1;i<157;i++)
		{
			printf("=");
		}
		printf("#");
		fp=fopen("E:\\Student.dat","ab+");
		if(fp==NULL)
		{
			for(i=1;i<=2;i++)
		{
		printf("%c",nline);
		}
			for(i=1;i<=60;i++)
		{
		printf("%c",space);
		}
		printf("\nCannot open file !\n");
		system("pause");
		student_menu();
		}
		fclose(fp);
		printf("\n");
		for(i=1;i<=52;i++)
		{
			printf("%c",space);
		}
		printf("Enter the Student details according to the following criteria :\n\n\n");
		for(i=1;i<=69;i++)
		{
			printf("%c",space);
		}
		printf("Regd. No. : ");
		scanf("%d",&r);
		fflush(stdin);
		//Data Entry process Starts
		fp=fopen("E:\\Student.dat","r");
		while(fread(&s,sizeof(s),1,fp)>0)
		{
			if(r==s.reg)
			{
				f=1;
			}
		}
		fclose(fp);
		if(f==1)
		{
			for(i=1;i<=2;i++)
			{
				printf("%c",nline);
			}
			for(i=1;i<=63;i++)
			{
				printf("%c",space);
			}
			printf("Regd. no. already exists !");
		}
		else
		{
			s.reg=r;
			printf("\n");
			for(i=1;i<=69;i++)
			{
				printf("%c",space);
			}
			printf("Name :");
			gets(s.name);
			printf("\n");
			for(i=1;i<=69;i++)
			{
				printf("%c",space);
			}
			printf("Father's Name :");
			gets(s.fname);
			printf("\n");
			for(i=1;i<=69;i++)
			{
				printf("%c",space);
			}
			printf("Mother's Name :");
			gets(s.mname);
			printf("\n");
			for(i=1;i<=69;i++)
			{
				printf("%c",space);
			}
			printf("Gender :");
			scanf("%s",&s.gender);
			fflush(stdin);
			printf("\n");
			for(i=1;i<=69;i++)
			{
				printf("%c",space);
			}
			printf("Address :");
			scanf("%s",&s.address);
			fflush(stdin);
			printf("\n");
			for(i=1;i<=69;i++)
			{
				printf("%c",space);
			}
			printf("Course :");
			scanf("%s",&s.course);
			fflush(stdin);
			fp=fopen("E:\\Student.dat","ab+");
			fseek(fp,0,SEEK_END);
			fwrite(&s,sizeof(s),1,fp);
			fclose(fp);
			for(i=1;i<=2;i++)
			{
				printf("%c",nline);
			}
			for(i=1;i<=60;i++)
			{
				printf("%c",space);
			}
			printf("Student details added successfully");
		}
		//Data Entry process End
		for(i=1;i<=2;i++)
		{
			printf("%c",nline);
		}
		for(i=1;i<=57;i++)
		{
			printf("%c",space);
		}
		printf("Do you want to enter another detail (Y/N) :");
		scanf("%c",&ch);
		fflush(stdin);
		f=0;
	}while(ch=='Y'||ch=='y');
	fclose(fp);
	printf("\n\n");
	system("pause");
	student_menu();
}

//For displaying Student Data
void display()
{
	int i;
	system("cls");
	system("color A0");
	printf("#");
	for(i=1;i<157;i++)
	{
		printf("=");
	}
	printf("#");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=50;i++)
	{
		printf("%c",space);
	}
	printf("D I S P L A Y S T U D E N T I N F O R M A T I O N ");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	printf("#");
	for(i=1;i<157;i++)
	{
		printf("=");
	}
	printf("#");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	disp_stud();
	system("pause");
	student_menu();
}

//Display Process
void disp_stud()
{
	int i;
	//Display Start
	printf("\n\n______________________________________________________________S T U D E N T ' S R E C O R D");
	for(i=1;i<=63;i++)
	{
		printf("_");
	}
	printf("\n\n\n\n\t R E G D. N O.\t\t N A M E\t\t\tG E N D E R\t\tA D D R E S S\t\tC O U R S E \n");
	printf("\t ________________\t_________________________\t\t____________\t\t_____________\t\t___________\n\n");
	fp=fopen("E:\\Student.dat","rb");
	if(fp==NULL)
	{
		printf("\nFile cannot be opened !\n");
		system("pause");
		student_menu();
	}
	while(fread(&s,sizeof(s),1,fp)>0)
	{
		if(s.reg/10>1000000)
		{
			printf("\t\t%d\t",s.reg);
		}
		else
		{
			printf("\t\t%d\t\t",s.reg);
		}
		int j=0,count=0;
		for(j=0;s.name[j]!='\0';j++)
		{
			if(s.name[j]==' ')
			{
				count++;
			}
		}
		if(count==0)
		{
			printf("\t %s\t",s.name);
		}
		if(count==1)
		{
			printf("\t %s ",s.name);
		}
		if(count==2)
		{
			printf(" %s",s.name);
		}
		count=0;
		for(i=0;s.name[i]!='\0';i++)
		{
			count++;
		}
		if(count<4)
		{
			printf("\t\t\t %s",s.gender);
		}
		else
		{
			printf("\t\t %s",s.gender);
		}
		count=0;
		for(i=0;s.gender[i]!='\0';i++)
		{
			count++;
		}
		if(count<4)
		{
			printf("\t\t %s",s.address);
		}
		else
		{
			printf("\t %s",s.address);
		}
		count=0;
		for(i=0;s.address[i]!='\0';i++)
		{
			count++;
		}
		if(count<6)
		{
			printf("\t\t\t %s",s.course);
		}
		else
		{
			printf("\t\t %s",s.course);
		}
			printf("\n\n");
	}
	fclose(fp);
	for(i=1;i<=79;i++)
	{
		printf("_");
	}
	printf("X");
	for(i=1;i<=78;i++)
	{
		printf("_");
	}
	printf("\n\n");
	//Display End
}

//For modifying Student Data
void modify()
{
	int reg1,f=0,i;
	char ch;
	system("color A0");
	do
	{
		system("cls");
		printf("#");
		for(i=1;i<157;i++)
		{
			printf("=");
		}
		printf("#");
		for(i=1;i<=2;i++)
		{
			printf("%c",nline);
		}
		for(i=1;i<=50;i++)
		{
			printf("%c",space);
		}
		printf("M O D I F Y S T U D E N T I N F O R M A T I O N ");
		for(i=1;i<=2;i++)
		{
			printf("%c",nline);
		}
		printf("#");
		for(i=1;i<157;i++)
		{
			printf("=");
		}
		printf("#");
		for(i=1;i<=2;i++)
		{
			printf("%c",nline);
		}
		disp_stud();
		//Modify Start
		fp=fopen("E:\\Student.dat","rb+");
		FILE *temp;
		temp=fopen("E:\\temp.dat","wb");
		printf("\nEnter the registration number which you want to modify : ");
		scanf("%d",&reg1);
		fflush(stdin);
		while(fread(&s,sizeof(s),1,fp)>0)
		{
			if(reg1==(s.reg))
			{
				printf("\nName :");
				gets(s.name);
				fflush(stdin);
				printf("\nFather's Name :");
				gets(s.fname);
				fflush(stdin);
				printf("\nMother's Name :");
				gets(s.mname);
				fflush(stdin);
				printf("\nGender :");
				scanf("%s",&s.gender);
				fflush(stdin);
				printf("\nAddress :");
				gets(s.address);
				fflush(stdin);
				printf("\nCourse :");
				gets(s.course);
				fflush(stdin);
				fwrite(&s,sizeof(s),1,temp);
				f=1;
			}
			else
			{
				fwrite(&s,sizeof(s),1,temp);
			}
		}
		if(f==0)
		{
			printf("\nStudent with Regd. no. %d does not exists !",reg1);
		}
		fclose(fp);
		fclose(temp);
		remove("E:\\Student.dat");
		rename("E:\\temp.dat","E:\\Student.dat");
		//Modify Process End
		printf("\nDo you want to modify again (Y/N) : ");
		scanf("%c",&ch);
		fflush(stdin);
		f=0;
	}while(ch=='Y'||ch=='y');
	printf("\n\n");
	system("pause");
	student_menu();
}

//For deleting Student Data
void deletes()
{
	system("cls");
	system("color A0");
	int reg1,f=0,i;
	char ch;
	do
	{
		system("cls");
		printf("#");
		for(i=1;i<157;i++)
		{
			printf("=");
		}
		printf("#");
		for(i=1;i<=2;i++)
		{
			printf("%c",nline);
		}
		for(i=1;i<=50;i++)
		{
			printf("%c",space);
		}
		printf("D E L E T E S T U D E N T I N F O R M A T I O N ");
		for(i=1;i<=2;i++)
		{
			printf("%c",nline);
		}
		printf("#");
		for(i=1;i<157;i++)
		{
			printf("=");
		}
		printf("#");
		for(i=1;i<=2;i++)
		{
			printf("%c",nline);
		}
		disp_stud();
		//Delete Process Start
		printf("\nEnter the registration number to delete : ");
		scanf("%d",&reg1);
		FILE *t;
		fp=fopen("E:\\Exam.dat","rb");
		t=fopen("E:\\temp.dat","wb");
		//Delete Process Start
		while(fread(&e,sizeof(e),1,fp)>0)
		{
			if(reg1==e.regd)
			{
				continue;
			}
			else
			{
				fwrite(&e,sizeof(e),1,t);
			}
		}
		fclose(fp);
		fclose(t);
		remove("E:\\Exam.dat");
		rename("E:\\temp.dat","E:\\Exam.dat");
		FILE *temp;
		fp=fopen("E:\\Student.dat","rb");
		temp=fopen("E:\\temp.dat","wb");
		while(fread(&s,sizeof(s),1,fp)>0)
		{
			if(reg1==s.reg)
			{
				f=1;
			}
			else
			{
				fwrite(&s,sizeof(s),1,temp);
			}
		}
		fclose(fp);
		fclose(temp);
		remove("E:\\Student.dat");
		rename("E:\\temp.dat","E:\\Student.dat");
		if(f==0)
		{
			printf("\nStudent with Regd. no. %d does not exists !",reg1);
		}
		else
		{
			printf("\nRecord Deleted Successfully");
		}
		//Delete Process End
		fflush(stdin);
		printf("\nDo you want to delete another data (Y/N) : ");
		scanf("%c",&ch);
		fflush(stdin);
		f=0;
	}while(ch=='Y'||ch=='y');
	printf("\n\n");
	system("pause");
	student_menu();
}

//For entering Exam Data for Students
void mark_entry()
{
	system("cls");
	system("color A0");
	char ch;
	int r,i,f1=0,f2=0;
	fp=fopen("E:\\Exam.dat","ab");
	printf("#");
	for(i=1;i<157;i++)
	{
		printf("=");
	}
	printf("#");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=45;i++)
	{
		printf("%c",space);
	}
	printf("E N T E R S T U D E N T' S E X A M I N F O R M A T I O N ");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	printf("#");
	for(i=1;i<157;i++)
	{
		printf("=");
	}
	printf("#");
	{
		printf("%c",nline);
	}
	if(fp==NULL)
	{
		printf("\nCannot open file !\n");
		system("pause");
		exam_menu();
	}
	fclose(fp);
	//Mark entry process Start
	do
	{
		printf("\n\nEnter Registration number of the student :");
		scanf("%d",&r);
		fflush(stdin);
		fp=fopen("E:\\Student.dat","r");
		while(fread(&s,sizeof(s),1,fp)>0)
		{
			if(r==s.reg)
			{
				f1=1;
				break;
			}
			else
			{
				f1=0;
			}
		}
		fclose(fp);
		fp=fopen("E:\\Exam.dat","r");
		while(fread(&e,sizeof(e),1,fp)>0)
		{
			if(r==e.regd)
			{
				f2=1;
				break;
			}
			else
			{
			f2=0;
			}
		}
		fclose(fp);
		if(f1==1&&f2==0)
		{
			e.regd=r;
			printf("\nEnter mark of student in Physics :");
			scanf("%d",&e.phy);
			fflush(stdin);
			printf("\nEnter mark of the student in Chemistry :");
			scanf("%d",&e.che);
			fflush(stdin);
			printf("\nEnter mark of the student in Maths :");
			scanf("%d",&e.maths);
			fflush(stdin);
			printf("\nEnter mark of the student in English :");
			scanf("%d",&e.eng);
			fflush(stdin);
			printf("\nEnter mark of the student in Computer :");
			scanf("%d",&e.comp);
			fflush(stdin);
			fopen("E:\\Exam.dat","ab");
			fseek(fp,0,SEEK_END);
			fwrite(&e,sizeof(e),1,fp);
			fclose(fp);
			system("cls");
			printf("\nStudent details added successfully");
		}
		if(f1==0)
		{
			printf("\nStudent with regd. no. doesn't exists\n");
		}
		if(f2==1)
		{
			printf("\nMarks for student with this regd. no. already exists\n");
		}
		//Mark entry process End
		printf("\n\nDo you want to enter another detail (Y/N) :");
		scanf("%c",&ch);
		fflush(stdin);
		f1=0;
		f2=0;
	}while(ch=='Y'||ch=='y');
	printf("\n\n");
	system("pause");
	exam_menu();
}

//For displaying Exam Data for Students
void mark_display()
{
	int i;
	system("cls");
	system("color A0");
	fp=fopen("E:\\Exam.dat","rb");
	printf("#");
	for(i=1;i<157;i++)
	{
		printf("=");
	}
	printf("#");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=45;i++)
	{
		printf("%c",space);
	}
	printf("D I S P L A Y S T U D E N T' S E X A M I N F O R M A T I O N ");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	printf("#");
	for(i=1;i<157;i++)
	{
		printf("=");
	}
	printf("#");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	if(fp==NULL)
	{
		printf("\nFile cannot be opened !\n");
		system("pause");
		exam_menu();
	}
	disp_mark();
	fclose(fp);
	system("pause");
	exam_menu();
}

//Exam Data display process
void disp_mark()
{
	int i;
	//Display Starts
	printf("\n\n______________________________________________________________S T U
	D E N T ' S R E C O R D");
	for(i=1;i<=63;i++)
	{
		printf("_");
	}
	printf("\n\n\n\n\t\tREGD. NO.\t\t PHYSICS\t\t CHEMISTRY\t\t MATHEMATICS\t\tENGLISH\t\t COMPUTER\n");
	printf("\t\t_________\t\t______________\t\t________________\t________________\t_____________\t\t___________\n\n");
	while(fread(&e,sizeof(e),1,fp)>0)
	{
		if(e.regd/1000000<10)
		{
			printf("\t\t%d\t\t\t %d\t\t\t %d\t\t %d\t\t %d\t\t\t%d\n",e.regd,e.phy,e.che,e.maths,e.eng,e.comp);
		}
		else
		{
			printf("\t\t%d\t\t %d\t\t\t %d\t\t %d\t\t %d\t\t\t%d\n\n",e.regd,e.phy,e.che,e.maths,e.eng,e.comp);
		}
	}
	for(i=1;i<=79;i++)
	{
		printf("_");
	}
	printf("X");
	for(i=1;i<=78;i++)
	{
		printf("_");
	}
	//Display End
}

//For modifying Exam Data for Students
void mark_modify()
{
	system("color A0");
	int reg1,f=0,i,r,val;
	char ch;
	do
	{
		//Display Student's Exam Data
		system("cls");
		fp=fopen("E:\\Exam.dat","rb");
		printf("#");
		for(i=1;i<157;i++)
		{
			printf("=");
		}
		printf("#");
		for(i=1;i<=2;i++)
		{
			printf("%c",nline);
		}
		for(i=1;i<=43;i++)
		{
			printf("%c",space);
		}
		printf("M O D I F Y S T U D E N T' S E X A M I N F O R M A T I O N ");
		for(i=1;i<=2;i++)
		{
			printf("%c",nline);
		}
		printf("#");
		for(i=1;i<157;i++)
		{
			printf("=");
		}
		printf("#");
		for(i=1;i<=2;i++)
		{
			printf("%c",nline);
		}
		if(fp==NULL)
		{
			printf("\nFile cannot be opened !\n");
			system("pause");
			exam_menu();
		}
		disp_mark();
		fclose(fp);
		//Modify Process Start
		fp=fopen("E:\\Exam.dat","rb");
		FILE *temp;
		temp=fopen("E:\\temp.dat","wb");
		printf("\n\nEnter the registration number which you want to modify : ");
		scanf("%d",&reg1);
		fflush(stdin);
		while(fread(&e,sizeof(e),1,fp)>0)
		{
			if(reg1==(e.regd))
			{
				val=check(reg1);
				if(val==1)
				{
					printf("\nPhysics :");
					scanf("%d",&e.phy);
					fflush(stdin);
					printf("\nChemistry :");
					scanf("%d",&e.che);
					fflush(stdin);
					printf("\nMaths :");
					scanf("%d",&e.maths);
					fflush(stdin);
					printf("\nEnglish :");
					scanf("%d",&e.eng);
					fflush(stdin);
					printf("\nComputer :");
					scanf("%d",&e.comp);
					fflush(stdin);
					fwrite(&e,sizeof(e),1,temp);
					f=1;
				}
				else
				{
					printf("\nStudent with such regd. no, doesn't exists !");
					fwrite(&e,sizeof(e),1,temp);
				}
			}
			else
			{
				fwrite(&e,sizeof(e),1,temp);
			}
		}
		if(f==0)
		{
			printf("\nNo Record Found !");
		}
		//Modify Process End
		fclose(fp);
		fclose(temp);
		remove("E:\\Exam.dat");
		rename("E:\\temp.dat","E:\\Exam.dat");
		fflush(stdin);
		printf("\nDo you want to modify again (Y/N) : ");
		scanf("%c",&ch);
		f=0;
		val=0;
	}while(ch=='Y'||ch=='y');
	printf("\n\n");
	system("pause");
	exam_menu();
}

//For deleting Exam Data for Students
void mark_delete()
{
	system("cls");
	system("color A0");
	int r,f=0,i;
	char ch;
	do
	{
		system("cls");
		printf("#");
		for(i=1;i<157;i++)
		{
			printf("=");
		}
		printf("#");
		for(i=1;i<=2;i++)
		{
			printf("%c",nline);
		}
		for(i=1;i<=43;i++)
		{
			printf("%c",space);
		}
		printf("D E L E T E S T U D E N T' S E X A M I N F O R M A T I O N ");
		for(i=1;i<=2;i++)
		{
			printf("%c",nline);
		}
		printf("#");
		for(i=1;i<157;i++)
		{
			printf("=");
		}
		printf("#");
		for(i=1;i<=2;i++)
		{
			printf("%c",nline);
		}
		FILE *t;
		fp=fopen("E:\\Exam.dat","rb");
		t=fopen("E:\\temp.dat","wb");
		if(fp==NULL)
		{
			printf("\nFile cannot be opened !\n");
			system("pause");
			exam_menu();
		}
		disp_mark();
		//Delete Process Start
		printf("\nEnter the registration number to delete : ");
		scanf("%d",&r);
		fflush(stdin);
		rewind(fp);
		while(fread(&e,sizeof(e),1,fp)>0)
		{
			if(r==e.regd)
			{
				f=1;
			}
			else
			{
				fwrite(&e,sizeof(e),1,t);
			}
		}
		fclose(fp);
		fclose(t);
		remove("E:\\Exam.dat");
		rename("E:\\temp.dat","E:\\Exam.dat");
		//Delete process ends
		if(f==0)
		{
			printf("\nRecord not found !");
		}
		else
		{
			printf("\nRecord Deleted Successfully");
		}
		//Delete Process End
		fflush(stdin);
		printf("\nDo you want to delete another data (Y/N) : ");
		scanf("%c",&ch);
		f=0;
	}while(ch=='Y'||ch=='y');
	printf("\n\n");
	system("pause");
	exam_menu();
}

//To check if entered regd. no exists
int check(int r)
{
	int k;
	FILE *t;
	t=fopen("E:\\Student.dat","r");
	while(fread(&s,sizeof(s),1,t)>0)
	{
		if(r==s.reg)
		{
			k=1;
			break;
		}
		else
		{
			k=0;
		}
	}
	fclose(t);
	return k;
}

//For displaying Report Card of Student
void report()
{
	int i,r;
	system("cls");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=64;i++)
	{
		printf("%c",space);
	}
	printf("Enter regd. no. : ");
	scanf("%d",&r);
	system("cls");
	system("color B1");
	int min=40,max=100,total;
	float perc;
	char grade;
	FILE *fp2;
	fp=fopen("E:\\Student.dat","rb");
	fp2=fopen("E:\\Exam.dat","rb");
	for(i=1;i<=2;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=35;i++)
	{
		printf("%c",space);
	}
	printf("B I J U P A T T A N A I K U N I V E R S I T Y O F T E C H N O L O G Y , B B S R");
	printf("\n");
	for(i=1;i<157;i++)
	{
		printf("_");
	}
	for(i=1;i<=46;i++)
	{
		printf("%c",space);
	}
	printf("( An Autonomous Institution Under The Society Act Govt. of Odisha )\n");
	for(i=1;i<=70;i++)
	{
		printf("%c",space);
	}
	printf("( Regd. No. 2114/98 )");
	for(i=1;i<=3;i++)
	{
		printf("%c",nline);
	}
	for(i=1;i<=69;i++)
	{
		printf("%c",space);
	}
	printf("R E P O R T C A R D\n");
	for(i=1;i<=68;i++)
	{
		printf("%c",space);
	}
	printf("___________________________");
	while(fread(&s,sizeof(s),1,fp)>0)
	{
		if(r==s.reg)
		{
			for(i=1;i<=4;i++)
			{
				printf("%c",nline);
			}
			printf("\tName : %s",s.name);
			for(i=1;i<=70;i++)
			{
				printf("%c",space);
			}
			printf(" Regd. No. : %d\n",s.reg);
			printf("\tFather's Name : %s",s.fname);
			int c=0;
			for(i=0;s.fname[i]!='\0';i++)
			{
				c++;
			}
			for(i=1;i<=70;i++)
			{
				printf("%c",space);
			}
			if(c<4)
			{
				printf(" ");
				printf("Gender : %s\n",s.gender);
			}
			else
			{
				printf("Gender : %s\n",s.gender);
			}
		printf("\tMother's Name : %s\n",s.mname);
		printf("\tAddress : %s\n",s.address);
		printf("\tCourse : %s",s.course);
		break;
		}
	}
	fclose(fp);
	fp2=fopen("E:\\Exam.dat","rb");
	for(i=1;i<=3;i++)
	{
		printf("%c",nline);
	}
	while(fread(&e,sizeof(e),1,fp2)>0)
	{
		if(r== e.regd)
		{
			for(i=1;i<157;i++)
			{
				printf("_");
			}
			printf("\n\n");
			for(i=1;i<40;i++)
			{
				printf("%c",space);
			}
			printf("SUBJECT\t\t\tPASS MARK\tTOTAL MARK\t\tMARK SECURED\n");
			for(i=1;i<157;i++)
			{
				printf("_");
			}
			printf("\n");
			for(i=1;i<40;i++)
			{
				printf("%c",space);
			}
			printf("Physics\t\t\t %d\t\t %d\t\t\t %d\n",min,max,e.phy);
			for(i=1;i<40;i++)
			{
				printf("%c",space);
			}
			printf("Chemistry\t\t %d\t\t %d\t\t\t %d\n",min,max,e.che);
			for(i=1;i<40;i++)
			{
				printf("%c",space);
			}
			printf("Mathematics\t\t %d\t\t %d\t\t\t %d\n",min,max,e.maths);
			for(i=1;i<40;i++)
			{
				printf("%c",space);
			}
			printf("English\t\t\t %d\t\t %d\t\t\t %d\n",min,max,e.eng);
			for(i=1;i<40;i++)
			{
				printf("%c",space);
			}
			printf("Computer\t\t\t %d\t\t %d\t\t\t %d\n",min,max,e.comp);
			for(i=1;i<157;i++)
			{
				printf("_");
			}
			printf("\n");
			total=(e.phy+e.che+e.maths+e.eng+e.comp);
			perc=total/5;
			if(perc<40)
			{
				grade='F';
			}
			else if(perc>=40&&perc<50)
			{
				grade='D';
			}
			else if(perc>=50&&perc<60)
			{
				grade='C';
			}
			else if(perc>=60&&perc<70)
			{
				grade='B';
			}
			else if(perc>=70&&perc<80)
			{
				grade='A';
			}
			else if(perc>=80&&perc<90)
			{
				grade='E';
			}
			else
			{
				grade='O';
			}
			for(i=1;i<30;i++)
			{
				printf("%c",space);
			}
			printf("Total Marks Secured : %d\tout of 500\n",total);
			for(i=1;i<30;i++)
			{
				printf("%c",space);
			}
			printf("Percentage : %f\n",perc);
			for(i=1;i<30;i++)
			{
				printf("%c",space);
			}
			printf("Grade : %c\n",grade);
			break;
		}
	}
	fclose(fp2);
	printf("\n\nDate of Issue : 06 / 04 / 2019");
	for(i=1;i<87;i++)
	{
		printf("%c",space);
	}
	printf("\n");
	for(i=1;i<110;i++)
	{
		printf("%c",space);
	}
	printf("Chief Executive & Secretary");
	printf("\n\n\n");
	system("pause");
	exam_menu();
}
