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
static const char *ng0 = "C:/Users/152/Downloads/0226/fsm.v";
static unsigned int ng1[] = {83U, 0U};
static unsigned int ng2[] = {209U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {10, 0};
static int ng5[] = {50, 0};
static int ng6[] = {70, 0};
static int ng7[] = {3, 0};
static unsigned int ng8[] = {5U, 0U};
static const char *ng9 = "baseX = %d    baseY = %d";
static const char *ng10 = "i: %d,   layout: %b,   layout[i - 1]: %b";
static int ng11[] = {1, 0};
static unsigned int ng12[] = {0U, 0U};
static int ng13[] = {40, 0};
static int ng14[] = {8, 0};
static const char *ng15 = "last CX: %d,    tmp: %d";
static int ng16[] = {32, 0};
static unsigned int ng17[] = {20U, 0U};
static unsigned int ng18[] = {15U, 0U};
static unsigned int ng19[] = {1U, 0U};
static int ng20[] = {2, 0};



static int sp_colorscheme(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;

LAB0:    t0 = 1;
    xsi_set_current_line(51, ng0);
    t3 = (t1 + 5800);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB2;

LAB3:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 5960);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 9);

LAB4:    t0 = 0;

LAB1:    return t0;
LAB2:    xsi_set_current_line(51, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t1 + 5960);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 9);
    goto LAB4;

}

static int sp_layout_to_xy(char *t1, char *t2)
{
    char t8[8];
    char t14[8];
    char t38[16];
    char t39[8];
    char t61[8];
    char t74[8];
    char t75[8];
    char t92[8];
    char t93[8];
    char t94[16];
    char t102[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    int t86;
    char *t87;
    int t88;
    int t89;
    int t90;
    int t91;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t113;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2096);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(63, ng0);

LAB5:    xsi_set_current_line(64, ng0);
    t5 = (t1 + 6120);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t1 + 6120);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t8, 32, t7, t11, 2, t12, 32, 1);
    t13 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t15 = (t8 + 4);
    t16 = (t13 + 4);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t16);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB9;

LAB6:    if (t26 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t14) = 1;

LAB9:    t30 = (t14 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (~(t31));
    t33 = *((unsigned int *)t14);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(67, ng0);

LAB14:    xsi_set_current_line(68, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 5160);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(69, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 5320);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);

LAB12:    xsi_set_current_line(72, ng0);
    xsi_set_current_line(72, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 5640);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB15:    t4 = (t1 + 5640);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t17 = *((unsigned int *)t9);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB16;

LAB17:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB8:    t29 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(64, ng0);

LAB13:    xsi_set_current_line(65, ng0);
    t36 = ((char*)((ng4)));
    t37 = (t1 + 5160);
    xsi_vlogvar_assign_value(t37, t36, 0, 0, 8);
    xsi_set_current_line(66, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 5320);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB12;

LAB16:    xsi_set_current_line(72, ng0);

LAB18:    xsi_set_current_line(73, ng0);
    t10 = (t1 + 5640);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_signed_equal(t14, 32, t12, 32, t13, 32);
    t15 = (t14 + 4);
    t22 = *((unsigned int *)t15);
    t23 = (~(t22));
    t24 = *((unsigned int *)t14);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(76, ng0);

LAB28:    xsi_set_current_line(77, ng0);
    t4 = (t1 + 5640);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 6120);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 6120);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t15 = (t1 + 6120);
    t16 = (t15 + 72U);
    t29 = *((char **)t16);
    t30 = (t1 + 5640);
    t36 = (t30 + 56U);
    t37 = *((char **)t36);
    t40 = ((char*)((ng11)));
    memset(t14, 0, 8);
    xsi_vlog_signed_minus(t14, 32, t37, 32, t40, 32);
    xsi_vlog_generic_get_index_select_value(t8, 1, t13, t29, 2, t14, 32, 1);
    t41 = (t1 + 2096);
    xsi_vlogfile_write(1, 0, 0, ng10, 4, t41, (char)119, t6, 32, (char)118, t10, 2, (char)118, t8, 1);
    xsi_set_current_line(78, ng0);
    t4 = (t1 + 6120);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 6120);
    t9 = (t7 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 5640);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t15 = ((char*)((ng11)));
    memset(t14, 0, 8);
    xsi_vlog_signed_minus(t14, 32, t13, 32, t15, 32);
    xsi_vlog_generic_get_index_select_value(t8, 1, t6, t10, 2, t14, 32, 1);
    t16 = ((char*)((ng12)));
    memset(t39, 0, 8);
    t29 = (t8 + 4);
    t30 = (t16 + 4);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t16);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t29);
    t21 = *((unsigned int *)t30);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t29);
    t25 = *((unsigned int *)t30);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB32;

