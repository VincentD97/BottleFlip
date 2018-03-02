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
static const char *ng0 = "C:/Users/152/Downloads/BottleFlip/src/fsm.v";
static unsigned int ng1[] = {83U, 0U};
static unsigned int ng2[] = {209U, 0U};
static unsigned int ng3[] = {10340U, 0U};
static unsigned int ng4[] = {5220U, 0U};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static int ng8[] = {1, 0};
static int ng9[] = {32, 0};
static int ng10[] = {8, 0};
static int ng11[] = {40, 0};
static const char *ng12 = "dy = %d";
static int ng13[] = {2, 0};
static unsigned int ng14[] = {15U, 0U};
static unsigned int ng15[] = {1U, 0U};
static unsigned int ng16[] = {3U, 0U};
static unsigned int ng17[] = {7U, 0U};
static int ng18[] = {13, 0};
static int ng19[] = {7, 0};
static int ng20[] = {15, 0};
static const char *ng21 = "random %d";
static unsigned int ng22[] = {127U, 0U};
static const char *ng23 = "init state: layout = %b, color = %b, dist = %b, %b";
static unsigned int ng24[] = {13U, 0U};
static const char *ng25 = "next layout is %d based on prev layout %d";
static const char *ng26 = "baseX = %d, baseY = %d, nbX = %d, nbY = %d";
static const char *ng27 = "diffX = %d, diffY = %d";
static const char *ng28 = "prev state: layout = %b, color = %b, dist = %d, %d";
static const char *ng29 = "new state: layout = %b, color = %b, dist = %d, %d";



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
    xsi_set_current_line(56, ng0);
    t3 = (t1 + 14152);
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

LAB3:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 14312);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 9);

LAB4:    t0 = 0;

LAB1:    return t0;
LAB2:    xsi_set_current_line(56, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t1 + 14312);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 9);
    goto LAB4;

}

static int sp_s_dist(char *t1, char *t2)
{
    char t12[8];
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
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    t0 = 1;
    xsi_set_current_line(77, ng0);
    t3 = (t1 + 14472);
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

LAB3:    xsi_set_current_line(77, ng0);
    t3 = (t1 + 14632);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 14792);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);

LAB4:    t0 = 0;

LAB1:    return t0;
LAB2:    xsi_set_current_line(77, ng0);
    t13 = (t1 + 14632);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_unary_minus(t12, 8, t15, 8);
    t16 = (t1 + 14792);
    xsi_vlogvar_assign_value(t16, t12, 0, 0, 8);
    goto LAB4;

}

static int sp_base(char *t1, char *t2)
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
    xsi_set_current_line(80, ng0);
    t3 = (t1 + 14952);
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

LAB3:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t1 + 15112);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);

LAB4:    t0 = 0;

LAB1:    return t0;
LAB2:    xsi_set_current_line(80, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t1 + 15112);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 16);
    goto LAB4;

}

static int sp_last8bits(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t0 = 1;
    xsi_set_current_line(85, ng0);
    t3 = (t1 + 15272);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 15432);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    t7 = (t1 + 15592);
    xsi_vlogvar_assign_value(t7, t5, 8, 0, 8);
    t0 = 0;

LAB1:    return t0;
}

static int sp_layout_to_xy(char *t1, char *t2)
{
    char t8[8];
    char t34[8];
    char t44[16];
    char t45[8];
    char t54[8];
    char t67[8];
    char t68[8];
    char t89[16];
    char t91[8];
    char t93[8];
    char t97[16];
    char t108[8];
    char t109[8];
    char t118[8];
    char t126[8];
    char t127[8];
    char t138[8];
    char t140[8];
    char t159[8];
    char t163[8];
    char t165[8];
    char t166[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
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
    int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    int t80;
    char *t81;
    unsigned int t82;
    int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    int t87;
    int t88;
    char *t90;
    char *t92;
    char *t94;
    char *t95;
    char *t96;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;
    char *t128;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    char *t134;
    char *t135;
    char *t136;
    char *t137;
    char *t139;
    char *t141;
    char *t142;
    char *t143;
    char *t144;
    char *t145;
    char *t146;
    char *t147;
    char *t148;
    char *t149;
    char *t150;
    char *t151;
    char *t152;
    char *t153;
    char *t154;
    char *t155;
    char *t156;
    char *t157;
    char *t158;
    char *t160;
    char *t161;
    char *t162;
    char *t164;
    char *t167;
    char *t168;
    char *t169;
    char *t170;
    char *t171;
    char *t172;
    char *t173;
    char *t174;
    char *t175;
    char *t176;
    char *t177;
    int t178;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 5568);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(90, ng0);

LAB5:    xsi_set_current_line(91, ng0);
    t5 = (t1 + 15752);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t9 = (t8 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t9) = t16;
    t17 = (t2 + 56U);
    t18 = *((char **)t17);
    t19 = (t1 + 4704);
    t20 = xsi_create_subprogram_invocation(t18, 0, t1, t19, 0, t2);
    t21 = (t1 + 14952);
    xsi_vlogvar_assign_value(t21, t8, 0, 0, 1);

LAB6:    t22 = (t2 + 64U);
    t23 = *((char **)t22);
    t24 = (t23 + 80U);
    t25 = *((char **)t24);
    t26 = (t25 + 272U);
    t27 = *((char **)t26);
    t28 = (t27 + 0U);
    t29 = *((char **)t28);
    t30 = ((int  (*)(char *, char *))t29)(t1, t23);
    if (t30 != 0)
        goto LAB8;

LAB7:    t23 = (t2 + 64U);
    t31 = *((char **)t23);
    t23 = (t1 + 15112);
    t32 = (t23 + 56U);
    t33 = *((char **)t32);
    memcpy(t34, t33, 8);
    t35 = (t1 + 4704);
    t36 = (t2 + 56U);
    t37 = *((char **)t36);
    xsi_delete_subprogram_invocation(t35, t31, t1, t37, t2);
    t38 = (t1 + 11272);
    xsi_vlogvar_assign_value(t38, t34, 0, 0, 8);
    t39 = (t1 + 10952);
    xsi_vlogvar_assign_value(t39, t34, 8, 0, 8);
    xsi_set_current_line(93, ng0);
    xsi_set_current_line(93, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 12392);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB9:    t4 = (t1 + 12392);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2512);
    t9 = *((char **)t7);
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t9, 32);
    t7 = (t8 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB10;

LAB11:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB8:    t22 = (t2 + 48U);
    *((char **)t22) = &&LAB6;
    goto LAB1;

LAB10:    xsi_set_current_line(93, ng0);

LAB12:    xsi_set_current_line(94, ng0);
    t10 = (t1 + 12392);
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng5)));
    memset(t34, 0, 8);
    xsi_vlog_signed_equal(t34, 32, t18, 32, t19, 32);
    t20 = (t34 + 4);
    t16 = *((unsigned int *)t20);
    t40 = (~(t16));
    t41 = *((unsigned int *)t34);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(96, ng0);

LAB22:    xsi_set_current_line(97, ng0);
    t4 = (t1 + 15912);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 15912);
    t9 = (t7 + 72U);
    t10 = *((char **)t9);
    t17 = (t1 + 12392);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_get_index_select_value(t8, 1, t6, t10, 2, t19, 32, 1);
    t20 = (t2 + 56U);
    t21 = *((char **)t20);
    t22 = (t1 + 3840);
    t23 = xsi_create_subprogram_invocation(t21, 0, t1, t22, 0, t2);
    t24 = (t1 + 14152);
    xsi_vlogvar_assign_value(t24, t8, 0, 0, 1);

LAB23:    t25 = (t2 + 64U);
    t26 = *((char **)t25);
    t27 = (t26 + 80U);
    t28 = *((char **)t27);
    t29 = (t28 + 272U);
    t31 = *((char **)t29);
    t32 = (t31 + 0U);
    t33 = *((char **)t32);
    t30 = ((int  (*)(char *, char *))t33)(t1, t26);
    if (t30 != 0)
        goto LAB25;

LAB24:    t26 = (t2 + 64U);
    t35 = *((char **)t26);
    t26 = (t1 + 14312);
    t36 = (t26 + 56U);
    t37 = *((char **)t36);
    memcpy(t34, t37, 8);
    t38 = (t1 + 3840);
    t39 = (t2 + 56U);
    t46 = *((char **)t39);
    xsi_delete_subprogram_invocation(t38, t35, t1, t46, t2);
    t47 = ((char*)((ng6)));
    t48 = ((char*)((ng7)));
    t49 = (t1 + 10632);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = (t1 + 10632);
    t53 = (t52 + 72U);
    t55 = *((char **)t53);
    t56 = (t1 + 10632);
    t57 = (t56 + 64U);
    t58 = *((char **)t57);
    t59 = (t1 + 12392);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = ((char*)((ng8)));
    memset(t45, 0, 8);
    xsi_vlog_signed_minus(t45, 32, t61, 32, t62, 32);
    xsi_vlog_generic_get_array_select_value(t89, 41, t51, t55, t58, 2, 1, t45, 32, 1);
    t63 = (t1 + 10632);
    t64 = (t63 + 72U);
    t65 = *((char **)t64);
    t66 = ((char*)((ng9)));
    t69 = ((char*)((ng10)));
    xsi_vlog_get_indexed_partselect(t54, 8, t89, ((int*)(t65)), 2, t66, 32, 1, t69, 32, 1, 0);
    t70 = (t1 + 10312);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t73 = (t1 + 10312);
    t74 = (t73 + 72U);
    t75 = *((char **)t74);
    t76 = (t1 + 12392);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    t81 = ((char*)((ng10)));
    memset(t68, 0, 8);
    xsi_vlog_signed_multiply(t68, 32, t78, 32, t81, 32);
    t90 = ((char*)((ng8)));
    memset(t91, 0, 8);
    xsi_vlog_signed_minus(t91, 32, t68, 32, t90, 32);
    t92 = ((char*)((ng10)));
    xsi_vlog_get_indexed_partselect(t67, 8, t72, ((int*)(t75)), 2, t91, 32, 1, t92, 32, 1, 0);
    memset(t93, 0, 8);
    xsi_vlog_unsigned_minus(t93, 8, t54, 8, t67, 8);
    t94 = (t1 + 10632);
    t95 = (t94 + 56U);
    t96 = *((char **)t95);
    t98 = (t1 + 10632);
    t99 = (t98 + 72U);
    t100 = *((char **)t99);
    t101 = (t1 + 10632);
    t102 = (t101 + 64U);
    t103 = *((char **)t102);
    t104 = (t1 + 12392);
    t105 = (t104 + 56U);
    t106 = *((char **)t105);
    t107 = ((char*)((ng8)));
    memset(t108, 0, 8);
    xsi_vlog_signed_minus(t108, 32, t106, 32, t107, 32);
    xsi_vlog_generic_get_array_select_value(t97, 41, t96, t100, t103, 2, 1, t108, 32, 1);
    t110 = (t1 + 10632);
    t111 = (t110 + 72U);
    t112 = *((char **)t111);
    t113 = ((char*)((ng11)));
    t114 = ((char*)((ng10)));
    xsi_vlog_get_indexed_partselect(t109, 8, t97, ((int*)(t112)), 2, t113, 32, 1, t114, 32, 1, 0);
    t115 = (t1 + 15752);
    t116 = (t115 + 56U);
    t117 = *((char **)t116);
    t119 = (t1 + 15752);
    t120 = (t119 + 72U);
    t121 = *((char **)t120);
    t122 = (t1 + 12392);
    t123 = (t122 + 56U);
    t124 = *((char **)t123);
    t125 = ((char*)((ng8)));
    memset(t126, 0, 8);
    xsi_vlog_signed_minus(t126, 32, t124, 32, t125, 32);
    xsi_vlog_generic_get_index_select_value(t118, 1, t117, t121, 2, t126, 32, 1);
    t128 = (t1 + 10312);
    t129 = (t128 + 56U);
    t130 = *((char **)t129);
    t131 = (t1 + 10312);
    t132 = (t131 + 72U);
    t133 = *((char **)t132);
    t134 = (t1 + 12392);
    t135 = (t134 + 56U);
    t136 = *((char **)t135);
    t137 = ((char*)((ng10)));
    memset(t138, 0, 8);
    xsi_vlog_signed_multiply(t138, 32, t136, 32, t137, 32);
    t139 = ((char*)((ng8)));
    memset(t140, 0, 8);
    xsi_vlog_signed_minus(t140, 32, t138, 32, t139, 32);
    t141 = ((char*)((ng10)));
    xsi_vlog_get_indexed_partselect(t127, 8, t130, ((int*)(t133)), 2, t140, 32, 1, t141, 32, 1, 0);
    t142 = (t2 + 56U);
    t143 = *((char **)t142);
    t144 = (t1 + 4272);
    t145 = xsi_create_subprogram_invocation(t143, 0, t1, t144, 0, t2);
    t146 = (t1 + 14472);
    xsi_vlogvar_assign_value(t146, t118, 0, 0, 1);
    t147 = (t1 + 14632);
    xsi_vlogvar_assign_value(t147, t127, 0, 0, 8);

LAB26:    t148 = (t2 + 64U);
    t149 = *((char **)t148);
    t150 = (t149 + 80U);
    t151 = *((char **)t150);
    t152 = (t151 + 272U);
    t153 = *((char **)t152);
    t154 = (t153 + 0U);
    t155 = *((char **)t154);
    t80 = ((int  (*)(char *, char *))t155)(t1, t149);
    if (t80 != 0)
        goto LAB28;

LAB27:    t149 = (t2 + 64U);
    t156 = *((char **)t149);
    t149 = (t1 + 14792);
    t157 = (t149 + 56U);
    t158 = *((char **)t157);
    memcpy(t159, t158, 8);
    t160 = (t1 + 4272);
    t161 = (t2 + 56U);
    t162 = *((char **)t161);
    xsi_delete_subprogram_invocation(t160, t156, t1, t162, t2);
    memset(t163, 0, 8);
    xsi_vlog_unsigned_add(t163, 8, t109, 8, t159, 8);
    xsi_vlogtype_concat(t44, 41, 41, 5U, t163, 8, t93, 8, t48, 8, t47, 8, t34, 9);
    t164 = (t1 + 10632);
    t167 = (t1 + 10632);
    t168 = (t167 + 72U);
    t169 = *((char **)t168);
    t170 = (t1 + 10632);
    t171 = (t170 + 64U);
    t172 = *((char **)t171);
    t173 = (t1 + 12392);
    t174 = (t173 + 56U);
    t175 = *((char **)t174);
    xsi_vlog_generic_convert_array_indices(t165, t166, t169, t172, 2, 1, t175, 32, 1);
    t176 = (t165 + 4);
    t11 = *((unsigned int *)t176);
    t83 = (!(t11));
    t177 = (t166 + 4);
    t12 = *((unsigned int *)t177);
    t84 = (!(t12));
    t87 = (t83 && t84);
    if (t87 == 1)
        goto LAB29;

