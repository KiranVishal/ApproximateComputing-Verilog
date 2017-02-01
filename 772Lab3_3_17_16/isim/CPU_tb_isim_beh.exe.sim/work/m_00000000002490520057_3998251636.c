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

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//ad/eng/users/v/i/vishal94/Desktop/Lab3/Control_SM.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {16U, 0U};
static unsigned int ng4[] = {6U, 0U};
static unsigned int ng5[] = {18U, 0U};
static unsigned int ng6[] = {19U, 0U};
static unsigned int ng7[] = {20U, 0U};
static unsigned int ng8[] = {21U, 0U};
static unsigned int ng9[] = {50U, 0U};
static unsigned int ng10[] = {51U, 0U};
static unsigned int ng11[] = {52U, 0U};
static unsigned int ng12[] = {53U, 0U};
static unsigned int ng13[] = {57U, 0U};
static unsigned int ng14[] = {32U, 0U};
static unsigned int ng15[] = {8U, 0U};
static unsigned int ng16[] = {59U, 0U};
static unsigned int ng17[] = {2U, 0U};
static unsigned int ng18[] = {60U, 0U};
static unsigned int ng19[] = {3U, 0U};
static unsigned int ng20[] = {5U, 0U};
static unsigned int ng21[] = {4U, 0U};
static unsigned int ng22[] = {7U, 0U};
static int ng23[] = {1, 0};
static int ng24[] = {5, 0};
static int ng25[] = {2, 0};
static int ng26[] = {3, 0};



static void Always_46_0(char *t0)
{
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
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 5568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 6384);
    *((int *)t2) = 1;
    t3 = (t0 + 5600);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(49, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB8;

LAB9:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 4648);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB11;

}

static void Always_58_1(char *t0)
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
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    char *t16;
    int t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;

LAB0:    t1 = (t0 + 5816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 6400);
    *((int *)t2) = 1;
    t3 = (t0 + 5848);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);

LAB5:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 4488);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng19)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng21)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng22)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB23;

LAB24:
LAB26:
LAB25:    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB27:    goto LAB2;

LAB7:    xsi_set_current_line(62, ng0);

LAB28:    xsi_set_current_line(63, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 4648);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    goto LAB27;

LAB9:    xsi_set_current_line(66, ng0);

LAB29:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);

LAB30:    t3 = ((char*)((ng3)));
    t11 = xsi_vlog_unsigned_case_compare(t4, 6, t3, 6);
    if (t11 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t8 == 1)
        goto LAB33;

LAB34:    t3 = ((char*)((ng6)));
    t11 = xsi_vlog_unsigned_case_compare(t4, 6, t3, 6);
    if (t11 == 1)
        goto LAB35;

LAB36:    t5 = ((char*)((ng7)));
    t12 = xsi_vlog_unsigned_case_compare(t4, 6, t5, 6);
    if (t12 == 1)
        goto LAB37;

LAB38:    t7 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 6, t7, 6);
    if (t13 == 1)
        goto LAB39;

LAB40:    t9 = ((char*)((ng9)));
    t14 = xsi_vlog_unsigned_case_compare(t4, 6, t9, 6);
    if (t14 == 1)
        goto LAB41;

LAB42:    t10 = ((char*)((ng10)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 6, t10, 6);
    if (t15 == 1)
        goto LAB43;

LAB44:    t16 = ((char*)((ng11)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 6, t16, 6);
    if (t17 == 1)
        goto LAB45;

LAB46:    t18 = ((char*)((ng12)));
    t19 = xsi_vlog_unsigned_case_compare(t4, 6, t18, 6);
    if (t19 == 1)
        goto LAB47;

LAB48:    t20 = ((char*)((ng13)));
    t21 = xsi_vlog_unsigned_case_compare(t4, 6, t20, 6);
    if (t21 == 1)
        goto LAB49;

LAB50:    t22 = ((char*)((ng14)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 6, t22, 6);
    if (t23 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t8 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t8 == 1)
        goto LAB55;

LAB56:
LAB58:
LAB57:    xsi_set_current_line(72, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 4648);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);

LAB59:    goto LAB27;

LAB11:    xsi_set_current_line(76, ng0);

LAB60:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);

LAB61:    t3 = ((char*)((ng16)));
    t11 = xsi_vlog_unsigned_case_compare(t5, 6, t3, 6);
    if (t11 == 1)
        goto LAB62;

LAB63:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t8 == 1)
        goto LAB64;

LAB65:
LAB67:
LAB66:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB68:    goto LAB27;

LAB13:    xsi_set_current_line(84, ng0);

LAB69:    xsi_set_current_line(85, ng0);
    t3 = ((char*)((ng21)));
    t7 = (t0 + 4648);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB27;

LAB15:    xsi_set_current_line(88, ng0);

LAB70:    xsi_set_current_line(89, ng0);
    t3 = ((char*)((ng1)));
    t7 = (t0 + 4648);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB27;

LAB17:    xsi_set_current_line(92, ng0);

LAB71:    xsi_set_current_line(93, ng0);
    t3 = ((char*)((ng1)));
    t7 = (t0 + 4648);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB27;