LAB29:    if (t26 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t39) = 1;

LAB32:    t37 = (t39 + 4);
    t31 = *((unsigned int *)t37);
    t32 = (~(t31));
    t33 = *((unsigned int *)t39);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(80, ng0);

LAB37:    xsi_set_current_line(81, ng0);
    t4 = (t1 + 5000);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 5000);
    t9 = (t7 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 5000);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t15 = (t1 + 5640);
    t16 = (t15 + 56U);
    t29 = *((char **)t16);
    t30 = ((char*)((ng11)));
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 32, t29, 32, t30, 32);
    xsi_vlog_generic_get_array_select_value(t38, 41, t6, t10, t13, 2, 1, t8, 32, 1);
    t36 = (t1 + 5000);
    t37 = (t36 + 72U);
    t40 = *((char **)t37);
    t41 = ((char*)((ng13)));
    t42 = ((char*)((ng14)));
    xsi_vlog_get_indexed_partselect(t14, 8, t38, ((int*)(t40)), 2, t41, 32, 1, t42, 32, 1, 0);
    t43 = (t1 + 4680);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t1 + 4680);
    t47 = (t46 + 72U);
    t48 = *((char **)t47);
    t49 = (t1 + 4680);
    t50 = (t49 + 64U);
    t51 = *((char **)t50);
    t52 = (t1 + 5640);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = ((char*)((ng11)));
    memset(t61, 0, 8);
    xsi_vlog_signed_minus(t61, 32, t54, 32, t55, 32);
    xsi_vlog_generic_get_array_select_value(t39, 8, t45, t48, t51, 2, 1, t61, 32, 1);
    memset(t74, 0, 8);
    xsi_vlog_unsigned_minus(t74, 8, t14, 8, t39, 8);
    t56 = (t1 + 5480);
    xsi_vlogvar_assign_value(t56, t74, 0, 0, 8);

LAB35:    xsi_set_current_line(83, ng0);
    t4 = (t1 + 5000);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 5000);
    t9 = (t7 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 5000);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t15 = (t1 + 5640);
    t16 = (t15 + 56U);
    t29 = *((char **)t16);
    t30 = ((char*)((ng11)));
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 32, t29, 32, t30, 32);
    xsi_vlog_generic_get_array_select_value(t38, 41, t6, t10, t13, 2, 1, t8, 32, 1);
    t36 = (t1 + 5000);
    t37 = (t36 + 72U);
    t40 = *((char **)t37);
    t41 = ((char*)((ng13)));
    t42 = ((char*)((ng14)));
    xsi_vlog_get_indexed_partselect(t14, 8, t38, ((int*)(t40)), 2, t41, 32, 1, t42, 32, 1, 0);
    t43 = (t1 + 5480);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t1 + 2096);
    xsi_vlogfile_write(1, 0, 0, ng15, 3, t46, (char)118, t14, 8, (char)118, t45, 8);
    xsi_set_current_line(84, ng0);
    t4 = (t1 + 6280);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 6280);
    t9 = (t7 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 5640);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_index_select_value(t8, 1, t6, t10, 2, t13, 32, 1);
    t15 = (t2 + 56U);
    t16 = *((char **)t15);
    t29 = (t1 + 1664);
    t30 = xsi_create_subprogram_invocation(t16, 0, t1, t29, 0, t2);
    t36 = (t1 + 5800);
    xsi_vlogvar_assign_value(t36, t8, 0, 0, 1);

LAB38:    t37 = (t2 + 64U);
    t40 = *((char **)t37);
    t41 = (t40 + 80U);
    t42 = *((char **)t41);
    t43 = (t42 + 272U);
    t44 = *((char **)t43);
    t45 = (t44 + 0U);
    t46 = *((char **)t45);
    t57 = ((int  (*)(char *, char *))t46)(t1, t40);
    if (t57 != 0)
        goto LAB40;

