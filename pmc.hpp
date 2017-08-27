/* ****************************************
 * Written by: Johan Grobler
 * Date started: 24/8/2017
 * Last updated: 24/8/2017
 * File: pmc.hpp
 * ****************************************
 * Defines for the Power management controller
 * on the ATSAM3X8E MCU.
 * ****************************************
*/
/*
 * TODO:
 *		Add the remaining bits to registers.
 *		Declare read only registers as const.
*/

#ifndef PMC_H_
#define PMC_H_
//#include "sfr.hpp"
#include "sfrMacros.h"

const uint32_t BASE_ADDR = 0x400E0600;
/* ****************************************
 * System Clock Enable Register.
 *****************************************/
namespace PMC {SFR SCER = sfr(BASE_ADDR, 0);}

namespace PMC_SCxR_BITS {
	constexpr uint32_t PCK2 = (1 << 10);
	constexpr uint32_t PCK1 = (1 << 9);
	constexpr uint32_t PCK0 = (1 << 8);
	constexpr uint32_t UOTGCLK = (1 << 5);
}

/* ****************************************
 * System Clock Disable Register.
 *****************************************/
namespace PMC {SFR SCDR = sfr(BASE_ADDR, 0x0004);}

/* ****************************************
 * System Clock Status Register.
 *****************************************/
namespace PMC {const SFR SCSR = sfr(BASE_ADDR, 0x0008);}

/* ****************************************
 * Peripheral Clock Enable Register 0.
 *****************************************/
namespace PMC {SFR PCER0 = sfr(BASE_ADDR, 0x0010);}

namespace PMC_PCxRx_BITS {
	constexpr uint32_t PID31 = (1 << 31);
	constexpr uint32_t PID30 = (1 << 30);
	constexpr uint32_t PID29 = (1 << 29);
	constexpr uint32_t PID28 = (1 << 28);
	constexpr uint32_t PID27 = (1 << 27);
	constexpr uint32_t PID26 = (1 << 26);
	constexpr uint32_t PID25 = (1 << 25);
	constexpr uint32_t PID24 = (1 << 24);
	constexpr uint32_t PID23 = (1 << 23);
	constexpr uint32_t PID22 = (1 << 22);
	constexpr uint32_t PID21 = (1 << 21);
	constexpr uint32_t PID20 = (1 << 20);
	constexpr uint32_t PID19 = (1 << 19);
	constexpr uint32_t PID18 = (1 << 18);
	constexpr uint32_t PID17 = (1 << 17);
	constexpr uint32_t PID16 = (1 << 16);
	constexpr uint32_t PID15 = (1 << 15);
	constexpr uint32_t PID14 = (1 << 14);
	constexpr uint32_t PID13 = (1 << 13);
	constexpr uint32_t PID12 = (1 << 12);
	constexpr uint32_t PID11 = (1 << 11);
	constexpr uint32_t PID10 = (1 << 10);
	constexpr uint32_t PID9 = (1 << 9);
	constexpr uint32_t PID8 = (1 << 8);
	constexpr uint32_t PID7 = (1 << 7);
	constexpr uint32_t PID6 = (1 << 6);
	constexpr uint32_t PID5 = (1 << 5);
	constexpr uint32_t PID4 = (1 << 4);
	constexpr uint32_t PID3 = (1 << 3);
	constexpr uint32_t PID2 = (1 << 2);
}
/* ****************************************
 * Peripheral Clock Disable Register 0.
 *****************************************/
namespace PMC {SFR PCDR0 = sfr(BASE_ADDR, 0x0014);}

/* ****************************************
 * Peripheral Clock Status Register 0.
 *****************************************/
namespace PMC {const SFR PCSR0 = sfr(BASE_ADDR, 0x0018);}

/* ****************************************
 * UTMI Clock Register.
 *****************************************/
namespace CKGR {SFR UCKR = sfr( BASE_ADDR, 0x001C);}

namespace CKGR_UCKR_BITS {
	constexpr uint32_t UPLLCOUNT3 = (1 << 23);
	constexpr uint32_t UPLLCOUNT2 = (1 << 22);
	constexpr uint32_t UPLLCOUNT1 = (1 << 21);
	constexpr uint32_t UPLLCOUNT0 = (1 << 20);
	constexpr uint32_t UPLLEN = (1 << 16);
}

/* ****************************************
 * Main Oscillator Register.
 *****************************************/
namespace CKGR {SFR MOR = sfr(BASE_ADDR, 0x0020);}

