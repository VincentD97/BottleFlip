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
static const char *ng0 = "C:/Users/152/Downloads/BottleFlip/src/vga640x480.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {224U, 0U};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {244U, 0U};
static int ng7[] = {3, 0};
static unsigned int ng8[] = {248U, 0U};
static int ng9[] = {4, 0};
static unsigned int ng10[] = {146U, 0U};
static int ng11[] = {3, 0, 0, 0};



static int sp_code_to_rgb(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;

LAB0:    t0 = 1;
    xsi_set_current_line(192, ng0);

LAB2:    xsi_set_current_line(193, ng0);
    t3 = (t1 + 6384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t6, 32);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng7)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng9)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB12;

LAB13:
LAB15:
LAB14:    xsi_set_current_line(199, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t1 + 6224);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);

LAB16:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(194, ng0);
    t8 = ((char*)((ng2)));
    t9 = (t1 + 6224);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 8);
    goto LAB16;

LAB6:    xsi_set_current_line(195, ng0);
    t4 = ((char*)((ng4)));
    t6 = (t1 + 6224);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB16;

LAB8:    xsi_set_current_line(196, ng0);
    t4 = ((char*)((ng6)));
    t6 = (t1 + 6224);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB16;

LAB10:    xsi_set_current_line(197, ng0);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 6224);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB16;

LAB12:    xsi_set_current_line(198, ng0);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 6224);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB16;

}

static void Always_63_0(char *t0)
{
    char t6[8];
    char t30[8];
    char t34[8];
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
    char *t31;
    char *t32;
    char *t33;
    char *t35;

LAB0:    t1 = (t0 + 7304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 8864);
    *((int *)t2) = 1;
    t3 = (t0 + 7336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);

LAB5:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 4224U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
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

LAB11:    xsi_set_current_line(72, ng0);

LAB14:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 5904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1696);
    t7 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t7, 32, t5, 32);
    memset(t30, 0, 8);
    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB16;

LAB15:    t21 = (t6 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t4) < *((unsigned int *)t6))
        goto LAB17;

LAB18:    t28 = (t30 + 4);
    t9 = *((unsigned int *)t28);
    t10 = (~(t9));
    t11 = *((unsigned int *)t30);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(81, ng0);

LAB23:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 6064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1832);
    t7 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t7, 32, t5, 32);
    memset(t30, 0, 8);
    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB25;

LAB24:    t21 = (t6 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB25;

LAB28:    if (*((unsigned int *)t4) < *((unsigned int *)t6))
        goto LAB26;

LAB27:    t28 = (t30 + 4);
    t9 = *((unsigned int *)t28);
    t10 = (~(t9));
    t11 = *((unsigned int *)t30);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);

LAB31:
LAB22:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(67, ng0);

LAB13:    xsi_set_current_line(68, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 5904);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 10, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);
    goto LAB12;

LAB16:    t22 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t30) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(75, ng0);
    t29 = (t0 + 5904);
    t31 = (t29 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng3)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t32, 10, t33, 32);
    t35 = (t0 + 5904);
    xsi_vlogvar_wait_assign_value(t35, t34, 0, 0, 10, 0LL);
    goto LAB22;

LAB25:    t22 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB27;

LAB26:    *((unsigned int *)t30) = 1;
    goto LAB27;

LAB29:    xsi_set_current_line(84, ng0);
    t29 = (t0 + 6064);
    t31 = (t29 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng3)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t32, 10, t33, 32);
    t35 = (t0 + 6064);
    xsi_vlogvar_wait_assign_value(t35, t34, 0, 0, 10, 0LL);
    goto LAB31;

}

static void Cont_96_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t9[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;

LAB0:    t1 = (t0 + 7552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 5904);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1968);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t6) < *((unsigned int *)t8))
        goto LAB6;

LAB7:    memset(t4, 0, 8);
    t12 = (t9 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t9);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t12) != 0)
        goto LAB11;

LAB12:    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB13;

LAB14:    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t19) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t4) > 0)
        goto LAB19;

LAB20:    memcpy(t3, t28, 8);

