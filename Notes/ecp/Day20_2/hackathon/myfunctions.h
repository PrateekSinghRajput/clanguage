#ifndef MYFUNCTIONS_H
#define MYFUNCTIONS_H

#include "mytype.h"


// functions for menus
enum umenu main_menu(void);

enum umenu acc_menu(void);
enum upmenu upoll_menu(void);
enum lpmenu lpoll_menu(void);

//acc mng functiuon
void sign_in(void);
void sign_up(void);
void sign_out(void);
void edit_profile(void);
void change_passward(void);

// user poll mng functions
void list_polls(void);
void add_poll(void);
void edit_poll(void);
void add_que(void);
void delete_que(void);
void edit_que(void);
void view_summary(void);
void view_result(void);

// live poll mng functions
void list_live_polls(void);
void vote_for_poll(void);
void report1(void);
void report2(void);
void report3(void);


#endif