LAB39:    t40 = (t2 + 64U);
    t47 = *((char **)t40);
    t40 = (t1 + 5960);
    t48 = (t40 + 56U);
    t49 = *((char **)t48);
    memcpy(t14, t49, 8);
    t50 = (t1 + 1664);
    t51 = (t2 + 56U);
    t52 = *((char **)t51);
    xsi_delete_subprogram_invocation(t50, t47, t1, t52, t2);
    t53 = ((char*)((ng8)));
    t54 = ((char*)((ng8)));
    t55 = (t1 + 5000);
    t56 = (t55 + 56U);
    t58 = *((char **)t56);
    t59 = (t1 + 5000);
    t60 = (t59 + 72U);
    t62 = *((char **)t60);
    t63 = (t1 + 5000);
    t64 = (t63 + 64U);
    t65 = *((char **)t64);
    t66 = (t1 + 5640);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng11)));
    memset(t39, 0, 8);
    xsi_vlog_signed_minus(t39, 32, t68, 32, t69, 32);
    xsi_vlog_generic_get_array_select_value(t94, 41, t58, t62, t65, 2, 1, t39, 32, 1);
    t70 = (t1 + 5000);
    t71 = (t70 + 72U);
    t72 = *((char **)t71);
    t73 = ((char*)((ng16)));
    t76 = ((char*)((ng14)));
    xsi_vlog_get_indexed_partselect(t61, 8, t94, ((int*)(t72)), 2, t73, 32, 1, t76, 32, 1, 0);
    t77 = (t1 + 4680);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    t80 = (t1 + 4680);
    t81 = (t80 + 72U);
    t82 = *((char **)t81);
    t83 = (t1 + 4680);
    t84 = (t83 + 64U);
    t85 = *((char **)t84);
    t87 = (t1 + 5640);
    t95 = (t87 + 56U);
    t96 = *((char **)t95);
    t97 = ((char*)((ng11)));
    memset(t75, 0, 8);
    xsi_vlog_signed_minus(t75, 32, t96, 32, t97, 32);
    xsi_vlog_generic_get_array_select_value(t74, 8, t79, t82, t85, 2, 1, t75, 32, 1);
    memset(t92, 0, 8);
    xsi_vlog_unsigned_minus(t92, 8, t61, 8, t74, 8);
    t98 = (t1 + 5480);
    t99 = (t98 + 56U);
    t100 = *((char **)t99);
    xsi_vlogtype_concat(t38, 41, 41, 5U, t100, 8, t92, 8, t54, 8, t53, 8, t14, 9);
    t101 = (t1 + 5000);
    t103 = (t1 + 5000);
    t104 = (t103 + 72U);
    t105 = *((char **)t104);
    t106 = (t1 + 5000);
    t107 = (t106 + 64U);
    t108 = *((char **)t107);
    t109 = (t1 + 5640);
    t110 = (t109 + 56U);
    t111 = *((char **)t110);
    xsi_vlog_generic_convert_array_indices(t93, t102, t105, t108, 2, 1, t111, 32, 1);
    t112 = (t93 + 4);
    t17 = *((unsigned int *)t112);
    t86 = (!(t17));
    t113 = (t102 + 4);
    t18 = *((unsigned int *)t113);
    t88 = (!(t18));
    t89 = (t86 && t88);
    if (t89 == 1)
        goto LAB41;

LAB42:
LAB21:    xsi_set_current_line(72, ng0);
    t4 = (t1 + 5640);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng11)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 5640);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB15;

LAB19:    xsi_set_current_line(73, ng0);

LAB22:    xsi_set_current_line(74, ng0);
    t16 = (t1 + 6280);
    t29 = (t16 + 56U);
    t30 = *((char **)t29);
    t36 = (t1 + 6280);
    t37 = (t36 + 72U);
    t40 = *((char **)t37);
    t41 = (t1 + 5640);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    xsi_vlog_generic_get_index_select_value(t39, 1, t30, t40, 2, t43, 32, 1);
    t44 = (t2 + 56U);
    t45 = *((char **)t44);
    t46 = (t1 + 1664);
    t47 = xsi_create_subprogram_invocation(t45, 0, t1, t46, 0, t2);
    t48 = (t1 + 5800);
    xsi_vlogvar_assign_value(t48, t39, 0, 0, 1);

LAB23:    t49 = (t2 + 64U);
    t50 = *((char **)t49);
    t51 = (t50 + 80U);
    t52 = *((char **)t51);
    t53 = (t52 + 272U);
    t54 = *((char **)t53);
    t55 = (t54 + 0U);
    t56 = *((char **)t55);
    t57 = ((int  (*)(char *, char *))t56)(t1, t50);
    if (t57 != 0)
        goto LAB25;