LAB30:
LAB15:    xsi_set_current_line(93, ng0);
    t4 = (t1 + 12392);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng8)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 12392);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB9;

LAB13:    xsi_set_current_line(94, ng0);

LAB16:    xsi_set_current_line(95, ng0);
    t21 = (t1 + 15912);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t1 + 15912);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = (t1 + 12392);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_generic_get_index_select_value(t45, 1, t23, t26, 2, t29, 32, 1);
    t31 = (t2 + 56U);
    t32 = *((char **)t31);
    t33 = (t1 + 3840);
    t35 = xsi_create_subprogram_invocation(t32, 0, t1, t33, 0, t2);
    t36 = (t1 + 14152);
    xsi_vlogvar_assign_value(t36, t45, 0, 0, 1);

LAB17:    t37 = (t2 + 64U);
    t38 = *((char **)t37);
    t39 = (t38 + 80U);
    t46 = *((char **)t39);
    t47 = (t46 + 272U);
    t48 = *((char **)t47);
    t49 = (t48 + 0U);
    t50 = *((char **)t49);
    t30 = ((int  (*)(char *, char *))t50)(t1, t38);
    if (t30 != 0)
        goto LAB19;

LAB18:    t38 = (t2 + 64U);
    t51 = *((char **)t38);
    t38 = (t1 + 14312);
    t52 = (t38 + 56U);
    t53 = *((char **)t52);
    memcpy(t54, t53, 8);
    t55 = (t1 + 3840);
    t56 = (t2 + 56U);
    t57 = *((char **)t56);
    xsi_delete_subprogram_invocation(t55, t51, t1, t57, t2);
    t58 = ((char*)((ng6)));
    t59 = ((char*)((ng7)));
    t60 = (t1 + 11272);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    t63 = (t1 + 10952);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    xsi_vlogtype_concat(t44, 41, 41, 5U, t65, 8, t62, 8, t59, 8, t58, 8, t54, 9);
    t66 = (t1 + 10632);
    t69 = (t1 + 10632);
    t70 = (t69 + 72U);
    t71 = *((char **)t70);
    t72 = (t1 + 10632);
    t73 = (t72 + 64U);
    t74 = *((char **)t73);
    t75 = (t1 + 12392);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    xsi_vlog_generic_convert_array_indices(t67, t68, t71, t74, 2, 1, t77, 32, 1);
    t78 = (t67 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (!(t79));
    t81 = (t68 + 4);
    t82 = *((unsigned int *)t81);
    t83 = (!(t82));
    t84 = (t80 && t83);
    if (t84 == 1)
        goto LAB20;

LAB21:    goto LAB15;

LAB19:    t37 = (t2 + 48U);
    *((char **)t37) = &&LAB17;
    goto LAB1;

LAB20:    t85 = *((unsigned int *)t67);
    t86 = *((unsigned int *)t68);
    t87 = (t85 - t86);
    t88 = (t87 + 1);
    xsi_vlogvar_assign_value(t66, t44, 0, *((unsigned int *)t68), t88);
    goto LAB21;

LAB25:    t25 = (t2 + 48U);
    *((char **)t25) = &&LAB23;
    goto LAB1;

LAB28:    t148 = (t2 + 48U);
    *((char **)t148) = &&LAB26;
    goto LAB1;

LAB29:    t13 = *((unsigned int *)t165);
    t14 = *((unsigned int *)t166);
    t88 = (t13 - t14);
    t178 = (t88 + 1);
    xsi_vlogvar_assign_value(t164, t44, 0, *((unsigned int *)t166), t178);
    goto LAB30;

}

static int sp_shift_xy(char *t1, char *t2)
{
    char t9[8];
    char t18[16];
    char t28[8];
    char t37[8];
    char t39[8];
    char t40[8];
    char t50[8];
    char t51[8];
    char t52[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
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
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    unsigned int t59;
    int t60;
    char *t61;
    unsigned int t62;
    int t63;
    int t64;
    char *t65;
    unsigned int t66;
    int t67;
    int t68;
    char *t69;
    unsigned int t70;
    int t71;
    int t72;
    char *t73;
    unsigned int t74;
    int t75;
    int t76;
    unsigned int t77;
    int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    int t85;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 6000);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(107, ng0);

LAB5:    xsi_set_current_line(108, ng0);
    xsi_set_current_line(108, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t1 + 12392);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB6:    t4 = (t1 + 12392);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2512);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t6, 32, t8, 32);
    t7 = (t9 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB7;

LAB8:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(108, ng0);

LAB9:    xsi_set_current_line(109, ng0);
    t15 = (t1 + 10632);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t19 = (t1 + 10632);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t1 + 10632);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t1 + 12392);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_get_array_select_value(t18, 41, t17, t21, t24, 2, 1, t27, 32, 1);
    t29 = (t1 + 10632);
    t30 = (t29 + 72U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng11)));
    t33 = ((char*)((ng10)));
    xsi_vlog_get_indexed_partselect(t28, 8, t18, ((int*)(t31)), 2, t32, 32, 1, t33, 32, 1, 0);
    t34 = (t1 + 16072);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 8, t28, 8, t36, 8);
    t38 = (t1 + 10632);
    t41 = (t1 + 10632);
    t42 = (t41 + 72U);
    t43 = *((char **)t42);
    t44 = (t1 + 10632);
    t45 = (t44 + 64U);
    t46 = *((char **)t45);
    t47 = (t1 + 12392);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    xsi_vlog_generic_convert_array_indices(t39, t40, t43, t46, 2, 1, t49, 32, 1);
    t53 = (t1 + 10632);
    t54 = (t53 + 72U);
    t55 = *((char **)t54);
    t56 = ((char*)((ng11)));
    t57 = ((char*)((ng10)));
    xsi_vlog_convert_indexed_partindices(t50, t51, t52, ((int*)(t55)), 2, t56, 32, 1, t57, 32, 1, 0);
    t58 = (t39 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (!(t59));
    t61 = (t40 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (!(t62));
    t64 = (t60 && t63);
    t65 = (t50 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (!(t66));
    t68 = (t64 && t67);
    t69 = (t51 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (!(t70));
    t72 = (t68 && t71);
    t73 = (t52 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (!(t74));
    t76 = (t72 && t75);
    if (t76 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(110, ng0);
    t4 = (t1 + 10632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 10632);
    t8 = (t7 + 72U);
    t15 = *((char **)t8);
    t16 = (t1 + 10632);
    t17 = (t16 + 64U);
    t19 = *((char **)t17);
    t20 = (t1 + 12392);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_array_select_value(t18, 41, t6, t15, t19, 2, 1, t22, 32, 1);
    t23 = (t1 + 10632);
    t24 = (t23 + 72U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng9)));
    t27 = ((char*)((ng10)));
    xsi_vlog_get_indexed_partselect(t9, 8, t18, ((int*)(t25)), 2, t26, 32, 1, t27, 32, 1, 0);
    t29 = (t1 + 16232);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t28, 0, 8);
    xsi_vlog_unsigned_add(t28, 8, t9, 8, t31, 8);
    t32 = (t1 + 10632);
    t33 = (t1 + 10632);
    t34 = (t33 + 72U);
    t35 = *((char **)t34);
    t36 = (t1 + 10632);
    t38 = (t36 + 64U);
    t41 = *((char **)t38);
    t42 = (t1 + 12392);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    xsi_vlog_generic_convert_array_indices(t37, t39, t35, t41, 2, 1, t44, 32, 1);
    t45 = (t1 + 10632);
    t46 = (t45 + 72U);
    t47 = *((char **)t46);
    t48 = ((char*)((ng9)));
    t49 = ((char*)((ng10)));
    xsi_vlog_convert_indexed_partindices(t40, t50, t51, ((int*)(t47)), 2, t48, 32, 1, t49, 32, 1, 0);
    t53 = (t37 + 4);
    t10 = *((unsigned int *)t53);
    t60 = (!(t10));
    t54 = (t39 + 4);
    t11 = *((unsigned int *)t54);
    t63 = (!(t11));
    t64 = (t60 && t63);
    t55 = (t40 + 4);
    t12 = *((unsigned int *)t55);
    t67 = (!(t12));
    t68 = (t64 && t67);
    t56 = (t50 + 4);
    t13 = *((unsigned int *)t56);
    t71 = (!(t13));
    t72 = (t68 && t71);
    t57 = (t51 + 4);
    t14 = *((unsigned int *)t57);
    t75 = (!(t14));
    t76 = (t72 && t75);
    if (t76 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(108, ng0);
    t4 = (t1 + 12392);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng8)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 12392);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB6;

LAB10:    t77 = *((unsigned int *)t52);
    t78 = (t77 + 0);
    t79 = *((unsigned int *)t40);
    t80 = *((unsigned int *)t51);
    t81 = (t79 + t80);
    t82 = *((unsigned int *)t50);
    t83 = *((unsigned int *)t51);
    t84 = (t82 - t83);
    t85 = (t84 + 1);
    xsi_vlogvar_assign_value(t38, t37, t78, t81, t85);
    goto LAB11;

LAB12:    t59 = *((unsigned int *)t51);
    t78 = (t59 + 0);
    t62 = *((unsigned int *)t39);
    t66 = *((unsigned int *)t50);
    t81 = (t62 + t66);
    t70 = *((unsigned int *)t40);
    t74 = *((unsigned int *)t50);
    t84 = (t70 - t74);
    t85 = (t84 + 1);
    xsi_vlogvar_assign_value(t32, t28, t78, t81, t85);
    goto LAB13;

}

static int sp_updatePlayer(char *t1, char *t2)
{
    char t8[16];
    char t16[8];
    char t25[16];
    char t33[8];
    char t39[8];
    char t43[8];
    char t46[8];
    char t63[8];
    char t73[16];
    char t74[16];
    char t90[8];
    char t91[8];
    char t108[8];
    char t113[8];
    char t115[8];
    char t116[8];
    char t119[8];
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
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
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
    char *t57;
    char *t58;
    int t59;
    char *t60;
    char *t61;
    char *t62;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t75;
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
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t114;
    char *t117;
    char *t118;
    char *t120;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 6432);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(121, ng0);

LAB5:    xsi_set_current_line(122, ng0);
    t5 = (t1 + 10632);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t1 + 10632);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 10632);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t8, 41, t7, t11, t14, 2, 1, t15, 32, 1);
    t17 = (t1 + 10632);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng9)));
    t21 = ((char*)((ng10)));
    xsi_vlog_get_indexed_partselect(t16, 16, t8, ((int*)(t19)), 2, t20, 32, 1, t21, 32, 1, 0);
    t22 = (t1 + 10632);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t26 = (t1 + 10632);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = (t1 + 10632);
    t30 = (t29 + 64U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t25, 41, t24, t28, t31, 2, 1, t32, 32, 1);
    t34 = (t1 + 10632);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng9)));
    t38 = ((char*)((ng10)));
    xsi_vlog_get_indexed_partselect(t33, 16, t25, ((int*)(t36)), 2, t37, 32, 1, t38, 32, 1, 0);
    memset(t39, 0, 8);
    xsi_vlog_unsigned_minus(t39, 16, t16, 16, t33, 16);
    t40 = (t1 + 12552);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memset(t43, 0, 8);
    xsi_vlog_unsigned_multiply(t43, 16, t39, 16, t42, 16);
    t44 = (t1 + 2648);
    t45 = *((char **)t44);
    memset(t46, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t46, 16, t43, 16, t45, 32);
    t44 = (t2 + 56U);
    t47 = *((char **)t44);
    t48 = (t1 + 5136);
    t49 = xsi_create_subprogram_invocation(t47, 0, t1, t48, 0, t2);
    t50 = (t1 + 15272);
    xsi_vlogvar_assign_value(t50, t46, 0, 0, 16);

LAB6:    t51 = (t2 + 64U);
    t52 = *((char **)t51);
    t53 = (t52 + 80U);
    t54 = *((char **)t53);
    t55 = (t54 + 272U);
    t56 = *((char **)t55);
    t57 = (t56 + 0U);
    t58 = *((char **)t57);
    t59 = ((int  (*)(char *, char *))t58)(t1, t52);
    if (t59 != 0)
        goto LAB8;

LAB7:    t52 = (t2 + 64U);
    t60 = *((char **)t52);
    t52 = (t1 + 15432);
    t61 = (t52 + 56U);
    t62 = *((char **)t61);
    memcpy(t63, t62, 8);
    t64 = (t1 + 5136);
    t65 = (t2 + 56U);
    t66 = *((char **)t65);
    xsi_delete_subprogram_invocation(t64, t60, t1, t66, t2);
    t67 = (t1 + 12872);
    xsi_vlogvar_assign_value(t67, t63, 0, 0, 8);
    xsi_set_current_line(123, ng0);
    t4 = (t1 + 10632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 10632);
    t9 = (t7 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 10632);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t8, 41, t6, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t1 + 10632);
    t17 = (t15 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng11)));
    t20 = ((char*)((ng10)));
    xsi_vlog_get_indexed_partselect(t16, 8, t8, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1, 0);
    t21 = (t1 + 10632);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t1 + 10632);
    t26 = (t24 + 72U);
    t27 = *((char **)t26);
    t28 = (t1 + 10632);
    t29 = (t28 + 64U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t25, 41, t23, t27, t30, 2, 1, t31, 32, 1);
    t32 = (t1 + 10632);
    t34 = (t32 + 72U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng11)));
    t37 = ((char*)((ng10)));
    xsi_vlog_get_indexed_partselect(t33, 8, t25, ((int*)(t35)), 2, t36, 32, 1, t37, 32, 1, 0);
    memset(t39, 0, 8);
    t38 = (t16 + 4);
    if (*((unsigned int *)t38) != 0)
        goto LAB10;

