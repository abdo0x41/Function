#include "bank-system.c"

void main(void)
{
  check_init();
  u8 option = 0;
  switch(admin_mode(option))
  {
    case 1: new_employee_account(); break;

    case 2: 
            u8 op = 0; scanf("%hhu", &op);
            switch(main_menu(op))
            {
              case 1: new_account(); break;

              // case 2: check_balance(); break;

              // case 3: deposite(); break;
              
              // case 4: withdraw(); break;
 
              case 5: logout(); break;

              case 6: exit(0); break;

              default: puts("!!! ENTER A VALID OPERATION !!!");

            }
            break;
    
    case 3: login(); break; // go to the login page.

    default: puts("!!! ENTER VALIED OPERATION !!!"); break;

  }

  

}// end main.