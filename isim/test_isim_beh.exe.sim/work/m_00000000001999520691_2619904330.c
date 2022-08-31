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
static const char *ng0 = "D:/szdl/jiaotongdeng/jiaotongdeng.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {3U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {159U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {37U, 0U};
static unsigned int ng7[] = {13U, 0U};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {153U, 0U};
static unsigned int ng10[] = {5U, 0U};
static unsigned int ng11[] = {73U, 0U};
static unsigned int ng12[] = {6U, 0U};
static unsigned int ng13[] = {65U, 0U};
static unsigned int ng14[] = {7U, 0U};
static unsigned int ng15[] = {31U, 0U};
static unsigned int ng16[] = {8U, 0U};
static unsigned int ng17[] = {9U, 0U};
static unsigned int ng18[] = {10U, 0U};
static unsigned int ng19[] = {253U, 0U};
static unsigned int ng20[] = {255U, 0U};
static unsigned int ng21[] = {11U, 0U};
static unsigned int ng22[] = {15U, 0U};
static unsigned int ng23[] = {0U, 15U};



static void Always_180_0(char *t0)
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

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(180, ng0);
    t2 = (t0 + 4056);
    *((int *)t2) = 1;
    t3 = (t0 + 3520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(181, ng0);

LAB5:    xsi_set_current_line(182, ng0);
    t4 = (t0 + 2568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB27;

LAB28:
LAB30:
LAB29:    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);

LAB31:    goto LAB2;

LAB7:    xsi_set_current_line(183, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 8, 0LL);
    goto LAB31;

LAB9:    xsi_set_current_line(184, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB31;

LAB11:    xsi_set_current_line(185, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB31;

LAB13:    xsi_set_current_line(186, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB31;

LAB15:    xsi_set_current_line(187, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB31;

LAB17:    xsi_set_current_line(188, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB31;

LAB19:    xsi_set_current_line(189, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB31;

LAB21:    xsi_set_current_line(190, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB31;

LAB23:    xsi_set_current_line(191, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB31;

LAB25:    xsi_set_current_line(192, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB31;

LAB27:    xsi_set_current_line(193, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB31;

}

static void Always_198_1(char *t0)
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
    int t10;
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
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(198, ng0);
    t2 = (t0 + 4072);
    *((int *)t2) = 1;
    t3 = (t0 + 3768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(199, ng0);

LAB5:    xsi_set_current_line(200, ng0);

LAB6:    xsi_set_current_line(201, ng0);
    t4 = (t0 + 2408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 2, t6, 2, t7, 2);
    t9 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 2, 0LL);
    xsi_set_current_line(202, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB7:    t5 = ((char*)((ng1)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t10 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng3)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t10 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng5)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t10 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng2)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t10 == 1)
        goto LAB14;

LAB15:
LAB17:
LAB16:    xsi_set_current_line(232, ng0);

LAB59:    xsi_set_current_line(233, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(234, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB18:    goto LAB2;

LAB8:    xsi_set_current_line(204, ng0);

LAB19:    xsi_set_current_line(205, ng0);
    t6 = ((char*)((ng21)));
    t7 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(206, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(207, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t5);
    t13 = (t11 | t12);
    *((unsigned int *)t8) = t13;
    t2 = (t3 + 4);
    t6 = (t5 + 4);
    t7 = (t8 + 4);
    t14 = *((unsigned int *)t2);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    *((unsigned int *)t7) = t16;
    t17 = *((unsigned int *)t7);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB23;

LAB24:
LAB25:    t33 = (t8 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t8);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(208, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t5 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 0);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t5);
    t14 = (t13 >> 0);
    *((unsigned int *)t2) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 15U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 15U);
    t6 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 4, 0LL);

LAB28:
LAB22:    goto LAB18;

LAB10:    xsi_set_current_line(211, ng0);

LAB29:    xsi_set_current_line(212, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(213, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(214, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t5);
    t13 = (t11 | t12);
    *((unsigned int *)t8) = t13;
    t2 = (t3 + 4);
    t6 = (t5 + 4);
    t7 = (t8 + 4);
    t14 = *((unsigned int *)t2);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    *((unsigned int *)t7) = t16;
    t17 = *((unsigned int *)t7);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB33;

LAB34:
LAB35:    t33 = (t8 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t8);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(215, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t5 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 4);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t5);
    t14 = (t13 >> 4);
    *((unsigned int *)t2) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 15U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 15U);
    t6 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 4, 0LL);

LAB38:
LAB32:    goto LAB18;

LAB12:    xsi_set_current_line(218, ng0);

LAB39:    xsi_set_current_line(219, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(220, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(221, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t5);
    t13 = (t11 | t12);
    *((unsigned int *)t8) = t13;
    t2 = (t3 + 4);
    t6 = (t5 + 4);
    t7 = (t8 + 4);
    t14 = *((unsigned int *)t2);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    *((unsigned int *)t7) = t16;
    t17 = *((unsigned int *)t7);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB43;

LAB44:
LAB45:    t33 = (t8 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t8);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(222, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t5 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 8);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t5);
    t14 = (t13 >> 8);
    *((unsigned int *)t2) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 15U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 15U);
    t6 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 4, 0LL);

LAB48:
LAB42:    goto LAB18;

LAB14:    xsi_set_current_line(225, ng0);

LAB49:    xsi_set_current_line(226, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(227, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(228, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t5);
    t13 = (t11 | t12);
    *((unsigned int *)t8) = t13;
    t2 = (t3 + 4);
    t6 = (t5 + 4);
    t7 = (t8 + 4);
    t14 = *((unsigned int *)t2);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    *((unsigned int *)t7) = t16;
    t17 = *((unsigned int *)t7);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB53;

LAB54:
LAB55:    t33 = (t8 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t8);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(229, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t5 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 12);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t5);
    t14 = (t13 >> 12);
    *((unsigned int *)t2) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 15U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 15U);
    t6 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 4, 0LL);

LAB58:
LAB52:    goto LAB18;

LAB20:    xsi_set_current_line(206, ng0);
    t5 = ((char*)((ng18)));
    t6 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    goto LAB22;

LAB23:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t8) = (t19 | t20);
    t9 = (t3 + 4);
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t9);
    t23 = (~(t22));
    t24 = *((unsigned int *)t3);
    t10 = (t24 & t23);
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t28 = (t27 & t26);
    t29 = (~(t10));
    t30 = (~(t28));
    t31 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t31 & t29);
    t32 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t32 & t30);
    goto LAB25;

LAB26:    xsi_set_current_line(207, ng0);
    t39 = ((char*)((ng22)));
    t40 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t40, t39, 0, 0, 4, 0LL);
    goto LAB28;

LAB30:    xsi_set_current_line(213, ng0);
    t5 = ((char*)((ng18)));
    t6 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    goto LAB32;

LAB33:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t8) = (t19 | t20);
    t9 = (t3 + 4);
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t9);
    t23 = (~(t22));
    t24 = *((unsigned int *)t3);
    t10 = (t24 & t23);
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t28 = (t27 & t26);
    t29 = (~(t10));
    t30 = (~(t28));
    t31 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t31 & t29);
    t32 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t32 & t30);
    goto LAB35;

