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
static const char *ng0 = "C:/Users/152/Downloads/0226/renderer.v";
static const char *ng1 = "%d %d %d";
static int ng2[] = {80, 0};
static int ng3[] = {3, 0};
static int ng4[] = {1, 0};
static const char *ng5 = "here in draw_sq, %b, %d, %d";
static int ng6[] = {40, 0};
static int ng7[] = {8, 0};
static int ng8[] = {32, 0};
static int ng9[] = {24, 0};
static int ng10[] = {16, 0};
static int ng11[] = {5, 0};
static int ng12[] = {2, 0};
static int ng13[] = {0, 0};
static int ng14[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng15[] = {0U, 0U};
static const char *ng16 = "in drawing mode";
static const char *ng17 = "about to quit";



static int sp_draw_square(char *t1, char *t2)
{
    char t15[8];
    char t16[8];
    char t30[8];
    char t37[8];
    char t41[8];
    char t42[8];
    char t46[8];
    char t64[8];
    char t71[8];
    char t75[8];
    char t76[8];
    char t80[8];
    char t88[8];
    char t120[8];
    char t138[8];
    char t145[8];
    char t149[8];
    char t150[8];
    char t154[8];
    char t162[8];
    char t194[8];
    char t212[8];
    char t219[8];
    char t223[8];
    char t224[8];
    char t228[8];
    char t236[8];
    char t278[8];
    char t279[8];
    char t280[8];
    char t288[8];
    char t292[8];
    char t294[8];
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
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t43;
    char *t44;
    char *t45;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t72;
    char *t73;
    char *t74;
    char *t77;
    char *t78;
    char *t79;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    int t112;
    int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    char *t133;
    char *t134;
    char *t135;
    char *t136;
    char *t137;
    char *t139;
    char *t140;
    char *t141;
    char *t142;
    char *t143;
    char *t144;
    char *t146;
    char *t147;
    char *t148;
    char *t151;
    char *t152;
    char *t153;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    char *t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    char *t176;
    char *t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    int t186;
    int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    char *t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    char *t201;
    char *t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    char *t206;
    char *t207;
    char *t208;
    char *t209;
    char *t210;
    char *t211;
    char *t213;
    char *t214;
    char *t215;
    char *t216;
    char *t217;
    char *t218;
    char *t220;
    char *t221;
    char *t222;
    char *t225;
    char *t226;
    char *t227;
    char *t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    char *t235;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    char *t240;
    char *t241;
    char *t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    char *t250;
    char *t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    int t260;
    int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    char *t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    char *t274;
    char *t275;
    char *t276;
    char *t277;
    char *t281;
    char *t282;
    char *t283;
    char *t284;
    char *t285;
    char *t286;
    char *t287;
    char *t289;
    char *t290;
    char *t291;
    char *t293;
    char *t295;
    char *t296;
    unsigned int t297;
    int t298;
    char *t299;
    unsigned int t300;
    int t301;
    int t302;
    char *t303;
    unsigned int t304;
    int t305;
    int t306;
    unsigned int t307;
    int t308;
    unsigned int t309;
    unsigned int t310;
    int t311;
    int t312;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1392);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t5 = (t1 + 4136);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 4296);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 4456);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 1392);
    xsi_vlogfile_write(1, 0, 0, ng1, 4, t14, (char)118, t7, 8, (char)118, t10, 8, (char)118, t13, 8);
    xsi_set_current_line(52, ng0);
    xsi_set_current_line(52, ng0);
    t4 = (t1 + 4296);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4456);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 32, t6, 8, t9, 8);
    t10 = (t1 + 3816);
    xsi_vlogvar_assign_value(t10, t15, 0, 0, 32);

LAB6:    t4 = (t1 + 3816);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4296);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 4456);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t9, 8, t12, 8);
    memset(t16, 0, 8);
    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB8;

LAB7:    t14 = (t15 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB8;

LAB11:    if (*((unsigned int *)t6) > *((unsigned int *)t15))
        goto LAB10;

LAB9:    *((unsigned int *)t16) = 1;

LAB10:    t18 = (t16 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (~(t19));
    t21 = *((unsigned int *)t16);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(65, ng0);
    xsi_set_current_line(65, ng0);
    t4 = (t1 + 4136);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4456);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 32, t6, 8, t9, 8);
    t10 = (t1 + 3656);
    xsi_vlogvar_assign_value(t10, t15, 0, 0, 32);

LAB92:    t4 = (t1 + 3656);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4136);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t15, 0, 8);
    t10 = (t6 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB94;

LAB93:    t11 = (t9 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB94;

LAB97:    if (*((unsigned int *)t6) > *((unsigned int *)t9))
        goto LAB96;

LAB95:    *((unsigned int *)t15) = 1;

LAB96:    t13 = (t15 + 4);
    t19 = *((unsigned int *)t13);
    t20 = (~(t19));
    t21 = *((unsigned int *)t15);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB98;

LAB99:    xsi_set_current_line(72, ng0);
    xsi_set_current_line(72, ng0);
    t4 = (t1 + 4136);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4456);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t6, 8, t9, 8);
    t10 = (t1 + 3656);
    xsi_vlogvar_assign_value(t10, t15, 0, 0, 32);