LAB9:    t40 = (t33 + 4);
    if (*((unsigned int *)t40) != 0)
        goto LAB10;

LAB13:    if (*((unsigned int *)t16) > *((unsigned int *)t33))
        goto LAB11;

LAB12:    t42 = (t39 + 4);
    t68 = *((unsigned int *)t42);
    t69 = (~(t68));
    t70 = *((unsigned int *)t39);
    t71 = (t70 & t69);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(132, ng0);

LAB27:    xsi_set_current_line(133, ng0);
    t4 = (t1 + 12712);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 10632);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 10632);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t14 = (t1 + 10632);
    t15 = (t14 + 64U);
    t17 = *((char **)t15);
    t18 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t8, 41, t10, t13, t17, 2, 1, t18, 32, 1);
    t19 = (t1 + 10632);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng11)));
    t23 = ((char*)((ng10)));
    xsi_vlog_get_indexed_partselect(t16, 16, t8, ((int*)(t21)), 2, t22, 32, 1, t23, 32, 1, 0);
    t24 = (t1 + 10632);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t1 + 10632);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = (t1 + 10632);
    t32 = (t31 + 64U);
    t34 = *((char **)t32);
    t35 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t25, 41, t27, t30, t34, 2, 1, t35, 32, 1);
    t36 = (t1 + 10632);
    t37 = (t36 + 72U);
    t38 = *((char **)t37);
    t40 = ((char*)((ng11)));
    t41 = ((char*)((ng10)));
    xsi_vlog_get_indexed_partselect(t33, 16, t25, ((int*)(t38)), 2, t40, 32, 1, t41, 32, 1, 0);
    memset(t39, 0, 8);
    xsi_vlog_unsigned_minus(t39, 16, t16, 16, t33, 16);
    t42 = (t1 + 12712);
    t44 = (t42 + 56U);
    t45 = *((char **)t44);
    memset(t43, 0, 8);
    xsi_vlog_unsigned_minus(t43, 16, t39, 16, t45, 8);
    memset(t46, 0, 8);
    xsi_vlog_unsigned_multiply(t46, 16, t6, 8, t43, 16);
    t47 = (t2 + 56U);
    t48 = *((char **)t47);
    t49 = (t1 + 5136);
    t50 = xsi_create_subprogram_invocation(t48, 0, t1, t49, 0, t2);
    t51 = (t1 + 15272);
    xsi_vlogvar_assign_value(t51, t46, 0, 0, 16);

LAB28:    t52 = (t2 + 64U);
    t53 = *((char **)t52);
    t54 = (t53 + 80U);
    t55 = *((char **)t54);
    t56 = (t55 + 272U);
    t57 = *((char **)t56);
    t58 = (t57 + 0U);
    t60 = *((char **)t58);
    t59 = ((int  (*)(char *, char *))t60)(t1, t53);
    if (t59 != 0)
        goto LAB30;

LAB29:    t53 = (t2 + 64U);
    t61 = *((char **)t53);
    t53 = (t1 + 15432);
    t62 = (t53 + 56U);
    t64 = *((char **)t62);
    memcpy(t63, t64, 8);
    t65 = (t1 + 5136);
    t66 = (t2 + 56U);
    t67 = *((char **)t66);
    xsi_delete_subprogram_invocation(t65, t61, t1, t67, t2);
    t75 = ((char*)((ng13)));
    memset(t90, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t90, 8, t63, 8, t75, 32);
    t76 = (t1 + 6432);
    xsi_vlogfile_write(1, 0, 0, ng12, 2, t76, (char)118, t90, 8);
    xsi_set_current_line(135, ng0);
    t4 = (t1 + 10632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 10632);
    t9 = (t7 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 10632);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t8, 41, t6, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t1 + 10632);
    t17 = (t15 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng11)));
    t20 = ((char*)((ng10)));
    xsi_vlog_get_indexed_partselect(t16, 16, t8, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1, 0);
    t21 = (t1 + 10632);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t1 + 10632);
    t26 = (t24 + 72U);
    t27 = *((char **)t26);
    t28 = (t1 + 10632);
    t29 = (t28 + 64U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t25, 41, t23, t27, t30, 2, 1, t31, 32, 1);
    t32 = (t1 + 10632);
    t34 = (t32 + 72U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng11)));
    t37 = ((char*)((ng10)));
    xsi_vlog_get_indexed_partselect(t33, 16, t25, ((int*)(t35)), 2, t36, 32, 1, t37, 32, 1, 0);
    memset(t39, 0, 8);
    xsi_vlog_unsigned_minus(t39, 16, t16, 16, t33, 16);
    t38 = (t1 + 12552);
    t40 = (t38 + 56U);
    t41 = *((char **)t40);
    memset(t43, 0, 8);
    xsi_vlog_unsigned_multiply(t43, 16, t39, 16, t41, 16);
    t42 = (t1 + 2648);
    t44 = *((char **)t42);
    memset(t46, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t46, 16, t43, 16, t44, 32);
    t42 = (t2 + 56U);
    t45 = *((char **)t42);
    t47 = (t1 + 5136);
    t48 = xsi_create_subprogram_invocation(t45, 0, t1, t47, 0, t2);
    t49 = (t1 + 15272);
    xsi_vlogvar_assign_value(t49, t46, 0, 0, 16);

LAB31:    t50 = (t2 + 64U);
    t51 = *((char **)t50);
    t52 = (t51 + 80U);
    t53 = *((char **)t52);
    t54 = (t53 + 272U);
    t55 = *((char **)t54);
    t56 = (t55 + 0U);
    t57 = *((char **)t56);
    t59 = ((int  (*)(char *, char *))t57)(t1, t51);
    if (t59 != 0)
        goto LAB33;

LAB32:    t51 = (t2 + 64U);
    t58 = *((char **)t51);
    t51 = (t1 + 15432);
    t60 = (t51 + 56U);
    t61 = *((char **)t60);
    memcpy(t63, t61, 8);
    t62 = (t1 + 5136);
    t64 = (t2 + 56U);
    t65 = *((char **)t64);
    xsi_delete_subprogram_invocation(t62, t58, t1, t65, t2);
    t66 = (t1 + 12712);
    xsi_vlogvar_assign_value(t66, t63, 0, 0, 8);
    xsi_set_current_line(136, ng0);
    t4 = ((char*)((ng14)));
    t5 = (t1 + 10632);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t1 + 10632);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 10632);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t8, 41, t7, t11, t14, 2, 1, t15, 32, 1);
    t17 = (t1 + 10632);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng9)));
    t21 = ((char*)((ng10)));
    xsi_vlog_get_indexed_partselect(t33, 8, t8, ((int*)(t19)), 2, t20, 32, 1, t21, 32, 1, 0);
    t22 = (t1 + 12872);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t39, 0, 8);
    xsi_vlog_unsigned_minus(t39, 8, t33, 8, t24, 8);
    t26 = (t1 + 12712);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t1 + 10632);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t1 + 10632);
    t34 = (t32 + 72U);
    t35 = *((char **)t34);
    t36 = (t1 + 10632);
    t37 = (t36 + 64U);
    t38 = *((char **)t37);
    t40 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t25, 41, t31, t35, t38, 2, 1, t40, 32, 1);
    t41 = (t1 + 10632);
    t42 = (t41 + 72U);
    t44 = *((char **)t42);
    t45 = ((char*)((ng11)));
    t47 = ((char*)((ng10)));
    xsi_vlog_get_indexed_partselect(t43, 16, t25, ((int*)(t44)), 2, t45, 32, 1, t47, 32, 1, 0);
    t48 = (t1 + 10632);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = (t1 + 10632);
    t52 = (t51 + 72U);
    t53 = *((char **)t52);
    t54 = (t1 + 10632);
    t55 = (t54 + 64U);
    t56 = *((char **)t55);
    t57 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t73, 41, t50, t53, t56, 2, 1, t57, 32, 1);
    t58 = (t1 + 10632);
    t60 = (t58 + 72U);
    t61 = *((char **)t60);
    t62 = ((char*)((ng11)));
    t64 = ((char*)((ng10)));
    xsi_vlog_get_indexed_partselect(t46, 16, t73, ((int*)(t61)), 2, t62, 32, 1, t64, 32, 1, 0);
    memset(t63, 0, 8);
    xsi_vlog_unsigned_minus(t63, 16, t43, 16, t46, 16);
    t65 = (t1 + 12712);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    memset(t90, 0, 8);
    xsi_vlog_unsigned_minus(t90, 16, t63, 16, t67, 8);
    memset(t91, 0, 8);
    xsi_vlog_unsigned_multiply(t91, 16, t28, 8, t90, 16);
    t75 = (t2 + 56U);
    t76 = *((char **)t75);
    t77 = (t1 + 5136);
    t78 = xsi_create_subprogram_invocation(t76, 0, t1, t77, 0, t2);
    t79 = (t1 + 15272);
    xsi_vlogvar_assign_value(t79, t91, 0, 0, 16);

LAB34:    t80 = (t2 + 64U);
    t81 = *((char **)t80);
    t82 = (t81 + 80U);
    t83 = *((char **)t82);
    t84 = (t83 + 272U);
    t85 = *((char **)t84);
    t86 = (t85 + 0U);
    t87 = *((char **)t86);
    t59 = ((int  (*)(char *, char *))t87)(t1, t81);
    if (t59 != 0)
        goto LAB36;

LAB35:    t81 = (t2 + 64U);
    t88 = *((char **)t81);
    t81 = (t1 + 15432);
    t89 = (t81 + 56U);
    t92 = *((char **)t89);
    memcpy(t108, t92, 8);
    t93 = (t1 + 5136);
    t94 = (t2 + 56U);
    t95 = *((char **)t94);
    xsi_delete_subprogram_invocation(t93, t88, t1, t95, t2);
    t96 = ((char*)((ng13)));
    memset(t113, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t113, 8, t108, 8, t96, 32);
    memset(t115, 0, 8);
    xsi_vlog_unsigned_minus(t115, 8, t39, 8, t113, 8);
    t97 = (t1 + 10632);
    t98 = (t97 + 56U);
    t99 = *((char **)t98);
    t100 = (t1 + 10632);
    t101 = (t100 + 72U);
    t102 = *((char **)t101);
    t103 = (t1 + 10632);
    t104 = (t103 + 64U);
    t105 = *((char **)t104);
    t106 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t74, 41, t99, t102, t105, 2, 1, t106, 32, 1);
    t107 = (t1 + 10632);
    t109 = (t107 + 72U);
    t110 = *((char **)t109);
    t111 = ((char*)((ng11)));
    t112 = ((char*)((ng10)));
    xsi_vlog_get_indexed_partselect(t116, 8, t74, ((int*)(t110)), 2, t111, 32, 1, t112, 32, 1, 0);
    t114 = (t1 + 12712);
    t117 = (t114 + 56U);
    t118 = *((char **)t117);
    memset(t119, 0, 8);
    xsi_vlog_unsigned_minus(t119, 8, t116, 8, t118, 8);
    xsi_vlogtype_concat(t16, 24, 24, 3U, t119, 8, t115, 8, t4, 8);
    t120 = (t1 + 10792);
    xsi_vlogvar_assign_value(t120, t16, 0, 0, 24);

LAB16:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB8:    t51 = (t2 + 48U);
    *((char **)t51) = &&LAB6;
    goto LAB1;

LAB10:    t41 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB12;

LAB11:    *((unsigned int *)t39) = 1;
    goto LAB12;

LAB14:    xsi_set_current_line(123, ng0);

LAB17:    xsi_set_current_line(124, ng0);
    t44 = (t1 + 12712);
    t45 = (t44 + 56U);
    t47 = *((char **)t45);
    t48 = (t1 + 10632);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = (t1 + 10632);
    t52 = (t51 + 72U);
    t53 = *((char **)t52);
    t54 = (t1 + 10632);
    t55 = (t54 + 64U);
    t56 = *((char **)t55);
    t57 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t73, 41, t50, t53, t56, 2, 1, t57, 32, 1);
    t58 = (t1 + 10632);
    t60 = (t58 + 72U);
    t61 = *((char **)t60);
    t62 = ((char*)((ng11)));
    t64 = ((char*)((ng10)));
    xsi_vlog_get_indexed_partselect(t43, 16, t73, ((int*)(t61)), 2, t62, 32, 1, t64, 32, 1, 0);
    t65 = (t1 + 10632);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    t75 = (t1 + 10632);
    t76 = (t75 + 72U);
    t77 = *((char **)t76);
    t78 = (t1 + 10632);
    t79 = (t78 + 64U);
    t80 = *((char **)t79);
    t81 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t74, 41, t67, t77, t80, 2, 1, t81, 32, 1);
    t82 = (t1 + 10632);
    t83 = (t82 + 72U);
    t84 = *((char **)t83);
    t85 = ((char*)((ng11)));
    t86 = ((char*)((ng10)));
    xsi_vlog_get_indexed_partselect(t46, 16, t74, ((int*)(t84)), 2, t85, 32, 1, t86, 32, 1, 0);
    memset(t63, 0, 8);
    xsi_vlog_unsigned_minus(t63, 16, t43, 16, t46, 16);
    t87 = (t1 + 12712);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    memset(t90, 0, 8);
    xsi_vlog_unsigned_minus(t90, 16, t63, 16, t89, 8);
    memset(t91, 0, 8);
    xsi_vlog_unsigned_multiply(t91, 16, t47, 8, t90, 16);
    t92 = (t2 + 56U);
    t93 = *((char **)t92);
    t94 = (t1 + 5136);
    t95 = xsi_create_subprogram_invocation(t93, 0, t1, t94, 0, t2);
    t96 = (t1 + 15272);
    xsi_vlogvar_assign_value(t96, t91, 0, 0, 16);

LAB18:    t97 = (t2 + 64U);
    t98 = *((char **)t97);
    t99 = (t98 + 80U);
    t100 = *((char **)t99);
    t101 = (t100 + 272U);
    t102 = *((char **)t101);
    t103 = (t102 + 0U);
    t104 = *((char **)t103);
    t59 = ((int  (*)(char *, char *))t104)(t1, t98);
    if (t59 != 0)
        goto LAB20;

