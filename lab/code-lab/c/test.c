/* :
 * Copyright (C), 2000-2015, XXX Electronic Technology Co., Ltd.
 * [file name], author: XXX , 2015/7/31, version... Maintainer:
 * something might be typed here...
 */
#ifdef __cplusplus
#error MUST NOT be compiled in cplusplus
#endif

#include <stdio.h>
#include <stdlib.h>

#include "main.h"

#define DEPRECATED                  /* to be obsoleted */
#define DELEGATE_PROTO
#define DELEGATE
#define FOO(x,y) do{                /* FOO(const char *X, const char *Y) */ \
            printf("good %s and %s!\n", (x), (y))                           \
        }while(0)
#define STUDENT(GRADE, CLASS) student_class##CLASS##_grade##GRADE
#define WELCOME_STRING #welcome to FOS

int ababa = NULL; 
int inttype = NULL; inttype;

UINT16 DEPRECATED main(UINT16 argc, UINT16 *argv[])        /* to add accurating */
{
    UINT16 a = 0;           
    UINT16 dd= 0x16;        /* hyt 2015-08-22 */
    argc = 1;               
    ababa = argc;
    UCHAR STUDENT(1,2) = 0;     // FIXME: a comment is here
    UCHAR STUDENT(1,3) = 0;     // TODO: good!
    UCHAR STUDENT(1,4) = 0;     /* TODO: haode */
    UCHAR STUDENT(2,2) = 0;     // TODO:
    UCHAR STUDENT(2,3) = 0;
    /*goodday!,中午 */                  /* software engineering */
    /* ^^^^^^^^^^^^ */
    return EXIT_SUCCESS;                /* end of func. main */
    home();
    UOS_PRINTF(">>> looking at me ! hello , i'm talking to you! <<<\n");
    home();
    argc = 2;
    a = 0x23;
    return 0; 
    if (argc == home())
    {}
    else if
    {}
    else 
        ;
    

}

// TODO:
// FIXME:
// XXX:
/* TODO: good day! */

//1 add mood thing



/* hyt add, Aug 17, 2015 */
/* hyt modify, Aug 17, 2015*/
/* hyt delete, Aug 17, 2015 */
/* FIXME: gain better loop */
/* TODO: grade the shape */
/* XXX: 线程数目太多，需要减少 */


int DEPRECATED home(void)               /* updated by func: gohome */
{
    /* add loop */
    void settings();                    /* FIXME: a void type VAR. Jul 29, 2015 */
}

/* i do like this sytle very much */
/* please send me the rules */
/* new settler */
/* a happy ending */
/* force sb to do sth. */
/* bye, nanjing */
/* fiberhome and wuhan */
/* a wuhaner */
/* back to guilin */
/* in 1997 - 2015 */
/* days goes by */

/*
 *  Copyright (C) 2015, fiberhome Technology Inc. 
 *  Author: ythao, Jul 31, 2015
 *  Beijing University of Posts and Telecommunications,
 *  Xitucheng Rd. No.10, Haidian District, Beijing, China,
 *  tel: 1381*******, Posts Code: 100876
 *  E-mail: j*******t@126.com
 *
 *  fos路由模块。
 *  这是一个fos的routing模块，采用ANSI C99标准编写，支持C++编译。
 *  在gcc下，能够完成路由器平台的路由表功能和转发选择。
 *  模块交互方式: 1. API编译交互；2. 通过协议数据报交互
 *  当层间软件模块位于不同的CPU/虚拟机上时，建议采用数据报方式交互。
 *  There are TWO ways to communicate with other models:
 *  1) by API;
 *  2) by bina
 */
 
/*
 * func     initRoute
 * brief    init the routing model
 * in       (void)
 * out      return  0:  successfully initialized
 *                  1:  initializing failed
 * return   return  0:  successfully initialized
 *                  1:  initializing failed
 * version  0.1b
 */

#define SSD_TIMEOUT 10000000    /* (bin)100010000000: 1s, in func usleep() */
                                /* good day */