LAB24:    t50 = (t2 + 64U);
    t58 = *((char **)t50);
    t50 = (t1 + 5960);
    t59 = (t50 + 56U);
    t60 = *((char **)t59);
    memcpy(t61, t60, 8);
    t62 = (t1 + 1664);
    t63 = (t2 + 56U);
    t64 = *((char **)t63);
    xsi_delete_subprogram_invocation(t62, t58, t1, t64, t2);
    t65 = ((char*)((ng8)));
    t66 = ((char*)((ng8)));
    t67 = (t1 + 5320);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    t70 = (t1 + 5160);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    xsi_vlogtype_concat(t38, 41, 41, 5U, t72, 8, t69, 8, t66, 8, t65, 8, t61, 9);
    t73 = (t1 + 5000);
    t76 = (t1 + 5000);
    t77 = (t76 + 72U);
    t78 = *((char **)t77);
    t79 = (t1 + 5000);
    t80 = (t79 + 64U);
    t81 = *((char **)t80);
    t82 = (t1 + 5640);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    xsi_vlog_generic_convert_array_indices(t74, t75, t78, t81, 2, 1, t84, 32, 1);
    t85 = (t74 + 4);
    t27 = *((unsigned int *)t85);
    t86 = (!(t27));
    t87 = (t75 + 4);
    t28 = *((unsigned int *)t87);
    t88 = (!(t28));
    t89 = (t86 && t88);
    if (t89 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(75, ng0);
    t4 = (t1 + 5160);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 5320);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 2096);
    xsi_vlogfile_write(1, 0, 0, ng9, 3, t11, (char)118, t6, 8, (char)118, t10, 8);
    goto LAB21;

LAB25:    t49 = (t2 + 48U);
    *((char **)t49) = &&LAB23;
    goto LAB1;

LAB26:    t31 = *((unsigned int *)t74);
    t32 = *((unsigned int *)t75);
    t90 = (t31 - t32);
    t91 = (t90 + 1);
    xsi_vlogvar_assign_value(t73, t38, 0, *((unsigned int *)t75), t91);
    goto LAB27;

LAB31:    t36 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(78, ng0);

LAB36:    xsi_set_current_line(79, ng0);
    t40 = (t1 + 5000);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = (t1 + 5000);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = (t1 + 5000);
    t47 = (t46 + 64U);
    t48 = *((char **)t47);
    t49 = (t1 + 5640);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng11)));
    memset(t61, 0, 8);
    xsi_vlog_signed_minus(t61, 32, t51, 32, t52, 32);
    xsi_vlog_generic_get_array_select_value(t38, 41, t42, t45, t48, 2, 1, t61, 32, 1);
    t53 = (t1 + 5000);
    t54 = (t53 + 72U);
    t55 = *((char **)t54);
    t56 = ((char*)((ng13)));
    t58 = ((char*)((ng14)));
    xsi_vlog_get_indexed_partselect(t74, 8, t38, ((int*)(t55)), 2, t56, 32, 1, t58, 32, 1, 0);
    t59 = (t1 + 4680);
    t60 = (t59 + 56U);
    t62 = *((char **)t60);
    t63 = (t1 + 4680);
    t64 = (t63 + 72U);
    t65 = *((char **)t64);
    t66 = (t1 + 4680);
    t67 = (t66 + 64U);
    t68 = *((char **)t67);
    t69 = (t1 + 5640);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    t72 = ((char*)((ng11)));
    memset(t92, 0, 8);
    xsi_vlog_signed_minus(t92, 32, t71, 32, t72, 32);
    xsi_vlog_generic_get_array_select_value(t75, 8, t62, t65, t68, 2, 1, t92, 32, 1);
    memset(t93, 0, 8);
    xsi_vlog_unsigned_add(t93, 8, t74, 8, t75, 8);
    t73 = (t1 + 5480);
    xsi_vlogvar_assign_value(t73, t93, 0, 0, 8);
    goto LAB35;

LAB40:    t37 = (t2 + 48U);
    *((char **)t37) = &&LAB38;
    goto LAB1;

LAB41:    t19 = *((unsigned int *)t93);
    t20 = *((unsigned int *)t102);
    t90 = (t19 - t20);
    t91 = (t90 + 1);
    xsi_vlogvar_assign_value(t101, t38, 0, *((unsigned int *)t102), t91);
    goto LAB42;

}

static int sp_reset(char *t1, char *t2)
{
    char t7[8];
    char t8[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;
    char *t19;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2528);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(96, ng0);

LAB5:    xsi_set_current_line(97, ng0);
    t5 = ((char*)((ng17)));
    t6 = (t1 + 4680);
    t9 = (t1 + 4680);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 4680);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng11)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t11, t14, 2, 1, t15, 32, 1);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t8 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(98, ng0);
    t4 = ((char*)((ng18)));
    t5 = (t1 + 4680);
    t6 = (t1 + 4680);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 4680);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(99, ng0);
    t4 = ((char*)((ng19)));
    t5 = (t1 + 4520);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(100, ng0);
    t4 = ((char*)((ng19)));
    t5 = (t1 + 4840);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(101, ng0);
    t4 = (t1 + 4520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 4840);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t15, &&LAB10);
    t16 = (t2 + 56U);
    t19 = *((char **)t16);
    t27 = (t1 + 2096);
    t28 = xsi_create_subprogram_invocation(t19, 0, t1, t27, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t27, t28);
    t29 = (t1 + 6120);
    xsi_vlogvar_assign_value(t29, t6, 0, 0, 2);
    t30 = (t1 + 6280);
    xsi_vlogvar_assign_value(t30, t11, 0, 0, 3);