LAB19:    t98 = (t2 + 64U);
    t105 = *((char **)t98);
    t98 = (t1 + 15432);
    t106 = (t98 + 56U);
    t107 = *((char **)t106);
    memcpy(t108, t107, 8);
    t109 = (t1 + 5136);
    t110 = (t2 + 56U);
    t111 = *((char **)t110);
    xsi_delete_subprogram_invocation(t109, t105, t1, t111, t2);
    t112 = ((char*)((ng13)));
    memset(t113, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t113, 8, t108, 8, t112, 32);
    t114 = (t1 + 6432);
    xsi_vlogfile_write(1, 0, 0, ng12, 2, t114, (char)118, t113, 8);
    xsi_set_current_line(127, ng0);
    t4 = (t1 + 10632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 10632);
    t9 = (t7 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 10632);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t8, 41, t6, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t1 + 10632);
    t17 = (t15 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng11)));
    t20 = ((char*)((ng10)));
    xsi_vlog_get_indexed_partselect(t16, 16, t8, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1, 0);
    t21 = (t1 + 10632);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t1 + 10632);
    t26 = (t24 + 72U);
    t27 = *((char **)t26);
    t28 = (t1 + 10632);
    t29 = (t28 + 64U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t25, 41, t23, t27, t30, 2, 1, t31, 32, 1);
    t32 = (t1 + 10632);
    t34 = (t32 + 72U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng11)));
    t37 = ((char*)((ng10)));
    xsi_vlog_get_indexed_partselect(t33, 16, t25, ((int*)(t35)), 2, t36, 32, 1, t37, 32, 1, 0);
    memset(t39, 0, 8);
    xsi_vlog_unsigned_minus(t39, 16, t16, 16, t33, 16);
    t38 = (t1 + 12552);
    t40 = (t38 + 56U);
    t41 = *((char **)t40);
    memset(t43, 0, 8);
    xsi_vlog_unsigned_multiply(t43, 16, t39, 16, t41, 16);
    t42 = (t1 + 2648);
    t44 = *((char **)t42);
    memset(t46, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t46, 16, t43, 16, t44, 32);
    t42 = (t2 + 56U);
    t45 = *((char **)t42);
    t47 = (t1 + 5136);
    t48 = xsi_create_subprogram_invocation(t45, 0, t1, t47, 0, t2);
    t49 = (t1 + 15272);
    xsi_vlogvar_assign_value(t49, t46, 0, 0, 16);

LAB21:    t50 = (t2 + 64U);
    t51 = *((char **)t50);
    t52 = (t51 + 80U);
    t53 = *((char **)t52);
    t54 = (t53 + 272U);
    t55 = *((char **)t54);
    t56 = (t55 + 0U);
    t57 = *((char **)t56);
    t59 = ((int  (*)(char *, char *))t57)(t1, t51);
    if (t59 != 0)
        goto LAB23;

LAB22:    t51 = (t2 + 64U);
    t58 = *((char **)t51);
    t51 = (t1 + 15432);
    t60 = (t51 + 56U);
    t61 = *((char **)t60);
    memcpy(t63, t61, 8);
    t62 = (t1 + 5136);
    t64 = (t2 + 56U);
    t65 = *((char **)t64);
    xsi_delete_subprogram_invocation(t62, t58, t1, t65, t2);
    t66 = (t1 + 12712);
    xsi_vlogvar_assign_value(t66, t63, 0, 0, 8);
    xsi_set_current_line(128, ng0);
    t4 = ((char*)((ng14)));
    t5 = (t1 + 10632);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t1 + 10632);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 10632);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t8, 41, t7, t11, t14, 2, 1, t15, 32, 1);
    t17 = (t1 + 10632);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng9)));
    t21 = ((char*)((ng10)));
    xsi_vlog_get_indexed_partselect(t33, 8, t8, ((int*)(t19)), 2, t20, 32, 1, t21, 32, 1, 0);
    t22 = (t1 + 12872);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t39, 0, 8);
    xsi_vlog_unsigned_minus(t39, 8, t33, 8, t24, 8);
    t26 = (t1 + 12712);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t1 + 10632);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t1 + 10632);
    t34 = (t32 + 72U);
    t35 = *((char **)t34);
    t36 = (t1 + 10632);
    t37 = (t36 + 64U);
    t38 = *((char **)t37);
    t40 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t25, 41, t31, t35, t38, 2, 1, t40, 32, 1);
    t41 = (t1 + 10632);
    t42 = (t41 + 72U);
    t44 = *((char **)t42);
    t45 = ((char*)((ng11)));
    t47 = ((char*)((ng10)));
    xsi_vlog_get_indexed_partselect(t43, 16, t25, ((int*)(t44)), 2, t45, 32, 1, t47, 32, 1, 0);
    t48 = (t1 + 10632);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = (t1 + 10632);
    t52 = (t51 + 72U);
    t53 = *((char **)t52);
    t54 = (t1 + 10632);
    t55 = (t54 + 64U);
    t56 = *((char **)t55);
    t57 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t73, 41, t50, t53, t56, 2, 1, t57, 32, 1);
    t58 = (t1 + 10632);
    t60 = (t58 + 72U);
    t61 = *((char **)t60);
    t62 = ((char*)((ng11)));
    t64 = ((char*)((ng10)));
    xsi_vlog_get_indexed_partselect(t46, 16, t73, ((int*)(t61)), 2, t62, 32, 1, t64, 32, 1, 0);
    memset(t63, 0, 8);
    xsi_vlog_unsigned_minus(t63, 16, t43, 16, t46, 16);
    t65 = (t1 + 12712);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    memset(t90, 0, 8);
    xsi_vlog_unsigned_minus(t90, 16, t63, 16, t67, 8);
    memset(t91, 0, 8);
    xsi_vlog_unsigned_multiply(t91, 16, t28, 8, t90, 16);
    t75 = (t2 + 56U);
    t76 = *((char **)t75);
    t77 = (t1 + 5136);
    t78 = xsi_create_subprogram_invocation(t76, 0, t1, t77, 0, t2);
    t79 = (t1 + 15272);
    xsi_vlogvar_assign_value(t79, t91, 0, 0, 16);

LAB24:    t80 = (t2 + 64U);
    t81 = *((char **)t80);
    t82 = (t81 + 80U);
    t83 = *((char **)t82);
    t84 = (t83 + 272U);
    t85 = *((char **)t84);
    t86 = (t85 + 0U);
    t87 = *((char **)t86);
    t59 = ((int  (*)(char *, char *))t87)(t1, t81);
    if (t59 != 0)
        goto LAB26;

LAB25:    t81 = (t2 + 64U);
    t88 = *((char **)t81);
    t81 = (t1 + 15432);
    t89 = (t81 + 56U);
    t92 = *((char **)t89);
    memcpy(t108, t92, 8);
    t93 = (t1 + 5136);
    t94 = (t2 + 56U);
    t95 = *((char **)t94);
    xsi_delete_subprogram_invocation(t93, t88, t1, t95, t2);
    t96 = ((char*)((ng13)));
    memset(t113, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t113, 8, t108, 8, t96, 32);
    memset(t115, 0, 8);
    xsi_vlog_unsigned_minus(t115, 8, t39, 8, t113, 8);
    t97 = (t1 + 10632);
    t98 = (t97 + 56U);
    t99 = *((char **)t98);
    t100 = (t1 + 10632);
    t101 = (t100 + 72U);
    t102 = *((char **)t101);
    t103 = (t1 + 10632);
    t104 = (t103 + 64U);
    t105 = *((char **)t104);
    t106 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t74, 41, t99, t102, t105, 2, 1, t106, 32, 1);
    t107 = (t1 + 10632);
    t109 = (t107 + 72U);
    t110 = *((char **)t109);
    t111 = ((char*)((ng11)));
    t112 = ((char*)((ng10)));
    xsi_vlog_get_indexed_partselect(t116, 8, t74, ((int*)(t110)), 2, t111, 32, 1, t112, 32, 1, 0);
    t114 = (t1 + 12712);
    t117 = (t114 + 56U);
    t118 = *((char **)t117);
    memset(t119, 0, 8);
    xsi_vlog_unsigned_add(t119, 8, t116, 8, t118, 8);
    xsi_vlogtype_concat(t16, 24, 24, 3U, t119, 8, t115, 8, t4, 8);
    t120 = (t1 + 10792);
    xsi_vlogvar_assign_value(t120, t16, 0, 0, 24);
    goto LAB16;

LAB20:    t97 = (t2 + 48U);
    *((char **)t97) = &&LAB18;
    goto LAB1;

LAB23:    t50 = (t2 + 48U);
    *((char **)t50) = &&LAB21;
    goto LAB1;

LAB26:    t80 = (t2 + 48U);
    *((char **)t80) = &&LAB24;
    goto LAB1;

LAB30:    t52 = (t2 + 48U);
    *((char **)t52) = &&LAB28;
    goto LAB1;

LAB33:    t50 = (t2 + 48U);
    *((char **)t50) = &&LAB31;
    goto LAB1;

LAB36:    t80 = (t2 + 48U);
    *((char **)t80) = &&LAB34;
    goto LAB1;

}

static int sp_reset(char *t1, char *t2)
{
    char t27[8];
    char t33[8];
    char t66[8];
    char t68[8];
    char t69[8];
    char t70[8];
    int t0;
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
    int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t67;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    unsigned int t77;
    int t78;
    char *t79;
    unsigned int t80;
    int t81;
    int t82;
    char *t83;
    unsigned int t84;
    int t85;
    int t86;
    unsigned int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    int t91;
    int t92;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 6864);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(155, ng0);

LAB5:    xsi_set_current_line(156, ng0);
    t5 = ((char*)((ng15)));
    t6 = (t1 + 10152);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 2);
    xsi_set_current_line(157, ng0);
    t4 = ((char*)((ng15)));
    t5 = (t1 + 10472);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(158, ng0);
    t4 = ((char*)((ng8)));
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 22496);
    t8 = *((char **)t7);
    t9 = (t1 + 22512);
    t10 = xsi_create_subprogram_invocation(t6, 0, *((char **)t9), ((char*)(t8)), 0, t2);
    t11 = (t1 + 22504);
    t12 = *((char **)t11);
    xsi_vlogvar_assign_value(((char*)(t12)), t4, 0, 0, 1);

LAB6:    t13 = (t2 + 64U);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = (t1 + 22512);
    t22 = ((int  (*)(char *, char *))t20)(*((char **)t21), t14);
    if (t22 != 0)
        goto LAB8;

LAB7:    t14 = (t2 + 64U);
    t23 = *((char **)t14);
    t14 = (t1 + 22520);
    t24 = *((char **)t14);
    t25 = ((((char*)(t24))) + 56U);
    t26 = *((char **)t25);
    memcpy(t27, t26, 8);
    t28 = (t1 + 22496);
    t29 = *((char **)t28);
    t30 = (t2 + 56U);
    t31 = *((char **)t30);
    xsi_delete_subprogram_invocation(((char*)(t29)), t23, t1, t31, t2);
    t32 = ((char*)((ng16)));
    t34 = *((unsigned int *)t27);
    t35 = *((unsigned int *)t32);
    t36 = (t34 & t35);
    *((unsigned int *)t33) = t36;
    t37 = (t27 + 4);
    t38 = (t32 + 4);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t37);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB9;

LAB10:
LAB11:    t65 = (t1 + 10152);
    xsi_vlogvar_assign_value(t65, t33, 0, 0, 2);
    xsi_set_current_line(159, ng0);
    t4 = ((char*)((ng8)));
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 22544);
    t8 = *((char **)t7);
    t9 = (t1 + 22560);
    t10 = xsi_create_subprogram_invocation(t6, 0, *((char **)t9), ((char*)(t8)), 0, t2);
    t11 = (t1 + 22552);
    t12 = *((char **)t11);
    xsi_vlogvar_assign_value(((char*)(t12)), t4, 0, 0, 1);

LAB12:    t13 = (t2 + 64U);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = (t1 + 22560);
    t22 = ((int  (*)(char *, char *))t20)(*((char **)t21), t14);
    if (t22 != 0)
        goto LAB14;

LAB13:    t14 = (t2 + 64U);
    t23 = *((char **)t14);
    t14 = (t1 + 22568);
    t24 = *((char **)t14);
    t25 = ((((char*)(t24))) + 56U);
    t26 = *((char **)t25);
    memcpy(t27, t26, 8);
    t28 = (t1 + 22544);
    t29 = *((char **)t28);
    t30 = (t2 + 56U);
    t31 = *((char **)t30);
    xsi_delete_subprogram_invocation(((char*)(t29)), t23, t1, t31, t2);
    t32 = ((char*)((ng17)));
    t34 = *((unsigned int *)t27);
    t35 = *((unsigned int *)t32);
    t36 = (t34 & t35);
    *((unsigned int *)t33) = t36;
    t37 = (t27 + 4);
    t38 = (t32 + 4);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t37);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB15;

LAB16:
LAB17:    t65 = (t1 + 10472);
    xsi_vlogvar_assign_value(t65, t33, 0, 0, 3);
    xsi_set_current_line(160, ng0);
    t4 = ((char*)((ng18)));
    t5 = ((char*)((ng8)));
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 22592);
    t9 = *((char **)t8);
    t10 = (t1 + 22608);
    t11 = xsi_create_subprogram_invocation(t7, 0, *((char **)t10), ((char*)(t9)), 0, t2);
    t12 = (t1 + 22600);
    t13 = *((char **)t12);
    xsi_vlogvar_assign_value(((char*)(t13)), t5, 0, 0, 1);