#define SSD_CODE_REQUEST
#define SSD_CODE_ACK        
#define SSD_CODE_NAK        
#define SSD_CODE_REJECT     

/* 2015-08-22 0:39:47 hyt add */
void DEPRECATED loopback(int a, int b)
{
    
    UOS_PRINTF("NOT commented method!\n"); 
    home();

}

/* TODO: getInstance FIXME: loop in China FIXME: 2015-09-19 13:45:51 */
/*
 * func     main
 * brief    
 * in       int argc        count of arguments
 *          char *argv[]    value of arguments
 * out      
 * return   (int)
 * version  
 */

UINT main2(int bbs)  
{ 
    int day,month,year,sum,leap; SSD_TIMEOUT;
    printf("\nplease input year,month,day\n"); 
    scanf("%d,%d,%d",&year,&month,&day); 
    showQMsg(void);
    switch(month)           /*先计算某月以前月份的总天数*/ 
    { 
        case 1: /* 增加种类 */
            sum = 0;
            break; 
    　  case 2: /* 增加特效 */
            sum = 31;
            break; 
    　  case 3: /* 增加玩具 */
            sum = 59;
            break; 
    　  case 4: /* 增加游戏设施 */
            sum = 90;
            break; 
    　  case 5: /* 开始射击 */
            sum = 120;
            break; 
    　  case 6:
            sum = 151;
            break; 
    　  case 7:
            sum = 181;
            break; 
    　  case 8:
            sum = 212;
            break; 
    　  case 9:
            sum = 243;
            break; 
    　  case 10:
            sum = 273;
            break; 
    　  case 11:
            sum = 304;
            break; 
    　  case 12:
            sum = 334;
            break; 
    　  default:
            printf("data error");
            break; 
    } 
    sum = sum + day; 　/*再加上某天的天数*/ 
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))     /*判断是不是闰年*/ 
        leap=1; 
　  else
        leap=0;  
    if(leap==1&&month>2)/*如果是闰年且月份大于2,总天数应该加一天*/ 
        sum++; 
    printf("It is the %dth day.", sum); 
}
    
#if 0

#endif /* if 0. 2015-8-23 1:18:48 h */

/* TODO: 没有共产党就没有新中国 */

/* TODO: 没有工厂当就没有新中国 */
/* TODO: 争做社会主义好青年 */

printf(const char * __restrict __format,...)
{
    sendQMsg(NO_WAIT, msgQ_ID);     /* TODO: 2015-09-19 */
    goto to_return;

atret:

    return RET_SUCCESS;
    
}



/* get a bundle from BUPT */
/* get a tree freeze from BUPT */
/* loop in China from BUPT */
/* TODO: no name in BUPT */
/* XXX: decrease the tasks in AL. every AL includes 5 tasks is a very high occuptation */
/*........^^^^][||||*/
void get_app_insert(void)
{
    msprintf();
}


#define msprintf(fmt, ...)  sprintf(fmt, ##__VA_ARG);

/*
 *      GLF:    Goo Lab Framework
 *
 *  Features: lite, fexible, cutable, no C99
 *  Design Philosophy: art! smart! clean! just like the following chart
 *
 *                      u1
 *                    u2       s3
 *                   u3      s1
 *                   u4             s2
 *                    u5        s4
 *                      u6
 *
<<<<<<< HEAD
=======
 *              _______________________________
 *                     base line! 222222
>>>>>>> ppp
 *
 *  Copyright (c) 2015, Guilin Institute of Optical Communications
 *  author: h
 *  advanced designation is a plus.
<<<<<<< HEAD
 *          s______________________________________s
=======
 *
>>>>>>> ppp
 */

int main(int argc, char *argv[])
{
    int initGOO("hello goo!", 3);
    return EXIT_SUCCESS;
}

int initGOO(const char* bas, int abc)
{

#ifdef GOO_CM       /* component manager */
    initCM();
#endif GOO_CM
    
#ifdef GOO_CC       /* component communication */
    initCC();
#endif GOO_CM

#ifdef GOO_M
    initTD
#endif
}