LAB19:    xsi_set_current_line(96, ng0);

LAB72:    xsi_set_current_line(97, ng0);
    t3 = ((char*)((ng22)));
    t7 = (t0 + 4648);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB27;

LAB21:    xsi_set_current_line(100, ng0);

LAB73:    xsi_set_current_line(101, ng0);
    t3 = ((char*)((ng1)));
    t7 = (t0 + 4648);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB27;

LAB23:    xsi_set_current_line(104, ng0);

LAB74:    xsi_set_current_line(105, ng0);
    t3 = ((char*)((ng1)));
    t7 = (t0 + 4648);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB27;

LAB31:    xsi_set_current_line(69, ng0);
    t5 = ((char*)((ng4)));
    t7 = (t0 + 4648);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB59;

LAB33:    goto LAB31;

LAB35:    goto LAB31;

LAB37:    goto LAB31;

LAB39:    goto LAB31;

LAB41:    goto LAB31;

LAB43:    goto LAB31;

LAB45:    goto LAB31;

LAB47:    goto LAB31;

LAB49:    goto LAB31;

LAB51:    xsi_set_current_line(70, ng0);
    t24 = ((char*)((ng15)));
    t25 = (t0 + 4648);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 4);
    goto LAB59;

LAB53:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 4648);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB59;

LAB55:    goto LAB53;

LAB62:    xsi_set_current_line(78, ng0);
    t7 = ((char*)((ng19)));
    t9 = (t0 + 4648);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 4);
    goto LAB68;

LAB64:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng20)));
    t7 = (t0 + 4648);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB68;

}

static void Always_113_2(char *t0)
{
    char t16[8];
    char t17[8];
    char t36[8];
    char t52[8];
    char t67[8];
    char t83[8];
    char t91[8];
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
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
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
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;

LAB0:    t1 = (t0 + 6064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 6416);
    *((int *)t2) = 1;
    t3 = (t0 + 6096);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(114, ng0);

LAB5:    xsi_set_current_line(116, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 6, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(134, ng0);

LAB9:    xsi_set_current_line(135, ng0);
    t4 = (t0 + 4488);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);

LAB10:    t12 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 4, t12, 32);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 32);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng17)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 32);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng19)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 32);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng21)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 32);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng20)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 32);
    if (t13 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 32);
    if (t13 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng22)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 32);
    if (t13 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 32);
    if (t13 == 1)
        goto LAB27;

LAB28:
LAB30:
LAB29:    xsi_set_current_line(206, ng0);

LAB81:
LAB31:    goto LAB8;

LAB11:    xsi_set_current_line(137, ng0);

LAB32:    xsi_set_current_line(139, ng0);
    t14 = ((char*)((ng23)));
    t15 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB31;

LAB13:    xsi_set_current_line(146, ng0);

LAB33:    xsi_set_current_line(149, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1008U);
    t5 = (t3 + 72U);
    t12 = *((char **)t5);
    t14 = ((char*)((ng24)));
    xsi_vlog_generic_get_index_select_value(t16, 32, t4, t12, 2, t14, 32, 1);
    t15 = ((char*)((ng23)));
    memset(t17, 0, 8);
    t18 = (t16 + 4);
    t19 = (t15 + 4);
    t6 = *((unsigned int *)t16);
    t7 = *((unsigned int *)t15);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t18);
    t10 = *((unsigned int *)t19);
    t20 = (t9 ^ t10);
    t21 = (t8 | t20);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t19);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB37;

LAB34:    if (t24 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t17) = 1;

LAB37:    t28 = (t17 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t17);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB38;

LAB39:
LAB40:    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB31;

LAB15:    xsi_set_current_line(159, ng0);

LAB41:    xsi_set_current_line(161, ng0);
    t3 = ((char*)((ng25)));
    t4 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB31;

LAB17:    xsi_set_current_line(165, ng0);

LAB42:    xsi_set_current_line(167, ng0);
    t3 = ((char*)((ng23)));
    t4 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB31;

LAB19:    xsi_set_current_line(171, ng0);

LAB43:    xsi_set_current_line(173, ng0);
    t3 = ((char*)((ng23)));
    t4 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB31;

LAB21:    xsi_set_current_line(177, ng0);

LAB44:    xsi_set_current_line(179, ng0);
    t3 = ((char*)((ng23)));
    t4 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB31;

LAB23:    xsi_set_current_line(183, ng0);

LAB45:    xsi_set_current_line(185, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1008U);
    t5 = (t3 + 72U);
    t12 = *((char **)t5);
    t14 = ((char*)((ng24)));
    xsi_vlog_generic_get_index_select_value(t16, 32, t4, t12, 2, t14, 32, 1);
    t15 = ((char*)((ng23)));
    memset(t17, 0, 8);
    t18 = (t16 + 4);
    t19 = (t15 + 4);
    t6 = *((unsigned int *)t16);
    t7 = *((unsigned int *)t15);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t18);
    t10 = *((unsigned int *)t19);
    t20 = (t9 ^ t10);
    t21 = (t8 | t20);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t19);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB49;

LAB46:    if (t24 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t17) = 1;

LAB49:    t28 = (t17 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t17);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB50;

