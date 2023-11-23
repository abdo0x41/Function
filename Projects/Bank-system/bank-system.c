#include "bank-system.h"

typedef struct c_acc{ // customers account details.

	u8 user_name[20];
	u8 first_name[15];
	u8 mid_name[15];
	u8 last_name[15];
	u8 address[50];
	u32 national_id;
	u8 account_type[15];
	u8 password[20];
	u32 amount;

}account;


/**************************************/
/*****|  Functions Definitions   |*****/
/**************************************/


u8 check_init(void)
{
  FILE *checkinit = fopen("admin configuration file.bin", "rb");

  if(checkinit == NULL)
  {
    initial();
  }
  else return(0);

}

void initial(void)
{
	printf("\t\t\t\t\t\t\t%s\n\n\n", " WELCOME TO BRADA BANK SYSTEM....");
	printf("\t\t\t\t\t\t\t%s\n\n\n", "THIS INITIAL STAGE WILL SET FOR ONCE THIS IS ADMIN SIGNUP STAGE.");

	for(int i = 1; i <= 5; i++)
	{
		sleep(1);
	}
	system("clear");

	FILE *adminfile = fopen("admin configuration file.bin", "rb");

	if(adminfile == NULL)
	{
		adminfile = fopen("admin configuration file.bin", "wb");
	}

	u8 username[15], password[20];
	printf("%s", "user name:  ");
	scanf("%[^\n]", username);getchar();
	fwrite(username, sizeof(username), 1, adminfile);

	printf("%s", "password:  ");
	scanf("%[^\n]", password);getchar();
	fwrite(password, sizeof(password), 1, adminfile);

	fclose(adminfile);
}

void powerup(void)
{
	puts("\n\n\n\n\n\n\n\n");
	printf("%s\n", "\t\t\t\t\t\t\tSTARTING SYSTEM...");
	printf("%s", "\t\t\t\t\t\t\t");
	for(int i = 1; i <= 20; i++)
	{	
		sleep(1);
		printf("%s", "#");
	}
	system("clear");
}

u8 main_menu(u8 option)
{	
	printf("\n\n\n\n\t\t\t\t\t\t\t%s\n\n\n\n\n", "|===============> BRADA BANK <===============|");

	printf("%s","[1]- New Account.\n"
				"[2]- Check Account.\n"
				"[3]- Deposit.\n"
				"[4]- Withdraw.\n"
				"[5]- logout.\n"
				"[6]- Shutdown.\n");

	printf("%s", "~~>  ");
	scanf("%hhu", &option);

	return option;

}

bool login(void)
{
	u8 username[50];
	printf("%s", "UserName:  ");
	scanf("%[^\n]", username); getchar();

	u8 password[20];
	printf("%s","Password:  ");
	scanf("%[^\n]", password);getchar();

	FILE *file = fopen(strcpy(username, ".bin"), "r");

	if(fscanf(file, "%s", username)) return true;
	else return false;

}

void new_account(void)
{
	account add; u8 username[20];
	scanf("%[^\n]", username);
	
	FILE *file = fopen(strcat(username, ".bin"), "wb");

	fprintf(file, "Created at: Date: %s Time: %s\n\n", __DATE__, __TIME__);



	printf("%s", "User name:  ");
	scanf("%[^\n]s", add.user_name); getchar();
	fwrite(add.user_name, sizeof(add.user_name), 1,file);

	printf("%s", "First name:  ");
	scanf("%[^\n]s", add.first_name); getchar();
	fwrite(add.first_name, sizeof(add.first_name), 1,file);

	printf("%s", "Mid name:  ");
	scanf("%[^\n]s", add.mid_name); getchar();
	fwrite(add.mid_name, sizeof(add.mid_name), 1, file);

	printf("%s", "Last name:  "); 
	scanf("%[^\n]s", add.last_name); getchar();
	fwrite(add.last_name, sizeof(add.last_name),  1,file);

	printf("%s", "Address:  ");
	scanf("%[^\n]s", add.address);	getchar();
	fwrite(add.address, sizeof(add.address), 1,file);

	national_id:
	printf("%s", "national ID:  "); // national id must conatain 14 numbers
	scanf("%i", &add.national_id);  u8 counter = 0;  u32 q = add.national_id; 	
	while(q)
	{
		q/=10;
		counter++;
	}

	if(counter == 14) fwrite(&add.national_id, sizeof(add.national_id), 1, file);
	else 
	{
		system("clear");
		printf("\n\n%s", "!!! National ID must be 14 numbers !!!");
		goto national_id;
	}

	printf("%s", "Account Type:  ");
	scanf("%[^\n]s", add.account_type); getchar();
	fwrite(add.account_type, sizeof(add.account_type), 1, file);

	printf("%s", "Mount of money:  ");
	scanf("%u", &add.amount);
	fwrite(&add.amount, sizeof(add.amount), 1, file);

	printf("%s", "Password:  ");
	scanf("%s", add.password);
	fwrite(add.password, sizeof(add.password), 1, file);
	
	fclose(file);

}

u8 admin_mode(u8 option)
{
	printf("\n\n\n\n\t\t\t\t\t\t\t%s\n\n\n\n\n", "|===============> BRADA BANK <===============|");

	printf("%s","\t\t\t\t\t\t\t\t\t[1]- New Employee Account.\n"
				"\t\t\t\t\t\t\t\t\t[2]- Main Menu.\n"
				"\t\t\t\t\t\t\t\t\t[3]- logout.\n");

	printf("\t\t\t\t\t\t\t\t\t%s", "==$  ");
	scanf("%hhu", &option); getchar();

	return option;
	

}

void new_employee_account(void)
{

	printf("%s", "\n\n*** CREATE EMPLOYER ACCOUNT ***\n\n");
	
	account add; u8 *username, *fullname;
	printf("%s", "user name:  ");
	scanf("%s", username);
	FILE *file = fopen(strcat(username, ".bin"), "rb");

	if(!file) printf("Account is already existed.."); // do nothing
	else file = fopen(strcat(username, ".bin"), "wr");

	printf("%s", "first name:  ");
	scanf("%[^\n]", fullname);
	fprintf(file, "%s\n", fullname);

	printf("%s", "Adress:  ");
	scanf("%[^\n]", add.address);
	fprintf(file, "%s\n", add.address);

	printf("%s", "National ID:  ");
	scanf("%u", &add.national_id);
	fprintf(file, "%u\n", add.national_id);

	printf("%s", "Password:  ");
	scanf("%[^\n]", add.password);
	fprintf(file, "%s\n", add.password);

	fclose(file);

}