LAB18:    t14 = (t2 + 64U);
    t15 = *((char **)t14);
    t16 = (t15 + 80U);
    t17 = *((char **)t16);
    t18 = (t17 + 272U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t23 = (t1 + 22608);
    t22 = ((int  (*)(char *, char *))t21)(*((char **)t23), t15);
    if (t22 != 0)
        goto LAB20;

LAB19:    t15 = (t2 + 64U);
    t24 = *((char **)t15);
    t15 = (t1 + 22616);
    t25 = *((char **)t15);
    t26 = ((((char*)(t25))) + 56U);
    t28 = *((char **)t26);
    memcpy(t27, t28, 8);
    t29 = (t1 + 22592);
    t30 = *((char **)t29);
    t31 = (t2 + 56U);
    t32 = *((char **)t31);
    xsi_delete_subprogram_invocation(((char*)(t30)), t24, t1, t32, t2);
    t37 = ((char*)((ng17)));
    t34 = *((unsigned int *)t27);
    t35 = *((unsigned int *)t37);
    t36 = (t34 & t35);
    *((unsigned int *)t33) = t36;
    t38 = (t27 + 4);
    t39 = (t37 + 4);
    t47 = (t33 + 4);
    t40 = *((unsigned int *)t38);
    t41 = *((unsigned int *)t39);
    t42 = (t40 | t41);
    *((unsigned int *)t47) = t42;
    t43 = *((unsigned int *)t47);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB21;

LAB22:
LAB23:    memset(t66, 0, 8);
    xsi_vlog_unsigned_add(t66, 32, t4, 32, t33, 32);
    t67 = (t1 + 10312);
    t71 = (t1 + 10312);
    t72 = (t71 + 72U);
    t73 = *((char **)t72);
    t74 = ((char*)((ng19)));
    t75 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t68, t69, t70, ((int*)(t73)), 2, t74, 32, 1, t75, 32, 1);
    t76 = (t68 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (!(t77));
    t79 = (t69 + 4);
    t80 = *((unsigned int *)t79);
    t81 = (!(t80));
    t82 = (t78 && t81);
    t83 = (t70 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (!(t84));
    t86 = (t82 && t85);
    if (t86 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(161, ng0);
    t4 = ((char*)((ng18)));
    t5 = ((char*)((ng8)));
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 22640);
    t9 = *((char **)t8);
    t10 = (t1 + 22656);
    t11 = xsi_create_subprogram_invocation(t7, 0, *((char **)t10), ((char*)(t9)), 0, t2);
    t12 = (t1 + 22648);
    t13 = *((char **)t12);
    xsi_vlogvar_assign_value(((char*)(t13)), t5, 0, 0, 1);

LAB26:    t14 = (t2 + 64U);
    t15 = *((char **)t14);
    t16 = (t15 + 80U);
    t17 = *((char **)t16);
    t18 = (t17 + 272U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t23 = (t1 + 22656);
    t22 = ((int  (*)(char *, char *))t21)(*((char **)t23), t15);
    if (t22 != 0)
        goto LAB28;

LAB27:    t15 = (t2 + 64U);
    t24 = *((char **)t15);
    t15 = (t1 + 22664);
    t25 = *((char **)t15);
    t26 = ((((char*)(t25))) + 56U);
    t28 = *((char **)t26);
    memcpy(t27, t28, 8);
    t29 = (t1 + 22640);
    t30 = *((char **)t29);
    t31 = (t2 + 56U);
    t32 = *((char **)t31);
    xsi_delete_subprogram_invocation(((char*)(t30)), t24, t1, t32, t2);
    t37 = ((char*)((ng17)));
    t34 = *((unsigned int *)t27);
    t35 = *((unsigned int *)t37);
    t36 = (t34 & t35);
    *((unsigned int *)t33) = t36;
    t38 = (t27 + 4);
    t39 = (t37 + 4);
    t47 = (t33 + 4);
    t40 = *((unsigned int *)t38);
    t41 = *((unsigned int *)t39);
    t42 = (t40 | t41);
    *((unsigned int *)t47) = t42;
    t43 = *((unsigned int *)t47);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB29;

LAB30:
LAB31:    memset(t66, 0, 8);
    xsi_vlog_unsigned_add(t66, 32, t4, 32, t33, 32);
    t67 = (t1 + 10312);
    t71 = (t1 + 10312);
    t72 = (t71 + 72U);
    t73 = *((char **)t72);
    t74 = ((char*)((ng20)));
    t75 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t68, t69, t70, ((int*)(t73)), 2, t74, 32, 1, t75, 32, 1);
    t76 = (t68 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (!(t77));
    t79 = (t69 + 4);
    t80 = *((unsigned int *)t79);
    t81 = (!(t80));
    t82 = (t78 && t81);
    t83 = (t70 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (!(t84));
    t86 = (t82 && t85);
    if (t86 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(162, ng0);
    t4 = ((char*)((ng8)));
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 22688);
    t8 = *((char **)t7);
    t9 = (t1 + 22704);
    t10 = xsi_create_subprogram_invocation(t6, 0, *((char **)t9), ((char*)(t8)), 0, t2);
    t11 = (t1 + 22696);
    t12 = *((char **)t11);
    xsi_vlogvar_assign_value(((char*)(t12)), t4, 0, 0, 1);

LAB34:    t13 = (t2 + 64U);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = (t1 + 22704);
    t22 = ((int  (*)(char *, char *))t20)(*((char **)t21), t14);
    if (t22 != 0)
        goto LAB36;

LAB35:    t14 = (t2 + 64U);
    t23 = *((char **)t14);
    t14 = (t1 + 22712);
    t24 = *((char **)t14);
    t25 = ((((char*)(t24))) + 56U);
    t26 = *((char **)t25);
    memcpy(t27, t26, 8);
    t28 = (t1 + 22688);
    t29 = *((char **)t28);
    t30 = (t2 + 56U);
    t31 = *((char **)t30);
    xsi_delete_subprogram_invocation(((char*)(t29)), t23, t1, t31, t2);
    t32 = ((char*)((ng22)));
    t34 = *((unsigned int *)t27);
    t35 = *((unsigned int *)t32);
    t36 = (t34 & t35);
    *((unsigned int *)t33) = t36;
    t37 = (t27 + 4);
    t38 = (t32 + 4);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t37);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB37;

LAB38:
LAB39:    t65 = (t1 + 6864);
    xsi_vlogfile_write(1, 0, 0, ng21, 2, t65, (char)118, t33, 32);
    xsi_set_current_line(163, ng0);
    t4 = (t1 + 10152);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 10472);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 10312);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t27, 0, 8);
    t13 = (t27 + 4);
    t14 = (t12 + 4);
    t34 = *((unsigned int *)t12);
    t35 = (t34 >> 8);
    *((unsigned int *)t27) = t35;
    t36 = *((unsigned int *)t14);
    t40 = (t36 >> 8);
    *((unsigned int *)t13) = t40;
    t41 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t41 & 255U);
    t42 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t42 & 255U);
    t15 = (t1 + 10312);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t33, 0, 8);
    t18 = (t33 + 4);
    t19 = (t17 + 4);
    t43 = *((unsigned int *)t17);
    t44 = (t43 >> 0);
    *((unsigned int *)t33) = t44;
    t45 = *((unsigned int *)t19);
    t46 = (t45 >> 0);
    *((unsigned int *)t18) = t46;
    t49 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t49 & 255U);
    t50 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t50 & 255U);
    t20 = (t1 + 6864);
    xsi_vlogfile_write(1, 0, 0, ng23, 5, t20, (char)118, t6, 2, (char)118, t9, 3, (char)118, t27, 8, (char)118, t33, 8);
    xsi_set_current_line(165, ng0);
    t4 = (t1 + 10152);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 10472);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t13, &&LAB40);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    t16 = (t1 + 5568);
    t17 = xsi_create_subprogram_invocation(t15, 0, t1, t16, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t16, t17);
    t18 = (t1 + 15752);
    xsi_vlogvar_assign_value(t18, t6, 0, 0, 2);
    t19 = (t1 + 15912);
    xsi_vlogvar_assign_value(t19, t9, 0, 0, 3);

LAB42:    t20 = (t2 + 64U);
    t21 = *((char **)t20);
    t23 = (t21 + 80U);
    t24 = *((char **)t23);
    t25 = (t24 + 272U);
    t26 = *((char **)t25);
    t28 = (t26 + 0U);
    t29 = *((char **)t28);
    t22 = ((int  (*)(char *, char *))t29)(t1, t21);
    if (t22 == -1)
        goto LAB43;

LAB44:    if (t22 != 0)
        goto LAB45;

LAB40:    t21 = (t1 + 5568);
    xsi_vlog_subprogram_popinvocation(t21);

LAB41:    t30 = (t2 + 64U);
    t31 = *((char **)t30);
    t30 = (t1 + 5568);
    t32 = (t2 + 56U);
    t37 = *((char **)t32);
    xsi_delete_subprogram_invocation(t30, t31, t1, t37, t2);
    xsi_set_current_line(166, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t7, &&LAB46);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 6432);
    t11 = xsi_create_subprogram_invocation(t9, 0, t1, t10, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t10, t11);

LAB48:    t12 = (t2 + 64U);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t22 = ((int  (*)(char *, char *))t19)(t1, t13);
    if (t22 == -1)
        goto LAB49;

LAB50:    if (t22 != 0)
        goto LAB51;

LAB46:    t13 = (t1 + 6432);
    xsi_vlog_subprogram_popinvocation(t13);

LAB47:    t20 = (t2 + 64U);
    t21 = *((char **)t20);
    t20 = (t1 + 6432);
    t23 = (t2 + 56U);
    t24 = *((char **)t23);
    xsi_delete_subprogram_invocation(t20, t21, t1, t24, t2);
    xsi_set_current_line(167, ng0);
    t4 = (t1 + 2240);
    t5 = *((char **)t4);
    t4 = (t1 + 9992);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 3);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB8:    t13 = (t2 + 48U);
    *((char **)t13) = &&LAB6;
    goto LAB1;

LAB9:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t33) = (t45 | t46);
    t47 = (t27 + 4);
    t48 = (t32 + 4);
    t49 = *((unsigned int *)t27);
    t50 = (~(t49));
    t51 = *((unsigned int *)t47);
    t52 = (~(t51));
    t53 = *((unsigned int *)t32);
    t54 = (~(t53));
    t55 = *((unsigned int *)t48);
    t56 = (~(t55));
    t57 = (t50 & t52);
    t58 = (t54 & t56);
    t59 = (~(t57));
    t60 = (~(t58));
    t61 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t61 & t59);
    t62 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t62 & t60);
    t63 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t63 & t59);
    t64 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t64 & t60);
    goto LAB11;

LAB14:    t13 = (t2 + 48U);
    *((char **)t13) = &&LAB12;
    goto LAB1;

LAB15:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t33) = (t45 | t46);
    t47 = (t27 + 4);
    t48 = (t32 + 4);
    t49 = *((unsigned int *)t27);
    t50 = (~(t49));
    t51 = *((unsigned int *)t47);
    t52 = (~(t51));
    t53 = *((unsigned int *)t32);
    t54 = (~(t53));
    t55 = *((unsigned int *)t48);
    t56 = (~(t55));
    t57 = (t50 & t52);
    t58 = (t54 & t56);
    t59 = (~(t57));
    t60 = (~(t58));
    t61 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t61 & t59);
    t62 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t62 & t60);
    t63 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t63 & t59);
    t64 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t64 & t60);
    goto LAB17;

LAB20:    t14 = (t2 + 48U);
    *((char **)t14) = &&LAB18;
    goto LAB1;

LAB21:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t47);
    *((unsigned int *)t33) = (t45 | t46);
    t48 = (t27 + 4);
    t65 = (t37 + 4);
    t49 = *((unsigned int *)t27);
    t50 = (~(t49));
    t51 = *((unsigned int *)t48);
    t52 = (~(t51));
    t53 = *((unsigned int *)t37);
    t54 = (~(t53));
    t55 = *((unsigned int *)t65);
    t56 = (~(t55));
    t57 = (t50 & t52);
    t58 = (t54 & t56);
    t59 = (~(t57));
    t60 = (~(t58));
    t61 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t61 & t59);
    t62 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t62 & t60);
    t63 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t63 & t59);
    t64 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t64 & t60);
    goto LAB23;

LAB24:    t87 = *((unsigned int *)t70);
    t88 = (t87 + 0);
    t89 = *((unsigned int *)t68);
    t90 = *((unsigned int *)t69);
    t91 = (t89 - t90);
    t92 = (t91 + 1);
    xsi_vlogvar_assign_value(t67, t66, t88, *((unsigned int *)t69), t92);
    goto LAB25;

LAB28:    t14 = (t2 + 48U);
    *((char **)t14) = &&LAB26;
    goto LAB1;

LAB29:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t47);
    *((unsigned int *)t33) = (t45 | t46);
    t48 = (t27 + 4);
    t65 = (t37 + 4);
    t49 = *((unsigned int *)t27);
    t50 = (~(t49));
    t51 = *((unsigned int *)t48);
    t52 = (~(t51));
    t53 = *((unsigned int *)t37);
    t54 = (~(t53));
    t55 = *((unsigned int *)t65);
    t56 = (~(t55));
    t57 = (t50 & t52);
    t58 = (t54 & t56);
    t59 = (~(t57));
    t60 = (~(t58));
    t61 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t61 & t59);
    t62 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t62 & t60);
    t63 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t63 & t59);
    t64 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t64 & t60);
    goto LAB31;

LAB32:    t87 = *((unsigned int *)t70);
    t88 = (t87 + 0);
    t89 = *((unsigned int *)t68);
    t90 = *((unsigned int *)t69);
    t91 = (t89 - t90);
    t92 = (t91 + 1);
    xsi_vlogvar_assign_value(t67, t66, t88, *((unsigned int *)t69), t92);
    goto LAB33;

LAB36:    t13 = (t2 + 48U);
    *((char **)t13) = &&LAB34;
    goto LAB1;

LAB37:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t33) = (t45 | t46);
    t47 = (t27 + 4);
    t48 = (t32 + 4);
    t49 = *((unsigned int *)t27);
    t50 = (~(t49));
    t51 = *((unsigned int *)t47);
    t52 = (~(t51));
    t53 = *((unsigned int *)t32);
    t54 = (~(t53));
    t55 = *((unsigned int *)t48);
    t56 = (~(t55));
    t57 = (t50 & t52);
    t58 = (t54 & t56);
    t59 = (~(t57));
    t60 = (~(t58));
    t61 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t61 & t59);
    t62 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t62 & t60);
    t63 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t63 & t59);
    t64 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t64 & t60);
    goto LAB39;

LAB43:    t0 = -1;
    goto LAB1;

LAB45:    t20 = (t2 + 48U);
    *((char **)t20) = &&LAB42;
    goto LAB1;

LAB49:    t0 = -1;
    goto LAB1;

LAB51:    t12 = (t2 + 48U);
    *((char **)t12) = &&LAB48;
    goto LAB1;

}

static int sp_gen_next(char *t1, char *t2)
{
    char t5[8];
    char t6[8];
    char t30[8];
    char t36[8];
    char t69[8];
    char t87[8];
    char t100[8];
    char t104[8];
    int t0;
    char *t3;
    char *t4;
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
    char *t23;
    char *t24;
    int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    char *t86;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t101;
    char *t102;
    char *t103;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 7296);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(199, ng0);