LAB21:    t29 = (t0 + 9024);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t33, 0, 8);
    t34 = 1U;
    t35 = t34;
    t36 = (t3 + 4);
    t37 = *((unsigned int *)t3);
    t34 = (t34 & t37);
    t38 = *((unsigned int *)t36);
    t35 = (t35 & t38);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 | t34);
    t41 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t41 | t35);
    xsi_driver_vfirst_trans(t29, 0, 0);
    t42 = (t0 + 8880);
    *((int *)t42) = 1;

LAB1:    return;
LAB5:    t11 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t4) = 1;
    goto LAB12;

LAB11:    t18 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB12;

LAB13:    t23 = ((char*)((ng1)));
    goto LAB14;

LAB15:    t28 = ((char*)((ng3)));
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t3, 32, t23, 32, t28, 32);
    goto LAB21;

LAB19:    memcpy(t3, t23, 8);
    goto LAB21;

}

static void Cont_97_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t9[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;

LAB0:    t1 = (t0 + 7800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 6064);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2104);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t6) < *((unsigned int *)t8))
        goto LAB6;

LAB7:    memset(t4, 0, 8);
    t12 = (t9 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t9);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t12) != 0)
        goto LAB11;

LAB12:    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB13;

LAB14:    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t19) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t4) > 0)
        goto LAB19;

LAB20:    memcpy(t3, t28, 8);

LAB21:    t29 = (t0 + 9088);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t33, 0, 8);
    t34 = 1U;
    t35 = t34;
    t36 = (t3 + 4);
    t37 = *((unsigned int *)t3);
    t34 = (t34 & t37);
    t38 = *((unsigned int *)t36);
    t35 = (t35 & t38);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 | t34);
    t41 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t41 | t35);
    xsi_driver_vfirst_trans(t29, 0, 0);
    t42 = (t0 + 8896);
    *((int *)t42) = 1;

LAB1:    return;
LAB5:    t11 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t4) = 1;
    goto LAB12;

LAB11:    t18 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB12;

LAB13:    t23 = ((char*)((ng1)));
    goto LAB14;

LAB15:    t28 = ((char*)((ng3)));
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t3, 32, t23, 32, t28, 32);
    goto LAB21;

LAB19:    memcpy(t3, t23, 8);
    goto LAB21;

}

static void Cont_206_3(char *t0)
{
    char t7[16];
    char t8[16];
    char t14[16];
    char t15[16];
    char t18[16];
    char t19[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 8048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(206, ng0);
    t2 = (t0 + 5904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2376);
    t6 = *((char **)t5);
    xsi_vlog_unsigned_minus(t7, 33, t4, 10, t6, 32);
    t5 = ((char*)((ng5)));
    xsi_vlog_unsigned_rshift(t8, 33, t7, 33, t5, 32);
    t9 = (t0 + 6064);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 2784);
    t13 = *((char **)t12);
    xsi_vlog_unsigned_minus(t14, 33, t11, 10, t13, 32);
    t12 = ((char*)((ng5)));
    xsi_vlog_unsigned_rshift(t15, 33, t14, 33, t12, 32);
    t16 = (t0 + 744);
    t17 = *((char **)t16);
    xsi_vlog_unsigned_multiply(t18, 33, t15, 33, t17, 32);
    xsi_vlog_unsigned_add(t19, 33, t8, 33, t18, 33);
    t16 = (t0 + 9152);
    t20 = (t16 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    xsi_vlog_bit_copy(t23, 0, t19, 0, 33);
    xsi_driver_vfirst_trans(t16, 0, 32);
    t24 = (t0 + 8912);
    *((int *)t24) = 1;

LAB1:    return;
}

static void Cont_207_4(char *t0)
{
    char t7[8];
    char t10[8];
    char t27[8];
    char t30[8];
    char t38[8];
    char t70[8];
    char t87[8];
    char t90[8];
    char t107[8];
    char t110[8];
    char t118[8];
    char t150[8];
    char t158[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t88;
    char *t89;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t108;
    char *t109;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    int t142;
    int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    char *t157;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    char *t163;
    char *t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    char *t172;
    char *t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    int t182;
    int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    char *t190;
    char *t191;
    char *t192;
    char *t193;
    char *t194;
    unsigned int t195;
    unsigned int t196;
    char *t197;
    unsigned int t198;
    unsigned int t199;
    char *t200;
    unsigned int t201;
    unsigned int t202;
    char *t203;

LAB0:    t1 = (t0 + 8296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(207, ng0);
    t2 = (t0 + 6064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2784);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB5;

LAB4:    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t4) < *((unsigned int *)t6))
        goto LAB7;

LAB6:    *((unsigned int *)t7) = 1;

LAB7:    memset(t10, 0, 8);
    t11 = (t7 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t7);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t11) != 0)
        goto LAB11;