LAB112:    t4 = (t1 + 3656);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4136);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng4)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t9, 8, t10, 32);
    memset(t16, 0, 8);
    t11 = (t6 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB114;

LAB113:    t12 = (t15 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB114;

LAB117:    if (*((unsigned int *)t6) < *((unsigned int *)t15))
        goto LAB116;

LAB115:    *((unsigned int *)t16) = 1;

LAB116:    t14 = (t16 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (~(t19));
    t21 = *((unsigned int *)t16);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB118;

LAB119:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB8:    t17 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB10;

LAB12:    xsi_set_current_line(52, ng0);

LAB14:    xsi_set_current_line(53, ng0);
    xsi_set_current_line(53, ng0);
    t24 = (t1 + 4136);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t1 + 4456);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t30, 0, 8);
    xsi_vlog_unsigned_minus(t30, 32, t26, 8, t29, 8);
    t31 = (t1 + 3656);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 32);

LAB15:    t4 = (t1 + 3656);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4136);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 4456);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t9, 8, t12, 8);
    memset(t16, 0, 8);
    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB17;

LAB16:    t14 = (t15 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB17;

LAB20:    if (*((unsigned int *)t6) > *((unsigned int *)t15))
        goto LAB19;

LAB18:    *((unsigned int *)t16) = 1;

LAB19:    t18 = (t16 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (~(t19));
    t21 = *((unsigned int *)t16);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(52, ng0);
    t4 = (t1 + 3816);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t6, 32, t7, 32);
    t8 = (t1 + 3816);
    xsi_vlogvar_assign_value(t8, t15, 0, 0, 32);
    goto LAB6;

LAB17:    t17 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB19;

LAB21:    xsi_set_current_line(53, ng0);

LAB23:    xsi_set_current_line(54, ng0);
    t24 = (t1 + 3656);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t1 + 3816);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t26, 32, t29, 32);
    t31 = (t1 + 4136);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t1 + 4296);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t33, 8, t36, 8);
    t38 = (t1 + 4456);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memset(t41, 0, 8);
    xsi_vlog_unsigned_minus(t41, 32, t37, 32, t40, 8);
    memset(t42, 0, 8);
    t43 = (t30 + 4);
    if (*((unsigned int *)t43) != 0)
        goto LAB25;

LAB24:    t44 = (t41 + 4);
    if (*((unsigned int *)t44) != 0)
        goto LAB25;

LAB28:    if (*((unsigned int *)t30) < *((unsigned int *)t41))
        goto LAB27;

LAB26:    *((unsigned int *)t42) = 1;

LAB27:    memset(t46, 0, 8);
    t47 = (t42 + 4);
    t48 = *((unsigned int *)t47);
    t49 = (~(t48));
    t50 = *((unsigned int *)t42);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t47) != 0)
        goto LAB31;

LAB32:    t54 = (t46 + 4);
    t55 = *((unsigned int *)t46);
    t56 = *((unsigned int *)t54);
    t57 = (t55 || t56);
    if (t57 > 0)
        goto LAB33;

LAB34:    memcpy(t88, t46, 8);

LAB35:    memset(t120, 0, 8);
    t121 = (t88 + 4);
    t122 = *((unsigned int *)t121);
    t123 = (~(t122));
    t124 = *((unsigned int *)t88);
    t125 = (t124 & t123);
    t126 = (t125 & 1U);
    if (t126 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t121) != 0)
        goto LAB50;

LAB51:    t128 = (t120 + 4);
    t129 = *((unsigned int *)t120);
    t130 = *((unsigned int *)t128);
    t131 = (t129 || t130);
    if (t131 > 0)
        goto LAB52;

LAB53:    memcpy(t162, t120, 8);

LAB54:    memset(t194, 0, 8);
    t195 = (t162 + 4);
    t196 = *((unsigned int *)t195);
    t197 = (~(t196));
    t198 = *((unsigned int *)t162);
    t199 = (t198 & t197);
    t200 = (t199 & 1U);
    if (t200 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t195) != 0)
        goto LAB69;

LAB70:    t202 = (t194 + 4);
    t203 = *((unsigned int *)t194);
    t204 = *((unsigned int *)t202);
    t205 = (t203 || t204);
    if (t205 > 0)
        goto LAB71;

LAB72:    memcpy(t236, t194, 8);

LAB73:    t268 = (t236 + 4);
    t269 = *((unsigned int *)t268);
    t270 = (~(t269));
    t271 = *((unsigned int *)t236);
    t272 = (t271 & t270);
    t273 = (t272 != 0);
    if (t273 > 0)
        goto LAB86;

LAB87:
LAB88:    xsi_set_current_line(53, ng0);
    t4 = (t1 + 3656);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t6, 32, t7, 32);
    t8 = (t1 + 3656);
    xsi_vlogvar_assign_value(t8, t15, 0, 0, 32);
    goto LAB15;

LAB25:    t45 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB27;

LAB29:    *((unsigned int *)t46) = 1;
    goto LAB32;

LAB31:    t53 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB32;

