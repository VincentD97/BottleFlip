/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/152/Downloads/BottleFlip/src/random.v";
static int ng1[] = {0, 0};
static int ng2[] = {879387228, 0};
static int ng3[] = {1, 0};
static int ng4[] = {1103515245, 0};
static int ng5[] = {12345, 0};
static unsigned int ng6[] = {2147483647U, 0U};



static int sp_rand(char *t1, char *t2)
{
    char t7[8];
    char t31[8];
    char t32[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;

LAB0:    t0 = 1;
    xsi_set_current_line(13, ng0);

LAB2:    xsi_set_current_line(14, ng0);
    t3 = (t1 + 1880);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB6;

LAB3:    if (t19 != 0)
        goto LAB5;

LAB4:    *((unsigned int *)t7) = 1;

LAB6:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB7;

LAB8:
LAB9:    xsi_set_current_line(15, ng0);
    t3 = (t1 + 1720);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 32, t5, 32, t6, 32);
    t8 = ((char*)((ng5)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t7, 32, t8, 32);
    t9 = ((char*)((ng6)));
    t10 = *((unsigned int *)t31);
    t11 = *((unsigned int *)t9);
    t12 = (t10 & t11);
    *((unsigned int *)t32) = t12;
    t22 = (t31 + 4);
    t23 = (t9 + 4);
    t29 = (t32 + 4);
    t13 = *((unsigned int *)t22);
    t14 = *((unsigned int *)t23);
    t15 = (t13 | t14);
    *((unsigned int *)t29) = t15;
    t16 = *((unsigned int *)t29);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB11;

LAB12:
LAB13:    t43 = (t1 + 1720);
    xsi_vlogvar_assign_value(t43, t32, 0, 0, 32);
    xsi_set_current_line(16, ng0);
    t3 = (t1 + 1720);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 2040);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    t0 = 0;

LAB1:    return t0;
LAB5:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB6;

LAB7:    xsi_set_current_line(14, ng0);

LAB10:    xsi_set_current_line(14, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t1 + 1720);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 32);
    xsi_set_current_line(14, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t1 + 1880);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB9;

LAB11:    t18 = *((unsigned int *)t32);
    t19 = *((unsigned int *)t29);
    *((unsigned int *)t32) = (t18 | t19);
    t30 = (t31 + 4);
    t33 = (t9 + 4);
    t20 = *((unsigned int *)t31);
    t21 = (~(t20));
    t24 = *((unsigned int *)t30);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (~(t26));
    t28 = *((unsigned int *)t33);
    t34 = (~(t28));
    t35 = (t21 & t25);
    t36 = (t27 & t34);
    t37 = (~(t35));
    t38 = (~(t36));
    t39 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t39 & t37);
    t40 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t40 & t38);
    t41 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t41 & t37);
    t42 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t42 & t38);
    goto LAB13;

}

static void Initial_6_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(6, ng0);

LAB2:    xsi_set_current_line(7, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1720);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(8, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1880);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}


extern void work_m_00000000002880294338_1906350187_init()
{
	static char *pe[] = {(void *)Initial_6_0};
	static char *se[] = {(void *)sp_rand};
	xsi_register_didat("work_m_00000000002880294338_1906350187", "isim/tb_isim_beh.exe.sim/work/m_00000000002880294338_1906350187.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