namespace CKGR_MOR_BITS {
	constexpr uint32_t CFDEN = (1 << 25);
	constexpr uint32_t MOSCSEL = (1 << 24);
	constexpr uint32_t KEY = (0x00370000);
	constexpr uint32_t MOSCXTST7 = (1 << 15);
	constexpr uint32_t MOSCXTST6 = (1 << 14);
	constexpr uint32_t MOSCXRST5 = (1 << 13);
	constexpr uint32_t MOSCXRST4 = (1 << 12);
	constexpr uint32_t MOSCXRST3 = (1 << 11);
	constexpr uint32_t MOSCXRST2 = (1 << 10);
	constexpr uint32_t MOSCXRST1 = (1 << 9);
	constexpr uint32_t MOSCXRST0 = (1 << 8);
	constexpr uint32_t MOSCRCF2 = (1 << 6);
	constexpr uint32_t MOSCRCF1 = (1 << 5);
	constexpr uint32_t MOSCRCF0 = (1 << 4);
	constexpr uint32_t MOSCRCEN = (1 << 3);
	constexpr uint32_t MOSCXTBY = (1 << 1);
	constexpr uint32_t MOSCXTEN = (1 << 0);
}

/* ****************************************
 * Main Clock Frequency Register.
 *****************************************/
namespace CKGR {SFR MCFR = sfr(BASE_ADDR, 0x0024);}
namespace CKGR_MCFR_BITS {
	constexpr uint32_t MAINFRDY = (1 << 16);
	constexpr uint32_t MAINF15 = (1 << 15);
	constexpr uint32_t MAINF14 = (1 << 14);
	constexpr uint32_t MAINF13 = (1 << 13);
	constexpr uint32_t MAINF12 = (1 << 12);
	constexpr uint32_t MAINF11 = (1 << 11);
	constexpr uint32_t MAINF10 = (1 << 10);
	constexpr uint32_t MAINF9 = (1 << 9);
	constexpr uint32_t MAINF8 = (1 << 8);
	constexpr uint32_t MAINF7 = (1 << 7);
	constexpr uint32_t MAINF6 = (1 << 6);
	constexpr uint32_t MAINF5 = (1 << 5);
	constexpr uint32_t MAINF4 = (1 << 4);
	constexpr uint32_t MAINF3 = (1 << 3);
	constexpr uint32_t MAINF2 = (1 << 2);
	constexpr uint32_t MAINF1 = (1 << 1);
	constexpr uint32_t MAINF0 = (1 << 0);
}

/* ****************************************
 * PLLA Register.
 *****************************************/
namespace CKGR {SFR PLLAR = sfr(BASE_ADDR, 0x0028);}
namespace CKGR_PLLAR_BITS {
	constexpr uint32_t ONE = (1 << 29);
	constexpr uint32_t MULA10 = (1 << 26);
	constexpr uint32_t MULA9 = (1 << 25);
	constexpr uint32_t MULA8 = (1 << 24);
	constexpr uint32_t MULA7 = (1 << 23);
	constexpr uint32_t MULA6 = (1 << 22);
	constexpr uint32_t MULA5 = (1 << 21);
	constexpr uint32_t MULA4 = (1 << 20);
	constexpr uint32_t MULA3 = (1 << 19);
	constexpr uint32_t MULA2 = (1 << 18);
	constexpr uint32_t MULA1 = (1 << 17);
	constexpr uint32_t MULA0 = (1 << 16);
	constexpr uint32_t PLLACOUNT5 = (1 << 13);
	constexpr uint32_t PLLACOUNT4 = (1 << 12);
	constexpr uint32_t PLLACOUNT3 = (1 << 11);
	constexpr uint32_t PLLACOUNT2 = (1 << 10);
	constexpr uint32_t PLLACOUNT1 = (1 << 9);
	constexpr uint32_t PLLACOUNT0 = (1 << 8);
	constexpr uint32_t DIVA7 = (1 << 7);
	constexpr uint32_t DIVA6 = (1 << 6);
	constexpr uint32_t DIVA5 = (1 << 5);
	constexpr uint32_t DIVA4 = (1 << 4);
	constexpr uint32_t DIVA3 = (1 << 3);
	constexpr uint32_t DIVA2 = (1 << 2);
	constexpr uint32_t DIVA1 = (1 << 1);
	constexpr uint32_t DIVA0 = (1 << 0);
}

/* ****************************************
 * Master Clock Register.
 *****************************************/
namespace PMC {SFR MCKR = sfr(BASE_ADDR, 0x0030);}
namespace PMC_MCKR_BITS {
	constexpr uint32_t UPLLDIV2 = (1 << 13);
	constexpr uint32_t PLLADIV2 = (1 << 12);
	constexpr uint32_t PRES2 = (1 << 6);
	constexpr uint32_t PRES1 = (1 << 5);
	constexpr uint32_t PRES0 = (1 << 4);
	constexpr uint32_t CSS1 = (1 << 1);
	constexpr uint32_t CSS0 = (1 << 0);
}

/* ****************************************
 * USB Clock Register.
 *****************************************/
namespace PMC {SFR USB = sfr(BASE_ADDR, 0x0038);}
namespace PMC_USB_BITS {
	constexpr uint32_t USBDIV3 = (1 << 11);
	constexpr uint32_t USBDIV2 = (1 << 10);
	constexpr uint32_t USBDIV1 = (1 << 9);
	constexpr uint32_t USBDIV0 = (1 << 8);
	constexpr uint32_t USBS = (1 << 0);
}

