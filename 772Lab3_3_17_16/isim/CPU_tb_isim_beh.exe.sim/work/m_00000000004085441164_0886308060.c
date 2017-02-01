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
static const char *ng0 = "//ad/eng/users/v/i/vishal94/Desktop/Lab3/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {16U, 0U};
static unsigned int ng4[] = {57U, 0U};
static unsigned int ng5[] = {59U, 0U};
static unsigned int ng6[] = {60U, 0U};
static unsigned int ng7[] = {18U, 0U};
static unsigned int ng8[] = {50U, 0U};
static unsigned int ng9[] = {19U, 0U};
static unsigned int ng10[] = {32U, 0U};
static unsigned int ng11[] = {51U, 0U};
static unsigned int ng12[] = {20U, 0U};
static unsigned int ng13[] = {52U, 0U};
static unsigned int ng14[] = {21U, 0U};
static unsigned int ng15[] = {53U, 0U};
static unsigned int ng16[] = {4294967295U, 4294967295U};
static int ng17[] = {1, 0};



static void Always_36_0(char *t0)
{
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    char *t11;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 2984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3552);
    *((int *)t2) = 1;
    t3 = (t0 + 3016);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t4, 6);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB13;

LAB14:    t3 = ((char*)((ng6)));
    t9 = xsi_vlog_unsigned_case_compare(t5, 6, t3, 6);
    if (t9 == 1)
        goto LAB15;

LAB16:    t4 = ((char*)((ng7)));
    t10 = xsi_vlog_unsigned_case_compare(t5, 6, t4, 6);
    if (t10 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB19;

LAB20:    t3 = ((char*)((ng9)));
    t9 = xsi_vlog_unsigned_case_compare(t5, 6, t3, 6);
    if (t9 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB23;

LAB24:    t3 = ((char*)((ng11)));
    t9 = xsi_vlog_unsigned_case_compare(t5, 6, t3, 6);
    if (t9 == 1)
        goto LAB25;

LAB26:    t4 = ((char*)((ng12)));
    t10 = xsi_vlog_unsigned_case_compare(t5, 6, t4, 6);
    if (t10 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB29;

LAB30:    t3 = ((char*)((ng14)));
    t9 = xsi_vlog_unsigned_case_compare(t5, 6, t3, 6);
    if (t9 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB33;

LAB34:
LAB36:
LAB35:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1904);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB37:    goto LAB2;

LAB7:    xsi_set_current_line(39, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1904);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB37;

LAB9:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1184U);
    t4 = *((char **)t3);
    t3 = (t0 + 1904);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB37;

LAB11:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1344U);
    t4 = *((char **)t3);
    t3 = (t0 + 1904);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB37;

LAB13:    goto LAB11;

LAB15:    goto LAB11;

LAB17:    xsi_set_current_line(42, ng0);
    t7 = (t0 + 1184U);
    t8 = *((char **)t7);
    t7 = (t0 + 1344U);
    t11 = *((char **)t7);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_add(t12, 32, t8, 32, t11, 32);
    t7 = (t0 + 1904);
    xsi_vlogvar_assign_value(t7, t12, 0, 0, 32);
    goto LAB37;

LAB19:    goto LAB17;

LAB21:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1184U);
    t7 = *((char **)t4);
    t4 = (t0 + 1344U);
    t8 = *((char **)t4);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_minus(t12, 32, t7, 32, t8, 32);
    t4 = (t0 + 1904);
    xsi_vlogvar_assign_value(t4, t12, 0, 0, 32);
    goto LAB37;

LAB23:    goto LAB21;

LAB25:    goto LAB21;

LAB27:    xsi_set_current_line(44, ng0);
    t7 = (t0 + 1184U);
    t8 = *((char **)t7);
    t7 = (t0 + 1344U);
    t11 = *((char **)t7);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t7 = (t8 + 4);
    t16 = (t11 + 4);
    t17 = (t12 + 4);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t16);
    t20 = (t18 | t19);
    *((unsigned int *)t17) = t20;
    t21 = *((unsigned int *)t17);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB38;

LAB39:
LAB40:    t39 = (t0 + 1904);
    xsi_vlogvar_assign_value(t39, t12, 0, 0, 32);
    goto LAB37;

LAB29:    goto LAB27;

LAB31:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1184U);
    t7 = *((char **)t4);
    t4 = (t0 + 1344U);
    t8 = *((char **)t4);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_multiply(t12, 32, t7, 32, t8, 32);
    t4 = (t0 + 1904);
    xsi_vlogvar_assign_value(t4, t12, 0, 0, 32);
    goto LAB37;

LAB33:    goto LAB31;

LAB38:    t23 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t12) = (t23 | t24);
    t25 = (t8 + 4);
    t26 = (t11 + 4);
    t27 = *((unsigned int *)t25);
    t28 = (~(t27));
    t29 = *((unsigned int *)t8);
    t30 = (t29 & t28);
    t31 = *((unsigned int *)t26);
    t32 = (~(t31));
    t33 = *((unsigned int *)t11);
    t34 = (t33 & t32);
    t35 = (~(t30));
    t36 = (~(t34));
    t37 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t37 & t35);
    t38 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t38 & t36);
    goto LAB40;

}

static void Always_51_1(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
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
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 3232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3568);
    *((int *)t2) = 1;
    t3 = (t0 + 3264);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 1904);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(54, ng0);
    t30 = ((char*)((ng17)));
    t31 = (t0 + 2064);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 1, 0LL);
    goto LAB12;

}


extern void work_m_00000000004085441164_0886308060_init()
{
	static char *pe[] = {(void *)Always_36_0,(void *)Always_51_1};
	xsi_register_didat("work_m_00000000004085441164_0886308060", "isim/CPU_tb_isim_beh.exe.sim/work/m_00000000004085441164_0886308060.didat");
	xsi_register_executes(pe);
}
