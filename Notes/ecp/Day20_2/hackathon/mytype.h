#ifndef MYTYPE_H
#define MYTYPE_H

struct user{
    int user_id;
};

struct poll{
    int user_id;
};

struct question{
    int que_id;
};

struct vote{
    int vote_id;
};

enum umenu{
    ACC_MNG, U_POLL_MNG, L_POLL_MNG
};

enum ammenu{
    SIGNUP, SIGNIN, SIGNOUT
};

enum upmenu{
    ADDPOLL, EDITPOLL
};

enum lpmenu{
    LIST_POLLS, VOTE
};

#endif