LAB5:    xsi_set_current_line(200, ng0);
    t7 = ((char*)((ng8)));
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 22736);
    t11 = *((char **)t10);
    t12 = (t1 + 22752);
    t13 = xsi_create_subprogram_invocation(t9, 0, *((char **)t12), ((char*)(t11)), 0, t2);
    t14 = (t1 + 22744);
    t15 = *((char **)t14);
    xsi_vlogvar_assign_value(((char*)(t15)), t7, 0, 0, 1);

LAB6:    t16 = (t2 + 64U);
    t17 = *((char **)t16);
    t18 = (t17 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t24 = (t1 + 22752);
    t25 = ((int  (*)(char *, char *))t23)(*((char **)t24), t17);
    if (t25 != 0)
        goto LAB8;

LAB7:    t17 = (t2 + 64U);
    t26 = *((char **)t17);
    t17 = (t1 + 22760);
    t27 = *((char **)t17);
    t28 = ((((char*)(t27))) + 56U);
    t29 = *((char **)t28);
    memcpy(t30, t29, 8);
    t31 = (t1 + 22736);
    t32 = *((char **)t31);
    t33 = (t2 + 56U);
    t34 = *((char **)t33);
    xsi_delete_subprogram_invocation(((char*)(t32)), t26, t1, t34, t2);
    t35 = ((char*)((ng14)));
    t37 = *((unsigned int *)t30);
    t38 = *((unsigned int *)t35);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t40 = (t30 + 4);
    t41 = (t35 + 4);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t40);
    t44 = *((unsigned int *)t41);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB9;

LAB10:
LAB11:    t68 = ((char*)((ng24)));
    memset(t69, 0, 8);
    t70 = (t36 + 4);
    if (*((unsigned int *)t70) != 0)
        goto LAB13;

LAB12:    t71 = (t68 + 4);
    if (*((unsigned int *)t71) != 0)
        goto LAB13;

LAB16:    if (*((unsigned int *)t36) > *((unsigned int *)t68))
        goto LAB14;

LAB15:    memset(t6, 0, 8);
    t73 = (t69 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t69);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t73) != 0)
        goto LAB19;

LAB20:    t80 = (t6 + 4);
    t81 = *((unsigned int *)t6);
    t82 = *((unsigned int *)t80);
    t83 = (t81 || t82);
    if (t83 > 0)
        goto LAB21;

LAB22:    t96 = *((unsigned int *)t6);
    t97 = (~(t96));
    t98 = *((unsigned int *)t80);
    t99 = (t97 || t98);
    if (t99 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t80) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t6) > 0)
        goto LAB27;

LAB28:    memcpy(t5, t100, 8);

LAB29:    t130 = (t1 + 13032);
    xsi_vlogvar_assign_value(t130, t5, 0, 0, 1);
    xsi_set_current_line(201, ng0);
    t4 = (t1 + 13032);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t1 + 10152);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t5, 0, 8);
    t12 = (t5 + 4);
    t13 = (t11 + 4);
    t37 = *((unsigned int *)t11);
    t38 = (t37 >> 1);
    t39 = (t38 & 1);
    *((unsigned int *)t5) = t39;
    t43 = *((unsigned int *)t13);
    t44 = (t43 >> 1);
    t45 = (t44 & 1);
    *((unsigned int *)t12) = t45;
    t14 = (t1 + 7296);
    xsi_vlogfile_write(1, 0, 0, ng25, 3, t14, (char)118, t8, 1, (char)118, t5, 1);
    xsi_set_current_line(202, ng0);
    t4 = ((char*)((ng8)));
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t1 + 22784);
    t10 = *((char **)t9);
    t11 = (t1 + 22800);
    t12 = xsi_create_subprogram_invocation(t8, 0, *((char **)t11), ((char*)(t10)), 0, t2);
    t13 = (t1 + 22792);
    t14 = *((char **)t13);
    xsi_vlogvar_assign_value(((char*)(t14)), t4, 0, 0, 1);

LAB36:    t15 = (t2 + 64U);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = (t1 + 22800);
    t25 = ((int  (*)(char *, char *))t22)(*((char **)t23), t16);
    if (t25 != 0)
        goto LAB38;

LAB37:    t16 = (t2 + 64U);
    t24 = *((char **)t16);
    t16 = (t1 + 22808);
    t26 = *((char **)t16);
    t27 = ((((char*)(t26))) + 56U);
    t28 = *((char **)t27);
    memcpy(t5, t28, 8);
    t29 = (t1 + 22784);
    t31 = *((char **)t29);
    t32 = (t2 + 56U);
    t33 = *((char **)t32);
    xsi_delete_subprogram_invocation(((char*)(t31)), t24, t1, t33, t2);
    t34 = ((char*)((ng8)));
    memset(t6, 0, 8);
    xsi_vlog_signed_bit_and(t6, 32, t5, 32, t34, 32);
    t35 = (t1 + 13192);
    xsi_vlogvar_assign_value(t35, t6, 0, 0, 1);
    xsi_set_current_line(203, ng0);
    t4 = ((char*)((ng18)));
    t7 = ((char*)((ng8)));
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 22832);
    t11 = *((char **)t10);
    t12 = (t1 + 22848);
    t13 = xsi_create_subprogram_invocation(t9, 0, *((char **)t12), ((char*)(t11)), 0, t2);
    t14 = (t1 + 22840);
    t15 = *((char **)t14);
    xsi_vlogvar_assign_value(((char*)(t15)), t7, 0, 0, 1);

LAB39:    t16 = (t2 + 64U);
    t17 = *((char **)t16);
    t18 = (t17 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t24 = (t1 + 22848);
    t25 = ((int  (*)(char *, char *))t23)(*((char **)t24), t17);
    if (t25 != 0)
        goto LAB41;

LAB40:    t17 = (t2 + 64U);
    t26 = *((char **)t17);
    t17 = (t1 + 22856);
    t27 = *((char **)t17);
    t28 = ((((char*)(t27))) + 56U);
    t29 = *((char **)t28);
    memcpy(t5, t29, 8);
    t31 = (t1 + 22832);
    t32 = *((char **)t31);
    t33 = (t2 + 56U);
    t34 = *((char **)t33);
    xsi_delete_subprogram_invocation(((char*)(t32)), t26, t1, t34, t2);
    t35 = ((char*)((ng17)));
    t37 = *((unsigned int *)t5);
    t38 = *((unsigned int *)t35);
    t39 = (t37 & t38);
    *((unsigned int *)t6) = t39;
    t40 = (t5 + 4);
    t41 = (t35 + 4);
    t42 = (t6 + 4);
    t43 = *((unsigned int *)t40);
    t44 = *((unsigned int *)t41);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB42;

LAB43:
LAB44:    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t4, 32, t6, 32);
    t68 = (t1 + 13352);
    xsi_vlogvar_assign_value(t68, t30, 0, 0, 8);
    xsi_set_current_line(204, ng0);
    t4 = ((char*)((ng5)));
    t7 = (t1 + 12552);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 16);
    xsi_set_current_line(205, ng0);
    t4 = (t2 + 56U);
    t7 = *((char **)t4);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t9, &&LAB45);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t1 + 6432);
    t13 = xsi_create_subprogram_invocation(t11, 0, t1, t12, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t12, t13);

LAB47:    t14 = (t2 + 64U);
    t15 = *((char **)t14);
    t16 = (t15 + 80U);
    t17 = *((char **)t16);
    t18 = (t17 + 272U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t25 = ((int  (*)(char *, char *))t21)(t1, t15);
    if (t25 == -1)
        goto LAB48;

LAB49:    if (t25 != 0)
        goto LAB50;

LAB45:    t15 = (t1 + 6432);
    xsi_vlog_subprogram_popinvocation(t15);

LAB46:    t22 = (t2 + 64U);
    t23 = *((char **)t22);
    t22 = (t1 + 6432);
    t24 = (t2 + 56U);
    t26 = *((char **)t24);
    xsi_delete_subprogram_invocation(t22, t23, t1, t26, t2);
    xsi_set_current_line(206, ng0);
    t4 = (t1 + 2104);
    t7 = *((char **)t4);
    t4 = (t1 + 9992);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 3);
    xsi_set_current_line(207, ng0);
    t4 = (t1 + 3192);
    t7 = *((char **)t4);
    t4 = (t1 + 13512);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 1);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB8:    t16 = (t2 + 48U);
    *((char **)t16) = &&LAB6;
    goto LAB1;

LAB9:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t36) = (t48 | t49);
    t50 = (t30 + 4);
    t51 = (t35 + 4);
    t52 = *((unsigned int *)t30);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t35);
    t57 = (~(t56));
    t58 = *((unsigned int *)t51);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t64 & t62);
    t65 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t65 & t63);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t63);
    goto LAB11;

LAB13:    t72 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB15;

LAB14:    *((unsigned int *)t69) = 1;
    goto LAB15;

LAB17:    *((unsigned int *)t6) = 1;
    goto LAB20;

LAB19:    t79 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB20;

LAB21:    t84 = (t1 + 10152);
    t85 = (t84 + 56U);
    t86 = *((char **)t85);
    memset(t87, 0, 8);
    t88 = (t87 + 4);
    t89 = (t86 + 4);
    t90 = *((unsigned int *)t86);
    t91 = (t90 >> 1);
    t92 = (t91 & 1);
    *((unsigned int *)t87) = t92;
    t93 = *((unsigned int *)t89);
    t94 = (t93 >> 1);
    t95 = (t94 & 1);
    *((unsigned int *)t88) = t95;
    goto LAB22;

LAB23:    t101 = (t1 + 10152);
    t102 = (t101 + 56U);
    t103 = *((char **)t102);
    memset(t104, 0, 8);
    t105 = (t104 + 4);
    t106 = (t103 + 4);
    t107 = *((unsigned int *)t103);
    t108 = (t107 >> 1);
    t109 = (t108 & 1);
    *((unsigned int *)t104) = t109;
    t110 = *((unsigned int *)t106);
    t111 = (t110 >> 1);
    t112 = (t111 & 1);
    *((unsigned int *)t105) = t112;
    memset(t100, 0, 8);
    t113 = (t104 + 4);
    t114 = *((unsigned int *)t113);
    t115 = (~(t114));
    t116 = *((unsigned int *)t104);
    t117 = (t116 & t115);
    t118 = (t117 & 1U);
    if (t118 != 0)
        goto LAB33;

LAB31:    if (*((unsigned int *)t113) == 0)
        goto LAB30;

LAB32:    t119 = (t100 + 4);
    *((unsigned int *)t100) = 1;
    *((unsigned int *)t119) = 1;

LAB33:    t120 = (t100 + 4);
    t121 = (t104 + 4);
    t122 = *((unsigned int *)t104);
    t123 = (~(t122));
    *((unsigned int *)t100) = t123;
    *((unsigned int *)t120) = 0;
    if (*((unsigned int *)t121) != 0)
        goto LAB35;

LAB34:    t128 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t128 & 1U);
    t129 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t129 & 1U);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t5, 1, t87, 1, t100, 1);
    goto LAB29;

LAB27:    memcpy(t5, t87, 8);
    goto LAB29;

LAB30:    *((unsigned int *)t100) = 1;
    goto LAB33;

LAB35:    t124 = *((unsigned int *)t100);
    t125 = *((unsigned int *)t121);
    *((unsigned int *)t100) = (t124 | t125);
    t126 = *((unsigned int *)t120);
    t127 = *((unsigned int *)t121);
    *((unsigned int *)t120) = (t126 | t127);
    goto LAB34;

LAB38:    t15 = (t2 + 48U);
    *((char **)t15) = &&LAB36;
    goto LAB1;

LAB41:    t16 = (t2 + 48U);
    *((char **)t16) = &&LAB39;
    goto LAB1;

LAB42:    t48 = *((unsigned int *)t6);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t6) = (t48 | t49);
    t50 = (t5 + 4);
    t51 = (t35 + 4);
    t52 = *((unsigned int *)t5);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t35);
    t57 = (~(t56));
    t58 = *((unsigned int *)t51);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t64 & t62);
    t65 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t65 & t63);
    t66 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t66 & t62);
    t67 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t67 & t63);
    goto LAB44;

LAB48:    t0 = -1;
    goto LAB1;

LAB50:    t14 = (t2 + 48U);
    *((char **)t14) = &&LAB47;
    goto LAB1;

}

static int sp_shift(char *t1, char *t2)
{
    char t10[8];
    char t34[8];
    char t60[8];
    char t66[8];
    char t68[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
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
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
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
    int t56;
    char *t57;
    char *t58;
    char *t59;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t67;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 7728);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(223, ng0);

LAB5:    xsi_set_current_line(224, ng0);
    t5 = (t1 + 13512);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 3192);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t8 = (t7 + 4);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t9);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB9;

LAB6:    if (t21 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t10) = 1;

LAB9:    t25 = (t10 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t10);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(239, ng0);
    t4 = (t1 + 10152);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 10472);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = (t2 + 56U);
    t24 = *((char **)t11);
    t25 = (t2 + 56U);
    t31 = *((char **)t25);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t31, &&LAB23);
    t32 = (t2 + 56U);
    t33 = *((char **)t32);
    t35 = (t1 + 5568);
    t36 = xsi_create_subprogram_invocation(t33, 0, t1, t35, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t35, t36);
    t43 = (t1 + 15752);
    xsi_vlogvar_assign_value(t43, t6, 0, 0, 2);
    t44 = (t1 + 15912);
    xsi_vlogvar_assign_value(t44, t9, 0, 0, 3);

LAB25:    t45 = (t2 + 64U);
    t46 = *((char **)t45);
    t47 = (t46 + 80U);
    t48 = *((char **)t47);
    t49 = (t48 + 272U);
    t50 = *((char **)t49);
    t51 = (t50 + 0U);
    t52 = *((char **)t51);
    t56 = ((int  (*)(char *, char *))t52)(t1, t46);
    if (t56 == -1)
        goto LAB26;

LAB27:    if (t56 != 0)
        goto LAB28;

LAB23:    t46 = (t1 + 5568);
    xsi_vlog_subprogram_popinvocation(t46);