LAB33:    t58 = (t1 + 3656);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    t61 = (t1 + 3816);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    memset(t64, 0, 8);
    xsi_vlog_unsigned_add(t64, 32, t60, 32, t63, 32);
    t65 = (t1 + 4136);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    t68 = (t1 + 4296);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    memset(t71, 0, 8);
    xsi_vlog_unsigned_add(t71, 32, t67, 8, t70, 8);
    t72 = (t1 + 4456);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    memset(t75, 0, 8);
    xsi_vlog_unsigned_add(t75, 32, t71, 32, t74, 8);
    memset(t76, 0, 8);
    t77 = (t64 + 4);
    if (*((unsigned int *)t77) != 0)
        goto LAB37;

LAB36:    t78 = (t75 + 4);
    if (*((unsigned int *)t78) != 0)
        goto LAB37;

LAB40:    if (*((unsigned int *)t64) > *((unsigned int *)t75))
        goto LAB39;

LAB38:    *((unsigned int *)t76) = 1;

LAB39:    memset(t80, 0, 8);
    t81 = (t76 + 4);
    t82 = *((unsigned int *)t81);
    t83 = (~(t82));
    t84 = *((unsigned int *)t76);
    t85 = (t84 & t83);
    t86 = (t85 & 1U);
    if (t86 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t81) != 0)
        goto LAB43;

LAB44:    t89 = *((unsigned int *)t46);
    t90 = *((unsigned int *)t80);
    t91 = (t89 & t90);
    *((unsigned int *)t88) = t91;
    t92 = (t46 + 4);
    t93 = (t80 + 4);
    t94 = (t88 + 4);
    t95 = *((unsigned int *)t92);
    t96 = *((unsigned int *)t93);
    t97 = (t95 | t96);
    *((unsigned int *)t94) = t97;
    t98 = *((unsigned int *)t94);
    t99 = (t98 != 0);
    if (t99 == 1)
        goto LAB45;

LAB46:
LAB47:    goto LAB35;

LAB37:    t79 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB39;

LAB41:    *((unsigned int *)t80) = 1;
    goto LAB44;

LAB43:    t87 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t87) = 1;
    goto LAB44;

LAB45:    t100 = *((unsigned int *)t88);
    t101 = *((unsigned int *)t94);
    *((unsigned int *)t88) = (t100 | t101);
    t102 = (t46 + 4);
    t103 = (t80 + 4);
    t104 = *((unsigned int *)t46);
    t105 = (~(t104));
    t106 = *((unsigned int *)t102);
    t107 = (~(t106));
    t108 = *((unsigned int *)t80);
    t109 = (~(t108));
    t110 = *((unsigned int *)t103);
    t111 = (~(t110));
    t112 = (t105 & t107);
    t113 = (t109 & t111);
    t114 = (~(t112));
    t115 = (~(t113));
    t116 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t116 & t114);
    t117 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t117 & t115);
    t118 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t118 & t114);
    t119 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t119 & t115);
    goto LAB47;

LAB48:    *((unsigned int *)t120) = 1;
    goto LAB51;

LAB50:    t127 = (t120 + 4);
    *((unsigned int *)t120) = 1;
    *((unsigned int *)t127) = 1;
    goto LAB51;

LAB52:    t132 = (t1 + 3656);
    t133 = (t132 + 56U);
    t134 = *((char **)t133);
    t135 = (t1 + 3816);
    t136 = (t135 + 56U);
    t137 = *((char **)t136);
    memset(t138, 0, 8);
    xsi_vlog_unsigned_minus(t138, 32, t134, 32, t137, 32);
    t139 = (t1 + 4136);
    t140 = (t139 + 56U);
    t141 = *((char **)t140);
    t142 = (t1 + 4296);
    t143 = (t142 + 56U);
    t144 = *((char **)t143);
    memset(t145, 0, 8);
    xsi_vlog_unsigned_minus(t145, 32, t141, 8, t144, 8);
    t146 = (t1 + 4456);
    t147 = (t146 + 56U);
    t148 = *((char **)t147);
    memset(t149, 0, 8);
    xsi_vlog_unsigned_minus(t149, 32, t145, 32, t148, 8);
    memset(t150, 0, 8);
    t151 = (t138 + 4);
    if (*((unsigned int *)t151) != 0)
        goto LAB56;

LAB55:    t152 = (t149 + 4);
    if (*((unsigned int *)t152) != 0)
        goto LAB56;

LAB59:    if (*((unsigned int *)t138) < *((unsigned int *)t149))
        goto LAB58;

LAB57:    *((unsigned int *)t150) = 1;

LAB58:    memset(t154, 0, 8);
    t155 = (t150 + 4);
    t156 = *((unsigned int *)t155);
    t157 = (~(t156));
    t158 = *((unsigned int *)t150);
    t159 = (t158 & t157);
    t160 = (t159 & 1U);
    if (t160 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t155) != 0)
        goto LAB62;

LAB63:    t163 = *((unsigned int *)t120);
    t164 = *((unsigned int *)t154);
    t165 = (t163 & t164);
    *((unsigned int *)t162) = t165;
    t166 = (t120 + 4);
    t167 = (t154 + 4);
    t168 = (t162 + 4);
    t169 = *((unsigned int *)t166);
    t170 = *((unsigned int *)t167);
    t171 = (t169 | t170);
    *((unsigned int *)t168) = t171;
    t172 = *((unsigned int *)t168);
    t173 = (t172 != 0);
    if (t173 == 1)
        goto LAB64;

LAB65:
LAB66:    goto LAB54;

