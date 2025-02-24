#ifndef __CHAT_SHARE_MEMORY_H__
#define __CHAT_SHARE_MEMORY_H__
#include <pthread.h>
#include <ncurses.h>
typedef struct chatInfo{
    char userlist[3][10];   //유저목록 
    int user_index;         //유저 인덱스용 변수   
    char messages[10][100]; //메세지 저장
    int message_index;      //메세지 인덱스용 변수
} CHAT_INFO;

#endif//__CHAT_SHARE_MEMORY_H__





