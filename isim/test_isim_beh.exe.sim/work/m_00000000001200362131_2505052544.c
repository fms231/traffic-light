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
static int ng1[] = {0, 0};
static int ng2[] = {8000000, 0};
static int ng3[] = {1, 0};



static void Always_266_0(char *t0)
{
    char t13[8];
    char t14[8];
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
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(266, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(267, ng0);

LAB5:    xsi_set_current_line(268, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(273, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_equal(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(279, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 32, 0LL);

LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(269, ng0);

LAB9:    xsi_set_current_line(270, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(271, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(274, ng0);

LAB13:    xsi_set_current_line(275, ng0);
    t12 = (t0 + 1768);
    t15 = (t12 + 56U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    t17 = (t16 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (~(t18));
    t20 = *((unsigned int *)t16);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t17) == 0)
        goto LAB14;

LAB16:    t23 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t23) = 1;

LAB17:    t24 = (t14 + 4);
    t25 = (t16 + 4);
    t26 = *((unsigned int *)t16);
    t27 = (~(t26));
    *((unsigned int *)t14) = t27;
    *((unsigned int *)t24) = 0;
    if (*((unsigned int *)t25) != 0)
        goto LAB19;

LAB18:    t32 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t32 & 1U);
    t33 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t33 & 1U);
    t34 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t34, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(276, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB12;

LAB14:    *((unsigned int *)t14) = 1;
    goto LAB17;

LAB19:    t28 = *((unsigned int *)t14);
    t29 = *((unsigned int *)t25);
    *((unsigned int *)t14) = (t28 | t29);
    t30 = *((unsigned int *)t24);
    t31 = *((unsigned int *)t25);
    *((unsigned int *)t24) = (t30 | t31);
    goto LAB18;

}


extern void work_m_00000000001200362131_2505052544_init()
{
	static char *pe[] = {(void *)Always_266_0};
	xsi_register_didat("work_m_00000000001200362131_2505052544", "isim/test_isim_beh.exe.sim/work/m_00000000001200362131_2505052544.didat");
	xsi_register_executes(pe);
}