LAB12:    t31 = (t2 + 64U);
    t32 = *((char **)t31);
    t33 = (t32 + 80U);
    t34 = *((char **)t33);
    t35 = (t34 + 272U);
    t36 = *((char **)t35);
    t37 = (t36 + 0U);
    t38 = *((char **)t37);
    t18 = ((int  (*)(char *, char *))t38)(t1, t32);
    if (t18 == -1)
        goto LAB13;

LAB14:    if (t18 != 0)
        goto LAB15;

LAB10:    t32 = (t1 + 2096);
    xsi_vlog_subprogram_popinvocation(t32);

LAB11:    t39 = (t2 + 64U);
    t40 = *((char **)t39);
    t39 = (t1 + 2096);
    t41 = (t2 + 56U);
    t42 = *((char **)t41);
    xsi_delete_subprogram_invocation(t39, t40, t1, t42, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t6, t5, 0, *((unsigned int *)t8), t26);
    goto LAB7;

LAB8:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t8), t26);
    goto LAB9;

LAB13:    t0 = -1;
    goto LAB1;

LAB15:    t31 = (t2 + 48U);
    *((char **)t31) = &&LAB12;
    goto LAB1;

}

static void Cont_46_0(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 7200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 5000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 5000);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 5000);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t5, 41, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 8640);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_bit_copy(t17, 0, t5, 0, 41);
    xsi_driver_vfirst_trans(t13, 0, 40);
    t18 = (t0 + 8512);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_47_1(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 7448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 5000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 5000);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 5000);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng11)));
    xsi_vlog_generic_get_array_select_value(t5, 41, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 8704);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_bit_copy(t17, 0, t5, 0, 41);
    xsi_driver_vfirst_trans(t13, 0, 40);
    t18 = (t0 + 8528);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_48_2(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 7696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 5000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 5000);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 5000);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng20)));
    xsi_vlog_generic_get_array_select_value(t5, 41, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 8768);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_bit_copy(t17, 0, t5, 0, 41);
    xsi_driver_vfirst_trans(t13, 0, 40);
    t18 = (t0 + 8544);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_105_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
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
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 7944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 8560);
    *((int *)t2) = 1;
    t3 = (t0 + 7976);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(105, ng0);

LAB5:    xsi_set_current_line(106, ng0);
    t4 = (t0 + 4360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = (t0 + 744);
    t8 = *((char **)t7);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t8, 32);
    if (t9 == 1)
        goto LAB7;

LAB8:
LAB9:    goto LAB2;

LAB7:    xsi_set_current_line(107, ng0);
    t7 = (t0 + 7752);
    t10 = (t0 + 2528);
    t11 = xsi_create_subprogram_invocation(t7, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);

LAB12:    t12 = (t0 + 7848);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t20 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB14:    if (t20 != 0)
        goto LAB15;

LAB10:    t13 = (t0 + 2528);
    xsi_vlog_subprogram_popinvocation(t13);

LAB11:    t21 = (t0 + 7848);
    t22 = *((char **)t21);
    t21 = (t0 + 2528);
    t23 = (t0 + 7752);
    t24 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t0, t23, t24);
    goto LAB9;

LAB13:;
LAB15:    t12 = (t0 + 7944U);
    *((char **)t12) = &&LAB12;
    goto LAB1;

}

static void Initial_112_4(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(112, ng0);

LAB2:    xsi_set_current_line(113, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 4360);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);

LAB1:    return;
}


extern void work_m_00000000003918417358_2030911003_init()
{
	static char *pe[] = {(void *)Cont_46_0,(void *)Cont_47_1,(void *)Cont_48_2,(void *)Always_105_3,(void *)Initial_112_4};
	static char *se[] = {(void *)sp_colorscheme,(void *)sp_layout_to_xy,(void *)sp_reset};
	xsi_register_didat("work_m_00000000003918417358_2030911003", "isim/tb_isim_beh.exe.sim/work/m_00000000003918417358_2030911003.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