LAB12:    t18 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t18);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB13;

LAB14:    memcpy(t38, t10, 8);

LAB15:    memset(t70, 0, 8);
    t71 = (t38 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t38);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t71) != 0)
        goto LAB30;

LAB31:    t78 = (t70 + 4);
    t79 = *((unsigned int *)t70);
    t80 = *((unsigned int *)t78);
    t81 = (t79 || t80);
    if (t81 > 0)
        goto LAB32;

LAB33:    memcpy(t158, t70, 8);

LAB34:    t190 = (t0 + 9216);
    t191 = (t190 + 56U);
    t192 = *((char **)t191);
    t193 = (t192 + 56U);
    t194 = *((char **)t193);
    memset(t194, 0, 8);
    t195 = 1U;
    t196 = t195;
    t197 = (t158 + 4);
    t198 = *((unsigned int *)t158);
    t195 = (t195 & t198);
    t199 = *((unsigned int *)t197);
    t196 = (t196 & t199);
    t200 = (t194 + 4);
    t201 = *((unsigned int *)t194);
    *((unsigned int *)t194) = (t201 | t195);
    t202 = *((unsigned int *)t200);
    *((unsigned int *)t200) = (t202 | t196);
    xsi_driver_vfirst_trans(t190, 0, 0);
    t203 = (t0 + 8928);
    *((int *)t203) = 1;

LAB1:    return;
LAB5:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t10) = 1;
    goto LAB12;

LAB11:    t17 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB12;

LAB13:    t22 = (t0 + 6064);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t0 + 2920);
    t26 = *((char **)t25);
    memset(t27, 0, 8);
    t25 = (t24 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB17;

LAB16:    t28 = (t26 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB17;

LAB20:    if (*((unsigned int *)t24) < *((unsigned int *)t26))
        goto LAB18;

LAB19:    memset(t30, 0, 8);
    t31 = (t27 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t27);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t31) != 0)
        goto LAB23;

LAB24:    t39 = *((unsigned int *)t10);
    t40 = *((unsigned int *)t30);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t42 = (t10 + 4);
    t43 = (t30 + 4);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB15;

LAB17:    t29 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB19;

LAB18:    *((unsigned int *)t27) = 1;
    goto LAB19;

LAB21:    *((unsigned int *)t30) = 1;
    goto LAB24;

LAB23:    t37 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB24;

LAB25:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t38) = (t50 | t51);
    t52 = (t10 + 4);
    t53 = (t30 + 4);
    t54 = *((unsigned int *)t10);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t30);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t66 & t64);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t64);
    t69 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t69 & t65);
    goto LAB27;

LAB28:    *((unsigned int *)t70) = 1;
    goto LAB31;

LAB30:    t77 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB31;

LAB32:    t82 = (t0 + 5904);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    t85 = (t0 + 2376);
    t86 = *((char **)t85);
    memset(t87, 0, 8);
    t85 = (t84 + 4);
    if (*((unsigned int *)t85) != 0)
        goto LAB36;

LAB35:    t88 = (t86 + 4);
    if (*((unsigned int *)t88) != 0)
        goto LAB36;

LAB39:    if (*((unsigned int *)t84) < *((unsigned int *)t86))
        goto LAB38;

LAB37:    *((unsigned int *)t87) = 1;

LAB38:    memset(t90, 0, 8);
    t91 = (t87 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t87);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t91) != 0)
        goto LAB42;

LAB43:    t98 = (t90 + 4);
    t99 = *((unsigned int *)t90);
    t100 = *((unsigned int *)t98);
    t101 = (t99 || t100);
    if (t101 > 0)
        goto LAB44;