LAB56:    t153 = (t150 + 4);
    *((unsigned int *)t150) = 1;
    *((unsigned int *)t153) = 1;
    goto LAB58;

LAB60:    *((unsigned int *)t154) = 1;
    goto LAB63;

LAB62:    t161 = (t154 + 4);
    *((unsigned int *)t154) = 1;
    *((unsigned int *)t161) = 1;
    goto LAB63;

LAB64:    t174 = *((unsigned int *)t162);
    t175 = *((unsigned int *)t168);
    *((unsigned int *)t162) = (t174 | t175);
    t176 = (t120 + 4);
    t177 = (t154 + 4);
    t178 = *((unsigned int *)t120);
    t179 = (~(t178));
    t180 = *((unsigned int *)t176);
    t181 = (~(t180));
    t182 = *((unsigned int *)t154);
    t183 = (~(t182));
    t184 = *((unsigned int *)t177);
    t185 = (~(t184));
    t186 = (t179 & t181);
    t187 = (t183 & t185);
    t188 = (~(t186));
    t189 = (~(t187));
    t190 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t190 & t188);
    t191 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t191 & t189);
    t192 = *((unsigned int *)t162);
    *((unsigned int *)t162) = (t192 & t188);
    t193 = *((unsigned int *)t162);
    *((unsigned int *)t162) = (t193 & t189);
    goto LAB66;

LAB67:    *((unsigned int *)t194) = 1;
    goto LAB70;

LAB69:    t201 = (t194 + 4);
    *((unsigned int *)t194) = 1;
    *((unsigned int *)t201) = 1;
    goto LAB70;

LAB71:    t206 = (t1 + 3656);
    t207 = (t206 + 56U);
    t208 = *((char **)t207);
    t209 = (t1 + 3816);
    t210 = (t209 + 56U);
    t211 = *((char **)t210);
    memset(t212, 0, 8);
    xsi_vlog_unsigned_minus(t212, 32, t208, 32, t211, 32);
    t213 = (t1 + 4136);
    t214 = (t213 + 56U);
    t215 = *((char **)t214);
    t216 = (t1 + 4296);
    t217 = (t216 + 56U);
    t218 = *((char **)t217);
    memset(t219, 0, 8);
    xsi_vlog_unsigned_minus(t219, 32, t215, 8, t218, 8);
    t220 = (t1 + 4456);
    t221 = (t220 + 56U);
    t222 = *((char **)t221);
    memset(t223, 0, 8);
    xsi_vlog_unsigned_add(t223, 32, t219, 32, t222, 8);
    memset(t224, 0, 8);
    t225 = (t212 + 4);
    if (*((unsigned int *)t225) != 0)
        goto LAB75;

LAB74:    t226 = (t223 + 4);
    if (*((unsigned int *)t226) != 0)
        goto LAB75;

LAB78:    if (*((unsigned int *)t212) > *((unsigned int *)t223))
        goto LAB77;

LAB76:    *((unsigned int *)t224) = 1;

LAB77:    memset(t228, 0, 8);
    t229 = (t224 + 4);
    t230 = *((unsigned int *)t229);
    t231 = (~(t230));
    t232 = *((unsigned int *)t224);
    t233 = (t232 & t231);
    t234 = (t233 & 1U);
    if (t234 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t229) != 0)
        goto LAB81;

LAB82:    t237 = *((unsigned int *)t194);
    t238 = *((unsigned int *)t228);
    t239 = (t237 & t238);
    *((unsigned int *)t236) = t239;
    t240 = (t194 + 4);
    t241 = (t228 + 4);
    t242 = (t236 + 4);
    t243 = *((unsigned int *)t240);
    t244 = *((unsigned int *)t241);
    t245 = (t243 | t244);
    *((unsigned int *)t242) = t245;
    t246 = *((unsigned int *)t242);
    t247 = (t246 != 0);
    if (t247 == 1)
        goto LAB83;

LAB84:
LAB85:    goto LAB73;

LAB75:    t227 = (t224 + 4);
    *((unsigned int *)t224) = 1;
    *((unsigned int *)t227) = 1;
    goto LAB77;

LAB79:    *((unsigned int *)t228) = 1;
    goto LAB82;

LAB81:    t235 = (t228 + 4);
    *((unsigned int *)t228) = 1;
    *((unsigned int *)t235) = 1;
    goto LAB82;

LAB83:    t248 = *((unsigned int *)t236);
    t249 = *((unsigned int *)t242);
    *((unsigned int *)t236) = (t248 | t249);
    t250 = (t194 + 4);
    t251 = (t228 + 4);
    t252 = *((unsigned int *)t194);
    t253 = (~(t252));
    t254 = *((unsigned int *)t250);
    t255 = (~(t254));
    t256 = *((unsigned int *)t228);
    t257 = (~(t256));
    t258 = *((unsigned int *)t251);
    t259 = (~(t258));
    t260 = (t253 & t255);
    t261 = (t257 & t259);
    t262 = (~(t260));
    t263 = (~(t261));
    t264 = *((unsigned int *)t242);
    *((unsigned int *)t242) = (t264 & t262);
    t265 = *((unsigned int *)t242);
    *((unsigned int *)t242) = (t265 & t263);
    t266 = *((unsigned int *)t236);
    *((unsigned int *)t236) = (t266 & t262);
    t267 = *((unsigned int *)t236);
    *((unsigned int *)t236) = (t267 & t263);
    goto LAB85;