LAB24:    t53 = (t2 + 64U);
    t54 = *((char **)t53);
    t53 = (t1 + 5568);
    t55 = (t2 + 56U);
    t57 = *((char **)t55);
    xsi_delete_subprogram_invocation(t53, t54, t1, t57, t2);
    xsi_set_current_line(245, ng0);
    t4 = (t1 + 11592);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 13992);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    xsi_vlog_signed_multiply(t10, 32, t6, 32, t9, 8);
    t11 = (t1 + 2920);
    t24 = *((char **)t11);
    memset(t34, 0, 8);
    xsi_vlog_signed_arith_rshift(t34, 32, t10, 32, t24, 32);
    t11 = (t1 + 11752);
    t25 = (t11 + 56U);
    t31 = *((char **)t25);
    t32 = (t1 + 13992);
    t33 = (t32 + 56U);
    t35 = *((char **)t33);
    memset(t60, 0, 8);
    xsi_vlog_signed_multiply(t60, 32, t31, 32, t35, 8);
    t36 = (t1 + 2920);
    t43 = *((char **)t36);
    memset(t66, 0, 8);
    xsi_vlog_signed_arith_rshift(t66, 32, t60, 32, t43, 32);
    t36 = (t2 + 56U);
    t44 = *((char **)t36);
    t45 = (t2 + 56U);
    t46 = *((char **)t45);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t46, &&LAB29);
    t47 = (t2 + 56U);
    t48 = *((char **)t47);
    t49 = (t1 + 6000);
    t50 = xsi_create_subprogram_invocation(t48, 0, t1, t49, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t49, t50);
    t51 = (t1 + 16072);
    xsi_vlogvar_assign_value(t51, t34, 0, 0, 8);
    t52 = (t1 + 16232);
    xsi_vlogvar_assign_value(t52, t66, 0, 0, 8);

LAB31:    t53 = (t2 + 64U);
    t54 = *((char **)t53);
    t55 = (t54 + 80U);
    t57 = *((char **)t55);
    t58 = (t57 + 272U);
    t59 = *((char **)t58);
    t61 = (t59 + 0U);
    t62 = *((char **)t61);
    t56 = ((int  (*)(char *, char *))t62)(t1, t54);
    if (t56 == -1)
        goto LAB32;

LAB33:    if (t56 != 0)
        goto LAB34;

LAB29:    t54 = (t1 + 6000);
    xsi_vlog_subprogram_popinvocation(t54);

LAB30:    t63 = (t2 + 64U);
    t64 = *((char **)t63);
    t63 = (t1 + 6000);
    t65 = (t2 + 56U);
    t67 = *((char **)t65);
    xsi_delete_subprogram_invocation(t63, t64, t1, t67, t2);
    xsi_set_current_line(248, ng0);
    t4 = (t1 + 13992);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng8)));
    t8 = (t1 + 2920);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    xsi_vlog_signed_lshift(t10, 32, t7, 32, t9, 32);
    t8 = ((char*)((ng8)));
    memset(t34, 0, 8);
    xsi_vlog_signed_minus(t34, 32, t10, 32, t8, 32);
    memset(t60, 0, 8);
    xsi_vlog_signed_equal(t60, 32, t6, 8, t34, 32);
    t11 = (t60 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t60);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(259, ng0);

LAB39:    xsi_set_current_line(261, ng0);
    t4 = (t1 + 13992);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng8)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 8, t7, 32);
    t8 = (t1 + 13992);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 8);
    xsi_set_current_line(262, ng0);
    t4 = (t1 + 13832);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng8)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t6, 2, t7, 32);
    t8 = (t1 + 13832);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 2);

LAB37:    xsi_set_current_line(265, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t7, &&LAB40);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t11 = (t1 + 6432);
    t24 = xsi_create_subprogram_invocation(t9, 0, t1, t11, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t11, t24);

LAB42:    t25 = (t2 + 64U);
    t31 = *((char **)t25);
    t32 = (t31 + 80U);
    t33 = *((char **)t32);
    t35 = (t33 + 272U);
    t36 = *((char **)t35);
    t43 = (t36 + 0U);
    t44 = *((char **)t43);
    t56 = ((int  (*)(char *, char *))t44)(t1, t31);
    if (t56 == -1)
        goto LAB43;

LAB44:    if (t56 != 0)
        goto LAB45;

LAB40:    t31 = (t1 + 6432);
    xsi_vlog_subprogram_popinvocation(t31);

LAB41:    t45 = (t2 + 64U);
    t46 = *((char **)t45);
    t45 = (t1 + 6432);
    t47 = (t2 + 56U);
    t48 = *((char **)t47);
    xsi_delete_subprogram_invocation(t45, t46, t1, t48, t2);
    xsi_set_current_line(267, ng0);
    t4 = (t1 + 12552);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng8)));
    t8 = (t1 + 2648);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 32, t7, 32, t9, 32);
    t8 = ((char*)((ng8)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_minus(t34, 32, t10, 32, t8, 32);
    memset(t60, 0, 8);
    t11 = (t6 + 4);
    t24 = (t34 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t34);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t11);
    t16 = *((unsigned int *)t24);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t24);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB49;

LAB46:    if (t21 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t60) = 1;

LAB49:    t31 = (t60 + 4);
    t26 = *((unsigned int *)t31);
    t27 = (~(t26));
    t28 = *((unsigned int *)t60);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(269, ng0);

LAB54:    xsi_set_current_line(270, ng0);
    t4 = (t1 + 12552);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng8)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t6, 16, t7, 32);
    t8 = (t1 + 12552);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 16);

LAB52:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB8:    t24 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(224, ng0);

LAB13:    xsi_set_current_line(225, ng0);
    t31 = (t1 + 10152);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t34, 0, 8);
    t35 = (t34 + 4);
    t36 = (t33 + 4);
    t37 = *((unsigned int *)t33);
    t38 = (t37 >> 0);
    t39 = (t38 & 1);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 >> 0);
    t42 = (t41 & 1);
    *((unsigned int *)t35) = t42;
    t43 = (t2 + 56U);
    t44 = *((char **)t43);
    t45 = (t1 + 4704);
    t46 = xsi_create_subprogram_invocation(t44, 0, t1, t45, 0, t2);
    t47 = (t1 + 14952);
    xsi_vlogvar_assign_value(t47, t34, 0, 0, 1);

LAB14:    t48 = (t2 + 64U);
    t49 = *((char **)t48);
    t50 = (t49 + 80U);
    t51 = *((char **)t50);
    t52 = (t51 + 272U);
    t53 = *((char **)t52);
    t54 = (t53 + 0U);
    t55 = *((char **)t54);
    t56 = ((int  (*)(char *, char *))t55)(t1, t49);
    if (t56 != 0)
        goto LAB16;

LAB15:    t49 = (t2 + 64U);
    t57 = *((char **)t49);
    t49 = (t1 + 15112);
    t58 = (t49 + 56U);
    t59 = *((char **)t58);
    memcpy(t60, t59, 8);
    t61 = (t1 + 4704);
    t62 = (t2 + 56U);
    t63 = *((char **)t62);
    xsi_delete_subprogram_invocation(t61, t57, t1, t63, t2);
    t64 = (t1 + 11272);
    xsi_vlogvar_assign_value(t64, t60, 0, 0, 8);
    t65 = (t1 + 10952);
    xsi_vlogvar_assign_value(t65, t60, 8, 0, 8);
    xsi_set_current_line(226, ng0);
    t4 = (t1 + 10952);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 10152);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t11 = (t10 + 4);
    t24 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t24);
    t16 = (t15 >> 0);
    t17 = (t16 & 1);
    *((unsigned int *)t11) = t17;
    t25 = (t1 + 10312);
    t31 = (t25 + 56U);
    t32 = *((char **)t31);
    memset(t34, 0, 8);
    t33 = (t34 + 4);
    t35 = (t32 + 4);
    t18 = *((unsigned int *)t32);
    t19 = (t18 >> 0);
    *((unsigned int *)t34) = t19;
    t20 = *((unsigned int *)t35);
    t21 = (t20 >> 0);
    *((unsigned int *)t33) = t21;
    t22 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t22 & 255U);
    t23 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t23 & 255U);
    t36 = (t2 + 56U);
    t43 = *((char **)t36);
    t44 = (t1 + 4272);
    t45 = xsi_create_subprogram_invocation(t43, 0, t1, t44, 0, t2);
    t46 = (t1 + 14472);
    xsi_vlogvar_assign_value(t46, t10, 0, 0, 1);
    t47 = (t1 + 14632);
    xsi_vlogvar_assign_value(t47, t34, 0, 0, 8);

LAB17:    t48 = (t2 + 64U);
    t49 = *((char **)t48);
    t50 = (t49 + 80U);
    t51 = *((char **)t50);
    t52 = (t51 + 272U);
    t53 = *((char **)t52);
    t54 = (t53 + 0U);
    t55 = *((char **)t54);
    t56 = ((int  (*)(char *, char *))t55)(t1, t49);
    if (t56 != 0)
        goto LAB19;

LAB18:    t49 = (t2 + 64U);
    t57 = *((char **)t49);
    t49 = (t1 + 14792);
    t58 = (t49 + 56U);
    t59 = *((char **)t58);
    memcpy(t60, t59, 8);
    t61 = (t1 + 4272);
    t62 = (t2 + 56U);
    t63 = *((char **)t62);
    xsi_delete_subprogram_invocation(t61, t57, t1, t63, t2);
    memset(t66, 0, 8);
    xsi_vlog_unsigned_add(t66, 8, t6, 8, t60, 8);
    t64 = (t1 + 10952);
    xsi_vlogvar_assign_value(t64, t66, 0, 0, 8);
    xsi_set_current_line(227, ng0);
    t4 = (t1 + 11272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 10312);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t11 = (t10 + 4);
    t24 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t24);
    t15 = (t14 >> 0);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 255U);
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 255U);
    memset(t34, 0, 8);
    xsi_vlog_unsigned_minus(t34, 8, t6, 8, t10, 8);
    t25 = (t1 + 11272);
    xsi_vlogvar_assign_value(t25, t34, 0, 0, 8);
    xsi_set_current_line(228, ng0);
    t4 = (t1 + 10152);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t8 = (t6 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 1);
    t14 = (t13 & 1);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 1);
    t17 = (t16 & 1);
    *((unsigned int *)t7) = t17;
    t9 = (t2 + 56U);
    t11 = *((char **)t9);
    t24 = (t1 + 4704);
    t25 = xsi_create_subprogram_invocation(t11, 0, t1, t24, 0, t2);
    t31 = (t1 + 14952);
    xsi_vlogvar_assign_value(t31, t10, 0, 0, 1);

LAB20:    t32 = (t2 + 64U);
    t33 = *((char **)t32);
    t35 = (t33 + 80U);
    t36 = *((char **)t35);
    t43 = (t36 + 272U);
    t44 = *((char **)t43);
    t45 = (t44 + 0U);
    t46 = *((char **)t45);
    t56 = ((int  (*)(char *, char *))t46)(t1, t33);
    if (t56 != 0)
        goto LAB22;

LAB21:    t33 = (t2 + 64U);
    t47 = *((char **)t33);
    t33 = (t1 + 15112);
    t48 = (t33 + 56U);
    t49 = *((char **)t48);
    memcpy(t34, t49, 8);
    t50 = (t1 + 4704);
    t51 = (t2 + 56U);
    t52 = *((char **)t51);
    xsi_delete_subprogram_invocation(t50, t47, t1, t52, t2);
    t53 = (t1 + 11432);
    xsi_vlogvar_assign_value(t53, t34, 0, 0, 8);
    t54 = (t1 + 11112);
    xsi_vlogvar_assign_value(t54, t34, 8, 0, 8);
    xsi_set_current_line(229, ng0);
    t4 = (t1 + 10952);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 11272);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = (t1 + 11112);
    t24 = (t11 + 56U);
    t25 = *((char **)t24);
    t31 = (t1 + 11432);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t35 = (t1 + 7728);
    xsi_vlogfile_write(1, 0, 0, ng26, 5, t35, (char)118, t6, 8, (char)118, t9, 8, (char)118, t25, 8, (char)118, t33, 8);
    xsi_set_current_line(231, ng0);
    t4 = (t1 + 11112);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 10952);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t6, 8, t9, 8);
    t11 = (t1 + 11592);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 32);
    xsi_set_current_line(232, ng0);
    t4 = (t1 + 11432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 11272);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t6, 8, t9, 8);
    t11 = (t1 + 11752);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 32);
    xsi_set_current_line(233, ng0);
    t4 = (t1 + 11592);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 11752);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = (t1 + 7728);
    xsi_vlogfile_write(1, 0, 0, ng27, 3, t11, (char)119, t6, 32, (char)119, t9, 32);
    xsi_set_current_line(234, ng0);
    t4 = (t1 + 3328);
    t5 = *((char **)t4);
    t4 = (t1 + 13512);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 1);
    xsi_set_current_line(235, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 13992);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(236, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 13832);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    goto LAB12;

LAB16:    t48 = (t2 + 48U);
    *((char **)t48) = &&LAB14;
    goto LAB1;

LAB19:    t48 = (t2 + 48U);
    *((char **)t48) = &&LAB17;
    goto LAB1;

LAB22:    t32 = (t2 + 48U);
    *((char **)t32) = &&LAB20;
    goto LAB1;

LAB26:    t0 = -1;
    goto LAB1;

LAB28:    t45 = (t2 + 48U);
    *((char **)t45) = &&LAB25;
    goto LAB1;

LAB32:    t0 = -1;
    goto LAB1;

LAB34:    t53 = (t2 + 48U);
    *((char **)t53) = &&LAB31;
    goto LAB1;

LAB35:    xsi_set_current_line(249, ng0);

