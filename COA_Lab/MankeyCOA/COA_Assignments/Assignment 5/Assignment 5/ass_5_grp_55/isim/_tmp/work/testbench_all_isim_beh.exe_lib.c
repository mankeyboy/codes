/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2007 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;


int isim_run(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    work_m_00000000000866782574_2073120511_init();
    work_m_00000000001399886959_0470789400_init();
    work_m_00000000003991931518_0560956584_init();
    work_m_00000000003424641537_3531807232_init();
    work_m_00000000002039842425_4065071898_init();
    work_m_00000000001399886959_1710539316_init();
    work_m_00000000003326941840_1486154628_init();
    work_m_00000000003644725417_1994146192_init();
    work_m_00000000002731935144_3475782314_init();
    work_m_00000000000102436197_4023717930_init();
    work_m_00000000000102436197_2563907772_init();
    work_m_00000000003228336876_0112637215_init();
    work_m_00000000000848982144_1907459465_init();
    work_m_00000000001633310306_3904427059_init();
    work_m_00000000003361260520_2680153253_init();
    work_m_00000000000291580217_1891063976_init();
    work_m_00000000002160791122_1425062498_init();


    xsi_register_tops("work_m_00000000002160791122_1425062498");
    xsi_register_tops("work_m_00000000000866782574_2073120511");


    return xsi_run_simulation(argc, argv);

}