LAB45:    memcpy(t118, t90, 8);

LAB46:    memset(t150, 0, 8);
    t151 = (t118 + 4);
    t152 = *((unsigned int *)t151);
    t153 = (~(t152));
    t154 = *((unsigned int *)t118);
    t155 = (t154 & t153);
    t156 = (t155 & 1U);
    if (t156 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t151) != 0)
        goto LAB61;

LAB62:    t159 = *((unsigned int *)t70);
    t160 = *((unsigned int *)t150);
    t161 = (t159 & t160);
    *((unsigned int *)t158) = t161;
    t162 = (t70 + 4);
    t163 = (t150 + 4);
    t164 = (t158 + 4);
    t165 = *((unsigned int *)t162);
    t166 = *((unsigned int *)t163);
    t167 = (t165 | t166);
    *((unsigned int *)t164) = t167;
    t168 = *((unsigned int *)t164);
    t169 = (t168 != 0);
    if (t169 == 1)
        goto LAB63;

LAB64:
LAB65:    goto LAB34;

LAB36:    t89 = (t87 + 4);
    *((unsigned int *)t87) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB38;

LAB40:    *((unsigned int *)t90) = 1;
    goto LAB43;

LAB42:    t97 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB43;

LAB44:    t102 = (t0 + 5904);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    t105 = (t0 + 2512);
    t106 = *((char **)t105);
    memset(t107, 0, 8);
    t105 = (t104 + 4);
    if (*((unsigned int *)t105) != 0)
        goto LAB48;

LAB47:    t108 = (t106 + 4);
    if (*((unsigned int *)t108) != 0)
        goto LAB48;

LAB51:    if (*((unsigned int *)t104) < *((unsigned int *)t106))
        goto LAB49;

LAB50:    memset(t110, 0, 8);
    t111 = (t107 + 4);
    t112 = *((unsigned int *)t111);
    t113 = (~(t112));
    t114 = *((unsigned int *)t107);
    t115 = (t114 & t113);
    t116 = (t115 & 1U);
    if (t116 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t111) != 0)
        goto LAB54;

LAB55:    t119 = *((unsigned int *)t90);
    t120 = *((unsigned int *)t110);
    t121 = (t119 & t120);
    *((unsigned int *)t118) = t121;
    t122 = (t90 + 4);
    t123 = (t110 + 4);
    t124 = (t118 + 4);
    t125 = *((unsigned int *)t122);
    t126 = *((unsigned int *)t123);
    t127 = (t125 | t126);
    *((unsigned int *)t124) = t127;
    t128 = *((unsigned int *)t124);
    t129 = (t128 != 0);
    if (t129 == 1)
        goto LAB56;

LAB57:
LAB58:    goto LAB46;

LAB48:    t109 = (t107 + 4);
    *((unsigned int *)t107) = 1;
    *((unsigned int *)t109) = 1;
    goto LAB50;

LAB49:    *((unsigned int *)t107) = 1;
    goto LAB50;

LAB52:    *((unsigned int *)t110) = 1;
    goto LAB55;

LAB54:    t117 = (t110 + 4);
    *((unsigned int *)t110) = 1;
    *((unsigned int *)t117) = 1;
    goto LAB55;

LAB56:    t130 = *((unsigned int *)t118);
    t131 = *((unsigned int *)t124);
    *((unsigned int *)t118) = (t130 | t131);
    t132 = (t90 + 4);
    t133 = (t110 + 4);
    t134 = *((unsigned int *)t90);
    t135 = (~(t134));
    t136 = *((unsigned int *)t132);
    t137 = (~(t136));
    t138 = *((unsigned int *)t110);
    t139 = (~(t138));
    t140 = *((unsigned int *)t133);
    t141 = (~(t140));
    t142 = (t135 & t137);
    t143 = (t139 & t141);
    t144 = (~(t142));
    t145 = (~(t143));
    t146 = *((unsigned int *)t124);
    *((unsigned int *)t124) = (t146 & t144);
    t147 = *((unsigned int *)t124);
    *((unsigned int *)t124) = (t147 & t145);
    t148 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t148 & t144);
    t149 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t149 & t145);
    goto LAB58;

