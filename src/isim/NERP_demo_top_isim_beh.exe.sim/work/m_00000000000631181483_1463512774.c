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
static const char *ng0 = "C:/Users/152/Downloads/BottleFlip/src/segdisplay.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {127U, 0U};
static unsigned int ng3[] = {15U, 0U};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {72U, 0U};
static unsigned int ng6[] = {7U, 0U};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {11U, 0U};
static unsigned int ng10[] = {2U, 0U};
static unsigned int ng11[] = {76U, 0U};
static unsigned int ng12[] = {13U, 0U};
static unsigned int ng13[] = {3U, 0U};
static unsigned int ng14[] = {12U, 0U};
static unsigned int ng15[] = {14U, 0U};



static void Always_47_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;

LAB0:    t1 = (t0 + 5160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 5480);
    *((int *)t2) = 1;
    t3 = (t0 + 5192);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 3520U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(59, ng0);

LAB14:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 4240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB15:    t5 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t30 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng10)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t30 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng13)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t30 == 1)
        goto LAB22;

LAB23:
LAB24:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(51, ng0);

LAB13:    xsi_set_current_line(52, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 3920);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 7, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4080);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(62, ng0);

LAB25:    xsi_set_current_line(63, ng0);
    t7 = ((char*)((ng5)));
    t8 = (t0 + 3920);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 7, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4080);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB24;

LAB18:    xsi_set_current_line(68, ng0);

LAB26:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 3920);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 7, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4080);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB24;

LAB20:    xsi_set_current_line(74, ng0);

LAB27:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 3920);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 7, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4080);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB24;

LAB22:    xsi_set_current_line(80, ng0);

LAB28:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 3920);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 7, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4080);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB24;

}


extern void work_m_00000000000631181483_1463512774_init()
{
	static char *pe[] = {(void *)Always_47_0};
	xsi_register_didat("work_m_00000000000631181483_1463512774", "isim/NERP_demo_top_isim_beh.exe.sim/work/m_00000000000631181483_1463512774.didat");
	xsi_register_executes(pe);
}