LAB86:    xsi_set_current_line(57, ng0);

LAB89:    xsi_set_current_line(58, ng0);
    t274 = (t1 + 4776);
    t275 = (t274 + 56U);
    t276 = *((char **)t275);
    t277 = (t1 + 3496);
    t281 = (t1 + 3496);
    t282 = (t281 + 72U);
    t283 = *((char **)t282);
    t284 = (t1 + 3816);
    t285 = (t284 + 56U);
    t286 = *((char **)t285);
    t287 = ((char*)((ng2)));
    memset(t288, 0, 8);
    xsi_vlog_unsigned_multiply(t288, 32, t286, 32, t287, 32);
    t289 = (t1 + 3656);
    t290 = (t289 + 56U);
    t291 = *((char **)t290);
    memset(t292, 0, 8);
    xsi_vlog_unsigned_add(t292, 32, t288, 32, t291, 32);
    t293 = ((char*)((ng3)));
    memset(t294, 0, 8);
    xsi_vlog_unsigned_multiply(t294, 32, t292, 32, t293, 32);
    t295 = ((char*)((ng3)));
    xsi_vlog_convert_indexed_partindices(t278, t279, t280, ((int*)(t283)), 2, t294, 32, 2, t295, 32, 1, 1);
    t296 = (t278 + 4);
    t297 = *((unsigned int *)t296);
    t298 = (!(t297));
    t299 = (t279 + 4);
    t300 = *((unsigned int *)t299);
    t301 = (!(t300));
    t302 = (t298 && t301);
    t303 = (t280 + 4);
    t304 = *((unsigned int *)t303);
    t305 = (!(t304));
    t306 = (t302 && t305);
    if (t306 == 1)
        goto LAB90;

LAB91:    goto LAB88;

LAB90:    t307 = *((unsigned int *)t280);
    t308 = (t307 + 0);
    t309 = *((unsigned int *)t278);
    t310 = *((unsigned int *)t279);
    t311 = (t309 - t310);
    t312 = (t311 + 1);
    xsi_vlogvar_assign_value(t277, t276, t308, *((unsigned int *)t279), t312);
    goto LAB91;

LAB94:    t12 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB96;

LAB98:    xsi_set_current_line(65, ng0);

LAB100:    xsi_set_current_line(66, ng0);
    xsi_set_current_line(66, ng0);
    t14 = (t1 + 4296);
    t17 = (t14 + 56U);
    t18 = *((char **)t17);
    t24 = (t1 + 3656);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t18, 8, t26, 32);
    t27 = (t1 + 4136);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t31 = (t1 + 4456);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t30, 0, 8);
    xsi_vlog_unsigned_minus(t30, 32, t29, 8, t33, 8);
    memset(t37, 0, 8);
    xsi_vlog_unsigned_minus(t37, 32, t16, 32, t30, 32);
    t34 = ((char*)((ng4)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_add(t41, 32, t37, 32, t34, 32);
    t35 = (t1 + 3816);
    xsi_vlogvar_assign_value(t35, t41, 0, 0, 32);

LAB101:    t4 = (t1 + 3816);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4296);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 3656);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t9, 8, t12, 32);
    t13 = (t1 + 4136);
    t14 = (t13 + 56U);
    t17 = *((char **)t14);
    t18 = (t1 + 4456);
    t24 = (t18 + 56U);
    t25 = *((char **)t24);
    memset(t16, 0, 8);
    xsi_vlog_unsigned_minus(t16, 32, t17, 8, t25, 8);
    memset(t30, 0, 8);
    xsi_vlog_unsigned_minus(t30, 32, t15, 32, t16, 32);
    t26 = (t1 + 4616);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t30, 32, t28, 8);
    memset(t41, 0, 8);
    t29 = (t6 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB103;

LAB102:    t31 = (t37 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB103;

LAB106:    if (*((unsigned int *)t6) > *((unsigned int *)t37))
        goto LAB105;

LAB104:    *((unsigned int *)t41) = 1;

LAB105:    t33 = (t41 + 4);
    t19 = *((unsigned int *)t33);
    t20 = (~(t19));
    t21 = *((unsigned int *)t41);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB107;

LAB108:    xsi_set_current_line(65, ng0);
    t4 = (t1 + 3656);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t6, 32, t7, 32);
    t8 = (t1 + 3656);
    xsi_vlogvar_assign_value(t8, t15, 0, 0, 32);
    goto LAB92;

LAB103:    t32 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB105;

LAB107:    xsi_set_current_line(66, ng0);

LAB109:    xsi_set_current_line(67, ng0);
    t34 = (t1 + 4936);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t38 = (t1 + 3496);
    t39 = (t1 + 3496);
    t40 = (t39 + 72U);
    t43 = *((char **)t40);
    t44 = (t1 + 3816);
    t45 = (t44 + 56U);
    t47 = *((char **)t45);
    t53 = ((char*)((ng2)));
    memset(t71, 0, 8);
    xsi_vlog_unsigned_multiply(t71, 32, t47, 32, t53, 32);
    t54 = (t1 + 3656);
    t58 = (t54 + 56U);
    t59 = *((char **)t58);
    memset(t75, 0, 8);
    xsi_vlog_unsigned_add(t75, 32, t71, 32, t59, 32);
    t60 = ((char*)((ng3)));
    memset(t76, 0, 8);
    xsi_vlog_unsigned_multiply(t76, 32, t75, 32, t60, 32);
    t61 = ((char*)((ng3)));
    xsi_vlog_convert_indexed_partindices(t42, t46, t64, ((int*)(t43)), 2, t76, 32, 2, t61, 32, 1, 1);
    t62 = (t42 + 4);
    t48 = *((unsigned int *)t62);
    t112 = (!(t48));
    t63 = (t46 + 4);
    t49 = *((unsigned int *)t63);
    t113 = (!(t49));
    t186 = (t112 && t113);
    t65 = (t64 + 4);
    t50 = *((unsigned int *)t65);
    t187 = (!(t50));
    t260 = (t186 && t187);
    if (t260 == 1)
        goto LAB110;

LAB111:    xsi_set_current_line(66, ng0);
    t4 = (t1 + 3816);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t6, 32, t7, 32);
    t8 = (t1 + 3816);
    xsi_vlogvar_assign_value(t8, t15, 0, 0, 32);
    goto LAB101;