LAB59:    *((unsigned int *)t150) = 1;
    goto LAB62;

LAB61:    t157 = (t150 + 4);
    *((unsigned int *)t150) = 1;
    *((unsigned int *)t157) = 1;
    goto LAB62;

LAB63:    t170 = *((unsigned int *)t158);
    t171 = *((unsigned int *)t164);
    *((unsigned int *)t158) = (t170 | t171);
    t172 = (t70 + 4);
    t173 = (t150 + 4);
    t174 = *((unsigned int *)t70);
    t175 = (~(t174));
    t176 = *((unsigned int *)t172);
    t177 = (~(t176));
    t178 = *((unsigned int *)t150);
    t179 = (~(t178));
    t180 = *((unsigned int *)t173);
    t181 = (~(t180));
    t182 = (t175 & t177);
    t183 = (t179 & t181);
    t184 = (~(t182));
    t185 = (~(t183));
    t186 = *((unsigned int *)t164);
    *((unsigned int *)t164) = (t186 & t184);
    t187 = *((unsigned int *)t164);
    *((unsigned int *)t164) = (t187 & t185);
    t188 = *((unsigned int *)t158);
    *((unsigned int *)t158) = (t188 & t184);
    t189 = *((unsigned int *)t158);
    *((unsigned int *)t158) = (t189 & t185);
    goto LAB65;

}

static void Always_208_5(char *t0)
{
    char t11[8];
    char t18[16];
    char t36[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;

LAB0:    t1 = (t0 + 8544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(208, ng0);
    t2 = (t0 + 8944);
    *((int *)t2) = 1;
    t3 = (t0 + 8576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(209, ng0);

LAB5:    xsi_set_current_line(211, ng0);
    t4 = (t0 + 5024U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(220, ng0);

LAB13:    xsi_set_current_line(221, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(222, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(223, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(211, ng0);

LAB9:    xsi_set_current_line(212, ng0);
    t12 = (t0 + 4704U);
    t13 = *((char **)t12);
    t12 = (t0 + 4664U);
    t14 = (t12 + 72U);
    t15 = *((char **)t14);
    t16 = (t0 + 4864U);
    t17 = *((char **)t16);
    t16 = ((char*)((ng11)));
    xsi_vlog_unsigned_multiply(t18, 33, t17, 33, t16, 32);
    t19 = ((char*)((ng7)));
    xsi_vlog_get_indexed_partselect(t11, 3, t13, ((int*)(t15)), 2, t18, 33, 2, t19, 32, 1, 1);
    t20 = (t0 + 8352);
    t21 = (t0 + 3432);
    t22 = xsi_create_subprogram_invocation(t20, 0, t0, t21, 0, 0);
    t23 = (t0 + 6384);
    xsi_vlogvar_assign_value(t23, t11, 0, 0, 3);

LAB10:    t24 = (t0 + 8448);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB12;

LAB11:    t25 = (t0 + 8448);
    t33 = *((char **)t25);
    t25 = (t0 + 6224);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    memcpy(t36, t35, 8);
    t37 = (t0 + 3432);
    t38 = (t0 + 8352);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    t40 = (t0 + 5744);
    xsi_vlogvar_assign_value(t40, t36, 0, 0, 2);
    t41 = (t0 + 5584);
    xsi_vlogvar_assign_value(t41, t36, 2, 0, 3);
    t42 = (t0 + 5424);
    xsi_vlogvar_assign_value(t42, t36, 5, 0, 3);
    goto LAB8;

LAB12:    t24 = (t0 + 8544U);
    *((char **)t24) = &&LAB10;
    goto LAB1;

}


extern void work_m_00000000001296375722_1857521895_init()
{
	static char *pe[] = {(void *)Always_63_0,(void *)Cont_96_1,(void *)Cont_97_2,(void *)Cont_206_3,(void *)Cont_207_4,(void *)Always_208_5};
	static char *se[] = {(void *)sp_code_to_rgb};
	xsi_register_didat("work_m_00000000001296375722_1857521895", "isim/tb_isim_beh.exe.sim/work/m_00000000001296375722_1857521895.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