LAB51:
LAB52:    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB31;

LAB25:    xsi_set_current_line(194, ng0);

LAB79:    xsi_set_current_line(196, ng0);
    t3 = ((char*)((ng23)));
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    goto LAB31;

LAB27:    xsi_set_current_line(199, ng0);

LAB80:    xsi_set_current_line(201, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 6, 0LL);
    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB31;

LAB36:    t27 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(150, ng0);
    t34 = ((char*)((ng23)));
    t35 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t35, t34, 0, 0, 1, 0LL);
    goto LAB40;

LAB48:    t27 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(186, ng0);

LAB53:    xsi_set_current_line(187, ng0);
    t34 = (t0 + 1048U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng9)));
    memset(t36, 0, 8);
    t37 = (t35 + 4);
    t38 = (t34 + 4);
    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t34);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB57;

LAB54:    if (t48 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t36) = 1;

LAB57:    memset(t52, 0, 8);
    t53 = (t36 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t53) != 0)
        goto LAB60;

LAB61:    t60 = (t52 + 4);
    t61 = *((unsigned int *)t52);
    t62 = (!(t61));
    t63 = *((unsigned int *)t60);
    t64 = (t62 || t63);
    if (t64 > 0)
        goto LAB62;

LAB63:    memcpy(t91, t52, 8);

LAB64:    t119 = (t91 + 4);
    t120 = *((unsigned int *)t119);
    t121 = (~(t120));
    t122 = *((unsigned int *)t91);
    t123 = (t122 & t121);
    t124 = (t123 != 0);
    if (t124 > 0)
        goto LAB76;

LAB77:
LAB78:    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB52;

LAB56:    t51 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB57;

LAB58:    *((unsigned int *)t52) = 1;
    goto LAB61;

LAB60:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB61;

LAB62:    t65 = (t0 + 1048U);
    t66 = *((char **)t65);
    t65 = ((char*)((ng10)));
    memset(t67, 0, 8);
    t68 = (t66 + 4);
    t69 = (t65 + 4);
    t70 = *((unsigned int *)t66);
    t71 = *((unsigned int *)t65);
    t72 = (t70 ^ t71);
    t73 = *((unsigned int *)t68);
    t74 = *((unsigned int *)t69);
    t75 = (t73 ^ t74);
    t76 = (t72 | t75);
    t77 = *((unsigned int *)t68);
    t78 = *((unsigned int *)t69);
    t79 = (t77 | t78);
    t80 = (~(t79));
    t81 = (t76 & t80);
    if (t81 != 0)
        goto LAB68;

LAB65:    if (t79 != 0)
        goto LAB67;

LAB66:    *((unsigned int *)t67) = 1;

LAB68:    memset(t83, 0, 8);
    t84 = (t67 + 4);
    t85 = *((unsigned int *)t84);
    t86 = (~(t85));
    t87 = *((unsigned int *)t67);
    t88 = (t87 & t86);
    t89 = (t88 & 1U);
    if (t89 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t84) != 0)
        goto LAB71;

LAB72:    t92 = *((unsigned int *)t52);
    t93 = *((unsigned int *)t83);
    t94 = (t92 | t93);
    *((unsigned int *)t91) = t94;
    t95 = (t52 + 4);
    t96 = (t83 + 4);
    t97 = (t91 + 4);
    t98 = *((unsigned int *)t95);
    t99 = *((unsigned int *)t96);
    t100 = (t98 | t99);
    *((unsigned int *)t97) = t100;
    t101 = *((unsigned int *)t97);
    t102 = (t101 != 0);
    if (t102 == 1)
        goto LAB73;

LAB74:
LAB75:    goto LAB64;

LAB67:    t82 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB68;

LAB69:    *((unsigned int *)t83) = 1;
    goto LAB72;

LAB71:    t90 = (t83 + 4);
    *((unsigned int *)t83) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB72;

LAB73:    t103 = *((unsigned int *)t91);
    t104 = *((unsigned int *)t97);
    *((unsigned int *)t91) = (t103 | t104);
    t105 = (t52 + 4);
    t106 = (t83 + 4);
    t107 = *((unsigned int *)t105);
    t108 = (~(t107));
    t109 = *((unsigned int *)t52);
    t110 = (t109 & t108);
    t111 = *((unsigned int *)t106);
    t112 = (~(t111));
    t113 = *((unsigned int *)t83);
    t114 = (t113 & t112);
    t115 = (~(t110));
    t116 = (~(t114));
    t117 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t117 & t115);
    t118 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t118 & t116);
    goto LAB75;

LAB76:    xsi_set_current_line(188, ng0);
    t125 = ((char*)((ng26)));
    t126 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t126, t125, 0, 0, 2, 0LL);
    goto LAB78;

}


extern void work_m_00000000002490520057_3998251636_init()
{
	static char *pe[] = {(void *)Always_46_0,(void *)Always_58_1,(void *)Always_113_2};
	xsi_register_didat("work_m_00000000002490520057_3998251636", "isim/CPU_tb_isim_beh.exe.sim/work/m_00000000002490520057_3998251636.didat");
	xsi_register_executes(pe);
}