LAB110:    t51 = *((unsigned int *)t64);
    t261 = (t51 + 0);
    t52 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t46);
    t298 = (t52 - t55);
    t301 = (t298 + 1);
    xsi_vlogvar_assign_value(t38, t36, t261, *((unsigned int *)t46), t301);
    goto LAB111;

LAB114:    t13 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB116;

LAB118:    xsi_set_current_line(72, ng0);

LAB120:    xsi_set_current_line(73, ng0);
    xsi_set_current_line(73, ng0);
    t17 = (t1 + 4296);
    t18 = (t17 + 56U);
    t24 = *((char **)t18);
    t25 = (t1 + 4136);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t1 + 4456);
    t29 = (t28 + 56U);
    t31 = *((char **)t29);
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t27, 8, t31, 8);
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t24, 8, t30, 32);
    t32 = (t1 + 3656);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memset(t41, 0, 8);
    xsi_vlog_unsigned_minus(t41, 32, t37, 32, t34, 32);
    t35 = ((char*)((ng4)));
    memset(t42, 0, 8);
    xsi_vlog_unsigned_add(t42, 32, t41, 32, t35, 32);
    t36 = (t1 + 3816);
    xsi_vlogvar_assign_value(t36, t42, 0, 0, 32);

LAB121:    t4 = (t1 + 3816);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4296);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 4136);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t1 + 4456);
    t14 = (t13 + 56U);
    t17 = *((char **)t14);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t12, 8, t17, 8);
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t9, 8, t15, 32);
    t18 = (t1 + 3656);
    t24 = (t18 + 56U);
    t25 = *((char **)t24);
    memset(t30, 0, 8);
    xsi_vlog_unsigned_minus(t30, 32, t16, 32, t25, 32);
    t26 = (t1 + 4616);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t30, 32, t28, 8);
    memset(t41, 0, 8);
    t29 = (t6 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB123;

LAB122:    t31 = (t37 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB123;

LAB126:    if (*((unsigned int *)t6) > *((unsigned int *)t37))
        goto LAB125;

LAB124:    *((unsigned int *)t41) = 1;

LAB125:    t33 = (t41 + 4);
    t19 = *((unsigned int *)t33);
    t20 = (~(t19));
    t21 = *((unsigned int *)t41);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB127;

LAB128:    xsi_set_current_line(72, ng0);
    t4 = (t1 + 3656);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 32, t6, 32, t7, 32);
    t8 = (t1 + 3656);
    xsi_vlogvar_assign_value(t8, t15, 0, 0, 32);
    goto LAB112;

LAB123:    t32 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB125;

LAB127:    xsi_set_current_line(73, ng0);

LAB129:    xsi_set_current_line(74, ng0);
    t34 = (t1 + 5096);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t38 = (t1 + 3496);
    t39 = (t1 + 3496);
    t40 = (t39 + 72U);
    t43 = *((char **)t40);
    t44 = (t1 + 3816);
    t45 = (t44 + 56U);
    t47 = *((char **)t45);
    t53 = ((char*)((ng2)));
    memset(t71, 0, 8);
    xsi_vlog_unsigned_multiply(t71, 32, t47, 32, t53, 32);
    t54 = (t1 + 3656);
    t58 = (t54 + 56U);
    t59 = *((char **)t58);
    memset(t75, 0, 8);
    xsi_vlog_unsigned_add(t75, 32, t71, 32, t59, 32);
    t60 = ((char*)((ng3)));
    memset(t76, 0, 8);
    xsi_vlog_unsigned_multiply(t76, 32, t75, 32, t60, 32);
    t61 = ((char*)((ng3)));
    xsi_vlog_convert_indexed_partindices(t42, t46, t64, ((int*)(t43)), 2, t76, 32, 2, t61, 32, 1, 1);
    t62 = (t42 + 4);
    t48 = *((unsigned int *)t62);
    t112 = (!(t48));
    t63 = (t46 + 4);
    t49 = *((unsigned int *)t63);
    t113 = (!(t49));
    t186 = (t112 && t113);
    t65 = (t64 + 4);
    t50 = *((unsigned int *)t65);
    t187 = (!(t50));
    t260 = (t186 && t187);
    if (t260 == 1)
        goto LAB130;

LAB131:    xsi_set_current_line(73, ng0);
    t4 = (t1 + 3816);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t6, 32, t7, 32);
    t8 = (t1 + 3816);
    xsi_vlogvar_assign_value(t8, t15, 0, 0, 32);
    goto LAB121;