LAB38:    xsi_set_current_line(250, ng0);
    t24 = (t1 + 10152);
    t25 = (t24 + 56U);
    t31 = *((char **)t25);
    t32 = (t1 + 10472);
    t33 = (t32 + 56U);
    t35 = *((char **)t33);
    t36 = (t1 + 10312);
    t43 = (t36 + 56U);
    t44 = *((char **)t43);
    memset(t66, 0, 8);
    t45 = (t66 + 4);
    t46 = (t44 + 4);
    t17 = *((unsigned int *)t44);
    t18 = (t17 >> 8);
    *((unsigned int *)t66) = t18;
    t19 = *((unsigned int *)t46);
    t20 = (t19 >> 8);
    *((unsigned int *)t45) = t20;
    t21 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t21 & 255U);
    t22 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t22 & 255U);
    t47 = (t1 + 10312);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    memset(t68, 0, 8);
    t50 = (t68 + 4);
    t51 = (t49 + 4);
    t23 = *((unsigned int *)t49);
    t26 = (t23 >> 0);
    *((unsigned int *)t68) = t26;
    t27 = *((unsigned int *)t51);
    t28 = (t27 >> 0);
    *((unsigned int *)t50) = t28;
    t29 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t29 & 255U);
    t30 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t30 & 255U);
    t52 = (t1 + 7728);
    xsi_vlogfile_write(1, 0, 0, ng28, 5, t52, (char)118, t31, 2, (char)118, t35, 3, (char)118, t66, 8, (char)118, t68, 8);
    xsi_set_current_line(252, ng0);
    t4 = (t1 + 10152);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t34, 0, 8);
    t7 = (t34 + 4);
    t8 = (t6 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 1);
    *((unsigned int *)t34) = t13;
    t14 = *((unsigned int *)t8);
    t15 = (t14 >> 1);
    *((unsigned int *)t7) = t15;
    t16 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t16 & 1U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 1U);
    t9 = (t1 + 13032);
    t11 = (t9 + 56U);
    t24 = *((char **)t11);
    xsi_vlogtype_concat(t10, 2, 2, 2U, t24, 1, t34, 1);
    t25 = (t1 + 10152);
    xsi_vlogvar_assign_value(t25, t10, 0, 0, 2);
    xsi_set_current_line(253, ng0);
    t4 = (t1 + 10472);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t34, 0, 8);
    t7 = (t34 + 4);
    t8 = (t6 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 1);
    *((unsigned int *)t34) = t13;
    t14 = *((unsigned int *)t8);
    t15 = (t14 >> 1);
    *((unsigned int *)t7) = t15;
    t16 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t16 & 3U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 3U);
    t9 = (t1 + 13192);
    t11 = (t9 + 56U);
    t24 = *((char **)t11);
    xsi_vlogtype_concat(t10, 3, 3, 2U, t24, 1, t34, 2);
    t25 = (t1 + 10472);
    xsi_vlogvar_assign_value(t25, t10, 0, 0, 3);
    xsi_set_current_line(254, ng0);
    t4 = (t1 + 10312);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t34, 0, 8);
    t7 = (t34 + 4);
    t8 = (t6 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 8);
    *((unsigned int *)t34) = t13;
    t14 = *((unsigned int *)t8);
    t15 = (t14 >> 8);
    *((unsigned int *)t7) = t15;
    t16 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t16 & 255U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t9 = (t1 + 13352);
    t11 = (t9 + 56U);
    t24 = *((char **)t11);
    xsi_vlogtype_concat(t10, 16, 16, 2U, t24, 8, t34, 8);
    t25 = (t1 + 10312);
    xsi_vlogvar_assign_value(t25, t10, 0, 0, 16);
    xsi_set_current_line(255, ng0);
    t4 = (t1 + 1832);
    t5 = *((char **)t4);
    t4 = (t1 + 9992);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 3);
    xsi_set_current_line(256, ng0);
    t4 = (t1 + 2784);
    t5 = *((char **)t4);
    t4 = (t1 + 13672);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 1);
    xsi_set_current_line(257, ng0);
    t4 = (t1 + 10152);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 10472);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = (t1 + 10312);
    t24 = (t11 + 56U);
    t25 = *((char **)t24);
    memset(t10, 0, 8);
    t31 = (t10 + 4);
    t32 = (t25 + 4);
    t12 = *((unsigned int *)t25);
    t13 = (t12 >> 8);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t32);
    t15 = (t14 >> 8);
    *((unsigned int *)t31) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 255U);
    t17 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t17 & 255U);
    t33 = (t1 + 10312);
    t35 = (t33 + 56U);
    t36 = *((char **)t35);
    memset(t34, 0, 8);
    t43 = (t34 + 4);
    t44 = (t36 + 4);
    t18 = *((unsigned int *)t36);
    t19 = (t18 >> 0);
    *((unsigned int *)t34) = t19;
    t20 = *((unsigned int *)t44);
    t21 = (t20 >> 0);
    *((unsigned int *)t43) = t21;
    t22 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t22 & 255U);
    t23 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t23 & 255U);
    t45 = (t1 + 7728);
    xsi_vlogfile_write(1, 0, 0, ng29, 5, t45, (char)118, t6, 2, (char)118, t9, 3, (char)118, t10, 8, (char)118, t34, 8);
    goto LAB37;

LAB43:    t0 = -1;
    goto LAB1;

LAB45:    t25 = (t2 + 48U);
    *((char **)t25) = &&LAB42;
    goto LAB1;

LAB48:    t25 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(267, ng0);

LAB53:    xsi_set_current_line(268, ng0);
    t32 = ((char*)((ng5)));
    t33 = (t1 + 12552);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 16);
    goto LAB52;

}

static int sp_static(char *t1, char *t2)
{
    char t34[8];
    int t0;
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
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 8160);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(279, ng0);

LAB5:    xsi_set_current_line(280, ng0);
    t5 = (t1 + 10152);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 10472);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t14, &&LAB6);
    t15 = (t2 + 56U);
    t16 = *((char **)t15);
    t17 = (t1 + 5568);
    t18 = xsi_create_subprogram_invocation(t16, 0, t1, t17, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t17, t18);
    t19 = (t1 + 15752);
    xsi_vlogvar_assign_value(t19, t7, 0, 0, 2);
    t20 = (t1 + 15912);
    xsi_vlogvar_assign_value(t20, t10, 0, 0, 3);

LAB8:    t21 = (t2 + 64U);
    t22 = *((char **)t21);
    t23 = (t22 + 80U);
    t24 = *((char **)t23);
    t25 = (t24 + 272U);
    t26 = *((char **)t25);
    t27 = (t26 + 0U);
    t28 = *((char **)t27);
    t29 = ((int  (*)(char *, char *))t28)(t1, t22);
    if (t29 == -1)
        goto LAB9;

LAB10:    if (t29 != 0)
        goto LAB11;

LAB6:    t22 = (t1 + 5568);
    xsi_vlog_subprogram_popinvocation(t22);

LAB7:    t30 = (t2 + 64U);
    t31 = *((char **)t30);
    t30 = (t1 + 5568);
    t32 = (t2 + 56U);
    t33 = *((char **)t32);
    xsi_delete_subprogram_invocation(t30, t31, t1, t33, t2);
    xsi_set_current_line(281, ng0);
    t4 = (t1 + 13672);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2784);
    t8 = *((char **)t7);
    memset(t34, 0, 8);
    t7 = (t6 + 4);
    t9 = (t8 + 4);
    t35 = *((unsigned int *)t6);
    t36 = *((unsigned int *)t8);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t7);
    t39 = *((unsigned int *)t9);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t7);
    t43 = *((unsigned int *)t9);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB15;

LAB12:    if (t44 != 0)
        goto LAB14;

LAB13:    *((unsigned int *)t34) = 1;

LAB15:    t11 = (t34 + 4);
    t47 = *((unsigned int *)t11);
    t48 = (~(t47));
    t49 = *((unsigned int *)t34);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB16;

LAB17:
LAB18:    xsi_set_current_line(283, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t7, &&LAB19);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 6432);
    t11 = xsi_create_subprogram_invocation(t9, 0, t1, t10, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t10, t11);

LAB21:    t12 = (t2 + 64U);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t29 = ((int  (*)(char *, char *))t19)(t1, t13);
    if (t29 == -1)
        goto LAB22;

LAB23:    if (t29 != 0)
        goto LAB24;

LAB19:    t13 = (t1 + 6432);
    xsi_vlog_subprogram_popinvocation(t13);

LAB20:    t20 = (t2 + 64U);
    t21 = *((char **)t20);
    t20 = (t1 + 6432);
    t22 = (t2 + 56U);
    t23 = *((char **)t22);
    xsi_delete_subprogram_invocation(t20, t21, t1, t23, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t21 = (t2 + 48U);
    *((char **)t21) = &&LAB8;
    goto LAB1;

LAB14:    t10 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB15;

LAB16:    xsi_set_current_line(282, ng0);
    t12 = (t1 + 2240);
    t13 = *((char **)t12);
    t12 = (t1 + 9992);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 3);
    goto LAB18;

LAB22:    t0 = -1;
    goto LAB1;

LAB24:    t12 = (t2 + 48U);
    *((char **)t12) = &&LAB21;
    goto LAB1;

}

static void Cont_48_0(char *t0)
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

LAB0:    t1 = (t0 + 17152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 10632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 10632);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 10632);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t5, 41, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 18856);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_bit_copy(t17, 0, t5, 0, 41);
    xsi_driver_vfirst_trans(t13, 0, 40);
    t18 = (t0 + 18712);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_49_1(char *t0)
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

LAB0:    t1 = (t0 + 17400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 10632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 10632);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 10632);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t5, 41, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 18920);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_bit_copy(t17, 0, t5, 0, 41);
    xsi_driver_vfirst_trans(t13, 0, 40);
    t18 = (t0 + 18728);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_50_2(char *t0)
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

LAB0:    t1 = (t0 + 17648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 10632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 10632);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 10632);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng13)));
    xsi_vlog_generic_get_array_select_value(t5, 41, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 18984);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_bit_copy(t17, 0, t5, 0, 41);
    xsi_driver_vfirst_trans(t13, 0, 40);
    t18 = (t0 + 18744);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_53_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 17896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 10792);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 19048);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 16777215U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 23);
    t18 = (t0 + 18760);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_287_4(char *t0)
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

LAB0:    t1 = (t0 + 18144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(287, ng0);
    t2 = (t0 + 18776);
    *((int *)t2) = 1;
    t3 = (t0 + 18176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(287, ng0);

LAB5:    xsi_set_current_line(288, ng0);
    t4 = (t0 + 9992);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = (t0 + 1696);
    t8 = *((char **)t7);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t8, 32);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 2240);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(289, ng0);
    t7 = (t0 + 17952);
    t10 = (t0 + 6864);
    t11 = xsi_create_subprogram_invocation(t7, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);

LAB18:    t12 = (t0 + 18048);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t20 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB20:    if (t20 != 0)
        goto LAB21;

LAB16:    t13 = (t0 + 6864);
    xsi_vlog_subprogram_popinvocation(t13);

LAB17:    t21 = (t0 + 18048);
    t22 = *((char **)t21);
    t21 = (t0 + 6864);
    t23 = (t0 + 17952);
    t24 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t0, t23, t24);
    goto LAB15;

LAB9:    xsi_set_current_line(290, ng0);
    t2 = (t0 + 17952);
    t4 = (t0 + 8160);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB24:    t7 = (t0 + 18048);
    t8 = *((char **)t7);
    t10 = (t8 + 80U);
    t11 = *((char **)t10);
    t12 = (t11 + 272U);
    t13 = *((char **)t12);
    t14 = (t13 + 0U);
    t15 = *((char **)t14);
    t20 = ((int  (*)(char *, char *))t15)(t0, t8);

LAB26:    if (t20 != 0)
        goto LAB27;

LAB22:    t8 = (t0 + 8160);
    xsi_vlog_subprogram_popinvocation(t8);

LAB23:    t16 = (t0 + 18048);
    t17 = *((char **)t16);
    t16 = (t0 + 8160);
    t18 = (t0 + 17952);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    goto LAB15;

LAB11:    xsi_set_current_line(291, ng0);
    t2 = (t0 + 17952);
    t4 = (t0 + 7728);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB30:    t7 = (t0 + 18048);
    t8 = *((char **)t7);
    t10 = (t8 + 80U);
    t11 = *((char **)t10);
    t12 = (t11 + 272U);
    t13 = *((char **)t12);
    t14 = (t13 + 0U);
    t15 = *((char **)t14);
    t20 = ((int  (*)(char *, char *))t15)(t0, t8);

LAB32:    if (t20 != 0)
        goto LAB33;

LAB28:    t8 = (t0 + 7728);
    xsi_vlog_subprogram_popinvocation(t8);

LAB29:    t16 = (t0 + 18048);
    t17 = *((char **)t16);
    t16 = (t0 + 7728);
    t18 = (t0 + 17952);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    goto LAB15;

LAB13:    xsi_set_current_line(292, ng0);
    t2 = (t0 + 17952);
    t4 = (t0 + 7296);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB36:    t7 = (t0 + 18048);
    t8 = *((char **)t7);
    t10 = (t8 + 80U);
    t11 = *((char **)t10);
    t12 = (t11 + 272U);
    t13 = *((char **)t12);
    t14 = (t13 + 0U);
    t15 = *((char **)t14);
    t20 = ((int  (*)(char *, char *))t15)(t0, t8);

LAB38:    if (t20 != 0)
        goto LAB39;

LAB34:    t8 = (t0 + 7296);
    xsi_vlog_subprogram_popinvocation(t8);

LAB35:    t16 = (t0 + 18048);
    t17 = *((char **)t16);
    t16 = (t0 + 7296);
    t18 = (t0 + 17952);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    goto LAB15;

LAB19:;
LAB21:    t12 = (t0 + 18144U);
    *((char **)t12) = &&LAB18;
    goto LAB1;

LAB25:;
LAB27:    t7 = (t0 + 18144U);
    *((char **)t7) = &&LAB24;
    goto LAB1;

LAB31:;
LAB33:    t7 = (t0 + 18144U);
    *((char **)t7) = &&LAB30;
    goto LAB1;

LAB37:;
LAB39:    t7 = (t0 + 18144U);
    *((char **)t7) = &&LAB36;
    goto LAB1;

}

static void Initial_297_5(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(297, ng0);

LAB2:    xsi_set_current_line(298, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 9992);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);

LAB1:    return;
}


extern void work_m_00000000001105217239_2030911003_init()
{
	static char *pe[] = {(void *)Cont_48_0,(void *)Cont_49_1,(void *)Cont_50_2,(void *)Cont_53_3,(void *)Always_287_4,(void *)Initial_297_5};
	static char *se[] = {(void *)sp_colorscheme,(void *)sp_s_dist,(void *)sp_base,(void *)sp_last8bits,(void *)sp_layout_to_xy,(void *)sp_shift_xy,(void *)sp_updatePlayer,(void *)sp_reset,(void *)sp_gen_next,(void *)sp_shift,(void *)sp_static};
	xsi_register_didat("work_m_00000000001105217239_2030911003", "isim/tb_isim_beh.exe.sim/work/m_00000000001105217239_2030911003.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