/* ****************************************
 * Programmable Clock 0 Register.
 *****************************************/
namespace PMC {SFR PCK0 = sfr(BASE_ADDR, 0x0040);}
namespace PMC_PCKx_BITS {
	constexpr uint32_t PRES2 = (1 << 6);
	constexpr uint32_t PRES1 = (1 << 5);
	constexpr uint32_t PRES0 = (1 << 4);
	constexpr uint32_t CSS2 = (1 << 2);
	constexpr uint32_t CSS1 = (1 << 1);
	constexpr uint32_t CSS0 = (1 << 0);
}

/* ****************************************
 * Programmable Clock 1 Register.
 *****************************************/
namespace PMC {SFR PCK1 = sfr(BASE_ADDR, 0x0044);}

/* ****************************************
 * Programmable Clock 2 Register.
 *****************************************/
namespace PMC {SFR PCK2 = sfr(BASE_ADDR, 0x0048);}

/* ****************************************
 * Interrupt Enable Register.
 *****************************************/
namespace PMC {SFR IER = sfr(BASE_ADDR, 0x0060);}
namespace PMC_IxR_BITS {
	constexpr uint32_t CFDEV = (1 << 18);
	constexpr uint32_t MOSCRCS = (1 << 17);
	constexpr uint32_t MOSCSELS = (1 << 16);
	constexpr uint32_t PCKRDY2 = (1 << 10);
	constexpr uint32_t PCKRDY1 = (1 << 9);
	constexpr uint32_t PCKRDY0 = (1 << 8);
	constexpr uint32_t LOCKU = (1 << 6);
	constexpr uint32_t MCKRDY = (1 << 3);
	constexpr uint32_t LOCKA = (1 << 1);
	constexpr uint32_t MOSCXTS = (1 << 0);
}

/* ****************************************
 * Interrupt Disable Register.
 *****************************************/
namespace PMC {SFR IDR = sfr(BASE_ADDR, 0x0064);}

/* ****************************************
 * Status Register.
 *****************************************/
namespace PMC {SFR SR = sfr(BASE_ADDR, 0x0068);}
namespace PMS_SR_BITS {
	constexpr uint32_t FOS = (1 << 20);
	constexpr uint32_t CFDS = (1 << 19);
	constexpr uint32_t CFDEV = (1 << 18);
	constexpr uint32_t MOSCRCS = (1 << 17);
	constexpr uint32_t MOSCSELS = (1 << 16);
	constexpr uint32_t PCKRDY2 = (1 << 10);
	constexpr uint32_t PCKRDY1 = (1 << 9);
	constexpr uint32_t PCKRDY0 = (1 << 8);
	constexpr uint32_t OSCSELS =(1 << 7);
	constexpr uint32_t LOCKU = (1 << 6);
	constexpr uint32_t MCKRDY = (1 << 3);
	constexpr uint32_t LOCKA = (1 << 1);
	constexpr uint32_t MOSCXTS = (1 << 0);
}

/* ****************************************
 * Interrupt Mask Register.
 *****************************************/
namespace PMC {SFR IMR = sfr(BASE_ADDR, 0x006C);}

/* ****************************************
 * Fast Startup Mode Register.
 *****************************************/
namespace PMC {SFR FSMR = sfr(BASE_ADDR, 0x0070);}

/* ****************************************
 * Fast Startup Polarity Register.
 *****************************************/
namespace PMC {SFR FSPR = sfr(BASE_ADDR, 0x0074);}

/* ****************************************
 * Fault Output Clear Register.
 *****************************************/
namespace PMC {SFR FOCR = sfr(BASE_ADDR, 0x0078);}

/* ****************************************
 * Write Protect Mode Register.
 *****************************************/
namespace PMC {SFR WPMR = sfr(BASE_ADDR, 0x00E4);}

/* ****************************************
 * Write Protect Status Register.
 *****************************************/
namespace PMC {SFR WPSR = sfr(BASE_ADDR, 0x00E8);}

/* ****************************************
 * Peripheral Clock Enable Register 1.
 *****************************************/
namespace PMC {SFR PCER1 = sfr(BASE_ADDR, 0x0100);}

/* ****************************************
 * Peripheral Clock Disable Register 0.
 *****************************************/
namespace PMC {SFR PCDR1 = sfr(BASE_ADDR, 0x0104);}

/* ****************************************
 * Peripheral Clock Status Register 1.
 *****************************************/
namespace PMC {SFR PCSR1 = sfr(BASE_ADDR, 0x0108);}

/* ****************************************
 * Peripheral Control Register.
 *****************************************/
namespace PMC {SFR PCR = sfr(BASE_ADDR, 0x010C);}

#endif