LAB130:    t51 = *((unsigned int *)t64);
    t261 = (t51 + 0);
    t52 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t46);
    t298 = (t52 - t55);
    t301 = (t298 + 1);
    xsi_vlogvar_assign_value(t38, t36, t261, *((unsigned int *)t46), t301);
    goto LAB131;

}

static int sp_draw_sq(char *t1, char *t2)
{
    char t8[8];
    char t17[8];
    char t27[8];
    char t31[8];
    char t40[8];
    char t49[8];
    char t58[8];
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
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t59;
    char *t60;
    char *t61;
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
    char *t74;
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
    int t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1824);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(83, ng0);

LAB5:    xsi_set_current_line(84, ng0);
    t5 = (t1 + 5256);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t1 + 5256);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t1 + 5256);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng6)));
    t16 = ((char*)((ng7)));
    xsi_vlog_get_indexed_partselect(t8, 8, t11, ((int*)(t14)), 2, t15, 32, 1, t16, 32, 1, 0);
    t18 = (t1 + 5256);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t1 + 5256);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng8)));
    t25 = ((char*)((ng7)));
    xsi_vlog_get_indexed_partselect(t17, 8, t20, ((int*)(t23)), 2, t24, 32, 1, t25, 32, 1, 0);
    t26 = (t1 + 1824);
    xsi_vlogfile_write(1, 0, 0, ng5, 4, t26, (char)118, t7, 41, (char)118, t8, 8, (char)118, t17, 8);
    xsi_set_current_line(85, ng0);
    t4 = (t1 + 5256);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 5256);
    t9 = (t7 + 72U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng6)));
    t12 = ((char*)((ng7)));
    xsi_vlog_get_indexed_partselect(t8, 8, t6, ((int*)(t10)), 2, t11, 32, 1, t12, 32, 1, 0);
    t13 = (t1 + 5256);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t1 + 5256);
    t18 = (t16 + 72U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng8)));
    t21 = ((char*)((ng7)));
    xsi_vlog_get_indexed_partselect(t17, 8, t15, ((int*)(t19)), 2, t20, 32, 1, t21, 32, 1, 0);
    t22 = (t1 + 5256);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t1 + 5256);
    t26 = (t25 + 72U);
    t28 = *((char **)t26);
    t29 = ((char*)((ng9)));
    t30 = ((char*)((ng7)));
    xsi_vlog_get_indexed_partselect(t27, 8, t24, ((int*)(t28)), 2, t29, 32, 1, t30, 32, 1, 0);
    t32 = (t1 + 5256);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t1 + 5256);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng10)));
    t39 = ((char*)((ng7)));
    xsi_vlog_get_indexed_partselect(t31, 8, t34, ((int*)(t37)), 2, t38, 32, 1, t39, 32, 1, 0);
    t41 = (t1 + 5256);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t1 + 5256);
    t45 = (t44 + 72U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng7)));
    t48 = ((char*)((ng3)));
    xsi_vlog_get_indexed_partselect(t40, 3, t43, ((int*)(t46)), 2, t47, 32, 1, t48, 32, 1, 0);
    t50 = (t1 + 5256);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = (t1 + 5256);
    t54 = (t53 + 72U);
    t55 = *((char **)t54);
    t56 = ((char*)((ng11)));
    t57 = ((char*)((ng3)));
    xsi_vlog_get_indexed_partselect(t49, 3, t52, ((int*)(t55)), 2, t56, 32, 1, t57, 32, 1, 0);
    t59 = (t1 + 5256);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = (t1 + 5256);
    t63 = (t62 + 72U);
    t64 = *((char **)t63);
    t65 = ((char*)((ng12)));
    t66 = ((char*)((ng3)));
    xsi_vlog_get_indexed_partselect(t58, 3, t61, ((int*)(t64)), 2, t65, 32, 1, t66, 32, 1, 0);
    t67 = (t2 + 56U);
    t68 = *((char **)t67);
    t69 = (t2 + 56U);
    t70 = *((char **)t69);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t70, &&LAB6);
    t71 = (t2 + 56U);
    t72 = *((char **)t71);
    t73 = (t1 + 1392);
    t74 = xsi_create_subprogram_invocation(t72, 0, t1, t73, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t73, t74);
    t75 = (t1 + 4136);
    xsi_vlogvar_assign_value(t75, t8, 0, 0, 8);
    t76 = (t1 + 4296);
    xsi_vlogvar_assign_value(t76, t17, 0, 0, 8);
    t77 = (t1 + 4456);
    xsi_vlogvar_assign_value(t77, t27, 0, 0, 8);
    t78 = (t1 + 4616);
    xsi_vlogvar_assign_value(t78, t31, 0, 0, 8);
    t79 = (t1 + 4776);
    xsi_vlogvar_assign_value(t79, t40, 0, 0, 3);
    t80 = (t1 + 4936);
    xsi_vlogvar_assign_value(t80, t49, 0, 0, 3);
    t81 = (t1 + 5096);
    xsi_vlogvar_assign_value(t81, t58, 0, 0, 3);

