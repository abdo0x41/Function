#ifndef BANK_SYSTEM_H_
#define BANK_SYSTEM_H_

#include "std-types.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>


void initial(void); // Setup the system for once for Admin.
void powerup(void);  // initial phase starting Bank system.
u8 main_menu(u8 option);
bool login(void);// 
u8 admin_mode(u8 option); // super user
void new_employee_account(void);
void new_account(void);
void transaction(void);
void check_balance(void);
void intrest(void);
void deposite(void);
void withdraw(void);
void logout(void);


#endif