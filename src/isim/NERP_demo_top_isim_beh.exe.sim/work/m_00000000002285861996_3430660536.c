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
static const char *ng0 = "C:/Users/152/Downloads/BottleFlip/src/NERP_demo_top.v";
static int ng1[] = {1, 0};
static const char *ng2 = "output.txt";
static const char *ng3 = "w";
static int ng4[] = {0, 0};
static int ng5[] = {3, 0};
static unsigned int ng6[] = {0U, 0U};
static const char *ng7 = "0";
static unsigned int ng8[] = {1U, 0U};
static const char *ng9 = "1";
static unsigned int ng10[] = {2U, 0U};
static const char *ng11 = "2";
static unsigned int ng12[] = {3U, 0U};
static const char *ng13 = "3";
static unsigned int ng14[] = {4U, 0U};
static const char *ng15 = "4";
static unsigned int ng16[] = {5U, 0U};
static const char *ng17 = "5";
static unsigned int ng18[] = {6U, 0U};
static const char *ng19 = "6";
static unsigned int ng20[] = {7U, 0U};
static const char *ng21 = "7";
static const char *ng22 = "\n";
static const char *ng23 = "TB PRINTED %d-th frame";



static void Cont_44_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 7592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8488);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void Initial_113_1(char *t0)
{
    char t1[8];
    char *t2;
    char *t3;

LAB0:    xsi_set_current_line(113, ng0);

LAB2:    xsi_set_current_line(114, ng0);
    *((int *)t1) = xsi_vlogfile_file_open_of_cname_ctype(ng2, ng3);
    t2 = (t1 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 6192);
    xsi_vlogvar_assign_value(t3, t1, 0, 0, 32);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6672);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6032);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB1:    return;
}

static void Always_125_2(char *t0)
{
    char t7[8];
    char t15[8];
    char t23[8];
    char t26[8];
    char t28[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t27;
    char *t29;
    char *t30;
    int t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 8088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 8408);
    *((int *)t2) = 1;
    t3 = (t0 + 8120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(125, ng0);

LAB5:    xsi_set_current_line(127, ng0);
    xsi_set_current_line(127, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 6512);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB6:    t2 = (t0 + 6512);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 880);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t4, 32, t6, 32);
    t5 = (t7 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 6672);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 6672);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 6192);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng22, 1, t0);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 6192);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_fflush(0, *((unsigned int *)t4));
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 6672);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng23, 2, t0, (char)119, t4, 32);
    goto LAB2;

LAB7:    xsi_set_current_line(128, ng0);
    xsi_set_current_line(128, ng0);
    t13 = ((char*)((ng4)));
    t14 = (t0 + 6352);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);

LAB9:    t2 = (t0 + 6352);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 744);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t4, 32, t6, 32);
    t5 = (t7 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 6512);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 6512);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB6;

LAB10:    xsi_set_current_line(129, ng0);

LAB12:    xsi_set_current_line(130, ng0);
    t13 = (t0 + 4352U);
    t14 = *((char **)t13);
    t13 = (t0 + 4312U);
    t16 = (t13 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 6512);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t0 + 744);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    xsi_vlog_signed_multiply(t23, 32, t20, 32, t22, 32);
    t21 = (t0 + 6352);
    t24 = (t21 + 56U);
    t25 = *((char **)t24);
    memset(t26, 0, 8);
    xsi_vlog_signed_add(t26, 32, t23, 32, t25, 32);
    t27 = ((char*)((ng5)));
    memset(t28, 0, 8);
    xsi_vlog_signed_multiply(t28, 32, t26, 32, t27, 32);
    t29 = ((char*)((ng5)));
    xsi_vlog_get_indexed_partselect(t15, 3, t14, ((int*)(t17)), 2, t28, 32, 1, t29, 32, 1, 1);

LAB13:    t30 = ((char*)((ng6)));
    t31 = xsi_vlog_unsigned_case_compare(t15, 3, t30, 3);
    if (t31 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng8)));
    t31 = xsi_vlog_unsigned_case_compare(t15, 3, t2, 3);
    if (t31 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng10)));
    t31 = xsi_vlog_unsigned_case_compare(t15, 3, t2, 3);
    if (t31 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng12)));
    t31 = xsi_vlog_unsigned_case_compare(t15, 3, t2, 3);
    if (t31 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng14)));
    t31 = xsi_vlog_unsigned_case_compare(t15, 3, t2, 3);
    if (t31 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng16)));
    t31 = xsi_vlog_unsigned_case_compare(t15, 3, t2, 3);
    if (t31 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng18)));
    t31 = xsi_vlog_unsigned_case_compare(t15, 3, t2, 3);
    if (t31 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng20)));
    t31 = xsi_vlog_unsigned_case_compare(t15, 3, t2, 3);
    if (t31 == 1)
        goto LAB28;

LAB29:
LAB30:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 6352);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 6352);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB9;

LAB14:    xsi_set_current_line(131, ng0);
    t32 = (t0 + 6192);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    xsi_vlogfile_fwrite(*((unsigned int *)t34), 0, 0, 1, ng7, 1, t0);
    goto LAB30;

LAB16:    xsi_set_current_line(132, ng0);
    t3 = (t0 + 6192);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng9, 1, t0);
    goto LAB30;

LAB18:    xsi_set_current_line(133, ng0);
    t3 = (t0 + 6192);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng11, 1, t0);
    goto LAB30;

LAB20:    xsi_set_current_line(134, ng0);
    t3 = (t0 + 6192);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng13, 1, t0);
    goto LAB30;

LAB22:    xsi_set_current_line(135, ng0);
    t3 = (t0 + 6192);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng15, 1, t0);
    goto LAB30;

LAB24:    xsi_set_current_line(136, ng0);
    t3 = (t0 + 6192);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng17, 1, t0);
    goto LAB30;

LAB26:    xsi_set_current_line(137, ng0);
    t3 = (t0 + 6192);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng19, 1, t0);
    goto LAB30;

LAB28:    xsi_set_current_line(138, ng0);
    t3 = (t0 + 6192);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng21, 1, t0);
    goto LAB30;

}


extern void work_m_00000000002285861996_3430660536_init()
{
	static char *pe[] = {(void *)Cont_44_0,(void *)Initial_113_1,(void *)Always_125_2};
	xsi_register_didat("work_m_00000000002285861996_3430660536", "isim/NERP_demo_top_isim_beh.exe.sim/work/m_00000000002285861996_3430660536.didat");
	xsi_register_executes(pe);
}