LAB36:    xsi_set_current_line(214, ng0);
    t39 = ((char*)((ng22)));
    t40 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t40, t39, 0, 0, 4, 0LL);
    goto LAB38;

LAB40:    xsi_set_current_line(220, ng0);
    t5 = ((char*)((ng18)));
    t6 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    goto LAB42;

LAB43:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t8) = (t19 | t20);
    t9 = (t3 + 4);
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t9);
    t23 = (~(t22));
    t24 = *((unsigned int *)t3);
    t10 = (t24 & t23);
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t28 = (t27 & t26);
    t29 = (~(t10));
    t30 = (~(t28));
    t31 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t31 & t29);
    t32 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t32 & t30);
    goto LAB45;

LAB46:    xsi_set_current_line(221, ng0);
    t39 = ((char*)((ng22)));
    t40 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t40, t39, 0, 0, 4, 0LL);
    goto LAB48;

LAB50:    xsi_set_current_line(227, ng0);
    t5 = ((char*)((ng18)));
    t6 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    goto LAB52;

LAB53:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t8) = (t19 | t20);
    t9 = (t3 + 4);
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t9);
    t23 = (~(t22));
    t24 = *((unsigned int *)t3);
    t10 = (t24 & t23);
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t28 = (t27 & t26);
    t29 = (~(t10));
    t30 = (~(t28));
    t31 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t31 & t29);
    t32 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t32 & t30);
    goto LAB55;

LAB56:    xsi_set_current_line(228, ng0);
    t39 = ((char*)((ng22)));
    t40 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t40, t39, 0, 0, 4, 0LL);
    goto LAB58;

}


extern void work_m_00000000001999520691_2619904330_init()
{
	static char *pe[] = {(void *)Always_180_0,(void *)Always_198_1};
	xsi_register_didat("work_m_00000000001999520691_2619904330", "isim/test_isim_beh.exe.sim/work/m_00000000001999520691_2619904330.didat");
	xsi_register_executes(pe);
}
