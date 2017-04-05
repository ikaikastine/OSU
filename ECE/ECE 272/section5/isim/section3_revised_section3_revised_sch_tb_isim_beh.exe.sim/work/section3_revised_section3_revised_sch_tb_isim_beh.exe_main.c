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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    uni9000_ver_m_00000000002549801008_4245414866_init();
    uni9000_ver_m_00000000000603860430_3432996463_init();
    uni9000_ver_m_00000000003960923341_1435897813_init();
    uni9000_ver_m_00000000003510477262_2316096324_init();
    uni9000_ver_m_00000000002123152668_0970595058_init();
    uni9000_ver_m_00000000000236260522_2449448540_init();
    work_m_00000000002114660201_3725753731_init();
    work_m_00000000003677433195_1938031818_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003677433195_1938031818");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
