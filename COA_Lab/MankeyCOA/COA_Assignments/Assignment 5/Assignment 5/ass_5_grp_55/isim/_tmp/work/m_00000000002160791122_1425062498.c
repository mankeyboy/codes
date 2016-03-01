/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2007 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

/* This file is designed for use with ISim build 0xef153c89 */

#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "";
static const char *ng1 = " x0=%b x1=%b x2=%b x3=%b    a=%b b=%b c=%b d=%b e=%b f=%b g=%b";
static const char *ng2 = "C:/Users/student/Desktop/COA_Assignments/Assignment 5/ass_5_grp_55/testbench_m1.v";
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};

void M30_1(char *);
void M30_1(char *);


static void M30_1_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    t2 = xsi_vlog_time(t1, 1000000.000000000, 1000.000000000000);
    xsi_vlogfile_write(0, 0, ng0, 2, t0, (char)118, t1, 64);
    t3 = (t0 + 1316);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 1408);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t0 + 1500);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t0 + 1592);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t0 + 564U);
    t16 = *((char **)t15);
    t15 = (t0 + 652U);
    t17 = *((char **)t15);
    t15 = (t0 + 740U);
    t18 = *((char **)t15);
    t15 = (t0 + 828U);
    t19 = *((char **)t15);
    t15 = (t0 + 916U);
    t20 = *((char **)t15);
    t15 = (t0 + 1004U);
    t21 = *((char **)t15);
    t15 = (t0 + 1092U);
    t22 = *((char **)t15);
    xsi_vlogfile_write(1, 0, ng1, 12, t0, (char)118, t5, 1, (char)118, t8, 1, (char)118, t11, 1, (char)118, t14, 1, (char)118, t16, 1, (char)118, t17, 1, (char)118, t18, 1, (char)118, t19, 1, (char)118, t20, 1, (char)118, t21, 1, (char)118, t22, 1);

LAB1:    return;
}

static void I29_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 2068U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng2);

LAB4:    xsi_set_current_line(30, ng2);
    M30_1(t0);
    xsi_set_current_line(31, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1316);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(31, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(31, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1500);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(31, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1592);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(32, ng2);
    t2 = (t0 + 1984);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(32, ng2);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1316);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(32, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(32, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1500);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(32, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1592);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(33, ng2);
    t2 = (t0 + 1984);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(33, ng2);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1316);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(33, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(33, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1500);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(33, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1592);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(34, ng2);
    t2 = (t0 + 1984);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(34, ng2);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1316);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(34, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(34, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1500);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(34, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1592);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(35, ng2);
    t2 = (t0 + 1984);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(35, ng2);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1316);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(35, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(35, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1500);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(35, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1592);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(36, ng2);
    t2 = (t0 + 1984);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(36, ng2);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1316);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(36, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(36, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1500);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(36, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1592);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(37, ng2);
    t2 = (t0 + 1984);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(37, ng2);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1316);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(37, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(37, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1500);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(37, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1592);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(38, ng2);
    t2 = (t0 + 1984);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(38, ng2);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1316);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(38, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(38, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1500);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(38, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1592);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(39, ng2);
    t2 = (t0 + 1984);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(39, ng2);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1316);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(39, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(39, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1500);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(39, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1592);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(40, ng2);
    t2 = (t0 + 1984);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(40, ng2);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1316);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(40, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(40, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1500);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(40, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1592);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB1;

}

void M30_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 2112);
    t2 = (t0 + 2376);
    xsi_vlogfile_monitor((void *)M30_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000002160791122_1425062498_init()
{
	static char *pe[] = {(void *)I29_0,(void *)M30_1};
	xsi_register_didat("work_m_00000000002160791122_1425062498", "isim/_tmp/work/m_00000000002160791122_1425062498.didat");
	xsi_register_executes(pe);
}