LAB8:    t82 = (t2 + 64U);
    t83 = *((char **)t82);
    t84 = (t83 + 80U);
    t85 = *((char **)t84);
    t86 = (t85 + 272U);
    t87 = *((char **)t86);
    t88 = (t87 + 0U);
    t89 = *((char **)t88);
    t90 = ((int  (*)(char *, char *))t89)(t1, t83);
    if (t90 == -1)
        goto LAB9;

LAB10:    if (t90 != 0)
        goto LAB11;

LAB6:    t83 = (t1 + 1392);
    xsi_vlog_subprogram_popinvocation(t83);

LAB7:    t91 = (t2 + 64U);
    t92 = *((char **)t91);
    t91 = (t1 + 1392);
    t93 = (t2 + 56U);
    t94 = *((char **)t93);
    xsi_delete_subprogram_invocation(t91, t92, t1, t94, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t82 = (t2 + 48U);
    *((char **)t82) = &&LAB8;
    goto LAB1;

}

static void Initial_43_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(43, ng0);

LAB2:    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng13)));
    t2 = (t0 + 3976);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng14)));
    t2 = (t0 + 3496);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 14401);

LAB1:    return;
}

static void Always_90_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
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

LAB0:    t1 = (t0 + 6424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 6744);
    *((int *)t2) = 1;
    t3 = (t0 + 6456);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(90, ng0);

LAB5:    xsi_set_current_line(101, ng0);
    t4 = (t0 + 3976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:
LAB10:
LAB9:    xsi_set_current_line(109, ng0);

LAB31:    xsi_set_current_line(110, ng0);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t0);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 6232);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB7:    xsi_set_current_line(102, ng0);

LAB12:    xsi_set_current_line(103, ng0);
    t9 = (t0 + 2616U);
    t10 = *((char **)t9);
    t9 = (t0 + 6232);
    t11 = (t0 + 1824);
    t12 = xsi_create_subprogram_invocation(t9, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 5256);
    xsi_vlogvar_assign_value(t13, t10, 0, 0, 41);

LAB15:    t14 = (t0 + 6328);
    t15 = *((char **)t14);
    t16 = (t15 + 80U);
    t17 = *((char **)t16);
    t18 = (t17 + 272U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t22 = ((int  (*)(char *, char *))t21)(t0, t15);

LAB17:    if (t22 != 0)
        goto LAB18;

LAB13:    t15 = (t0 + 1824);
    xsi_vlog_subprogram_popinvocation(t15);

LAB14:    t23 = (t0 + 6328);
    t24 = *((char **)t23);
    t23 = (t0 + 1824);
    t25 = (t0 + 6232);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2776U);
    t3 = *((char **)t2);
    t2 = (t0 + 6232);
    t4 = (t0 + 1824);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t7 = (t0 + 5256);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 41);

LAB21:    t9 = (t0 + 6328);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t8 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB23:    if (t8 != 0)
        goto LAB24;

LAB19:    t10 = (t0 + 1824);
    xsi_vlog_subprogram_popinvocation(t10);

LAB20:    t17 = (t0 + 6328);
    t18 = *((char **)t17);
    t17 = (t0 + 1824);
    t19 = (t0 + 6232);
    t20 = 0;
    xsi_delete_subprogram_invocation(t17, t18, t0, t19, t20);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2936U);
    t3 = *((char **)t2);
    t2 = (t0 + 6232);
    t4 = (t0 + 1824);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t7 = (t0 + 5256);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 41);

LAB27:    t9 = (t0 + 6328);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t8 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB29:    if (t8 != 0)
        goto LAB30;

LAB25:    t10 = (t0 + 1824);
    xsi_vlog_subprogram_popinvocation(t10);

LAB26:    t17 = (t0 + 6328);
    t18 = *((char **)t17);
    t17 = (t0 + 1824);
    t19 = (t0 + 6232);
    t20 = 0;
    xsi_delete_subprogram_invocation(t17, t18, t0, t19, t20);
    xsi_set_current_line(106, ng0);
    xsi_vlogfile_write(1, 0, 0, ng16, 1, t0);

LAB11:    goto LAB2;

LAB16:;
LAB18:    t14 = (t0 + 6424U);
    *((char **)t14) = &&LAB15;
    goto LAB1;

LAB22:;
LAB24:    t9 = (t0 + 6424U);
    *((char **)t9) = &&LAB21;
    goto LAB1;

LAB28:;
LAB30:    t9 = (t0 + 6424U);
    *((char **)t9) = &&LAB27;
    goto LAB1;

LAB32:    xsi_set_current_line(112, ng0);
    xsi_vlog_finish(1);
    goto LAB11;

}


extern void work_m_00000000001523986395_1197368640_init()
{
	static char *pe[] = {(void *)Initial_43_0,(void *)Always_90_1};
	static char *se[] = {(void *)sp_draw_square,(void *)sp_draw_sq};
	xsi_register_didat("work_m_00000000001523986395_1197368640", "isim/tb_isim_beh.exe.sim/work/m_00000000001523986395_1197368640.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
