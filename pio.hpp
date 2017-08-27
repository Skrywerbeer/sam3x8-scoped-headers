/* ****************************************
 * Written by: Johan Grobler
 * Date started: 24/8/2017
 * Last updated: 24/8/2017
 * File: pio.hpp
 * ****************************************
 * Defines for the parallel input/output controller on
 * the ATSAM3X8E MCU.
 * ****************************************
*/

#ifndef PIO_H_
#define PIO_H_
//#include "sfr.hpp"
#include "sfrMacros.h"

/* ****************************************
 * Bit defines.
 *****************************************/
namespace PIO_BITS {
	constexpr uint32_t P31 = (1 << 31);
	constexpr uint32_t P30 = (1 << 30);
	constexpr uint32_t P29 = (1 << 29);
	constexpr uint32_t P28 = (1 << 28);
	constexpr uint32_t P27 = (1 << 27);
	constexpr uint32_t P26 = (1 << 26);
	constexpr uint32_t P25 = (1 << 25);
	constexpr uint32_t P24 = (1 << 24);
	constexpr uint32_t P23 = (1 << 23);
	constexpr uint32_t P22 = (1 << 22);
	constexpr uint32_t P21 = (1 << 21);
	constexpr uint32_t P20 = (1 << 20);
	constexpr uint32_t P19 = (1 << 19);
	constexpr uint32_t P18 = (1 << 18);
	constexpr uint32_t P17 = (1 << 17);
	constexpr uint32_t P16 = (1 << 16);
	constexpr uint32_t P15 = (1 << 15);
	constexpr uint32_t P14 = (1 << 14);
	constexpr uint32_t P13 = (1 << 13);
	constexpr uint32_t P12 = (1 << 12);
	constexpr uint32_t P11 = (1 << 11);
	constexpr uint32_t P10 = (1 << 10);
	constexpr uint32_t P9 = (1 << 9);
	constexpr uint32_t P8 = (1 << 8);
	constexpr uint32_t P7 = (1 << 7);
	constexpr uint32_t P6 = (1 << 6);
	constexpr uint32_t P5 = (1 << 5);
	constexpr uint32_t P4 = (1 << 4);
	constexpr uint32_t P3 = (1 << 3);
	constexpr uint32_t P2 = (1 << 2);
	constexpr uint32_t P1 = (1 << 1);
	constexpr uint32_t P0 = (1 << 0);
}

static const uint32_t BASE_ADDR_A = 0x400E0E00;
static const uint32_t BASE_ADDR_B = 0x400E1000;
static const uint32_t BASE_ADDR_C = 0x400E1200;
static const uint32_t BASE_ADDR_D = 0x400E1400;
static const uint32_t BASE_ADDR_E = 0x400E1600;
static const uint32_t BASE_ADDR_F = 0x400E1800;

/* ****************************************
 * Enable register.
 * ***************************************/

namespace PIOA {SFR PER = sfr(BASE_ADDR_A, 0);}
namespace PIOB {SFR PER = sfr(BASE_ADDR_B, 0);}
namespace PIOC {SFR PER = sfr(BASE_ADDR_C, 0);}
namespace PIOD {SFR PER = sfr(BASE_ADDR_D, 0);}
namespace PIOE {SFR PER = sfr(BASE_ADDR_E, 0);}
namespace PIOF {SFR PER = sfr(BASE_ADDR_F, 0);}

/* ****************************************
 * Disable register.
 *****************************************/
namespace PIOA {SFR PDR = sfr(BASE_ADDR_A, 0x0004);}
namespace PIOB {SFR PDR = sfr(BASE_ADDR_B, 0x0004);}
namespace PIOC {SFR PDR = sfr(BASE_ADDR_C, 0x0004);}
namespace PIOD {SFR PDR = sfr(BASE_ADDR_D, 0x0004);}
namespace PIOE {SFR PDR = sfr(BASE_ADDR_E, 0x0004);}
namespace PIOF {SFR PDR = sfr(BASE_ADDR_F, 0x0004);}

/* ****************************************
 * Status register.
 *****************************************/
namespace PIOA {const SFR PSR = sfr(BASE_ADDR_A, 0x0008);}
namespace PIOB {const SFR PSR = sfr(BASE_ADDR_B, 0x0008);}
namespace PIOC {const SFR PSR = sfr(BASE_ADDR_C, 0x0008);}
namespace PIOD {const SFR PSR = sfr(BASE_ADDR_D, 0x0008);}
namespace PIOE {const SFR PSR = sfr(BASE_ADDR_E, 0x0008);}
namespace PIOF {const SFR PSR = sfr(BASE_ADDR_F, 0x0008);}

/* ****************************************
 * Output enable register.
 *****************************************/
namespace PIOA {SFR OER = sfr(BASE_ADDR_A, 0x0010);}
namespace PIOB {SFR OER = sfr(BASE_ADDR_B, 0x0010);}
namespace PIOC {SFR OER = sfr(BASE_ADDR_C, 0x0010);}
namespace PIOD {SFR OER = sfr(BASE_ADDR_D, 0x0010);}
namespace PIOE {SFR OER = sfr(BASE_ADDR_E, 0x0010);}
namespace PIOF {SFR OER = sfr(BASE_ADDR_F, 0x0010);}

/* ****************************************
 * Output disable register.
 *****************************************/
namespace PIOA {SFR ODR = sfr(BASE_ADDR_A, 0x0014);}
namespace PIOB {SFR ODR = sfr(BASE_ADDR_B, 0x0014);}
namespace PIOC {SFR ODR = sfr(BASE_ADDR_C, 0x0014);}
namespace PIOD {SFR ODR = sfr(BASE_ADDR_D, 0x0014);}
namespace PIOE {SFR ODR = sfr(BASE_ADDR_E, 0x0014);}
namespace PIOF {SFR ODR = sfr(BASE_ADDR_F, 0x0014);}

/* ****************************************
 * Output status register.
 *****************************************/
namespace PIOA {const SFR OSR = sfr(BASE_ADDR_A, 0x0018);}
namespace PIOB {const SFR OSR = sfr(BASE_ADDR_B, 0x0018);}
namespace PIOC {const SFR OSR = sfr(BASE_ADDR_C, 0x0018);}
namespace PIOD {const SFR OSR = sfr(BASE_ADDR_D, 0x0018);}
namespace PIOE {const SFR OSR = sfr(BASE_ADDR_E, 0x0018);}
namespace PIOF {const SFR OSR = sfr(BASE_ADDR_F, 0x0018);}

/* ****************************************
 * Glitch input fiter enable register.
 *****************************************/
namespace PIOA {SFR IFER = sfr(BASE_ADDR_A, 0x0020);}
namespace PIOB {SFR IFER = sfr(BASE_ADDR_B, 0x0020);}
namespace PIOC {SFR IFER = sfr(BASE_ADDR_C, 0x0020);}
namespace PIOD {SFR IFER = sfr(BASE_ADDR_D, 0x0020);}
namespace PIOE {SFR IFER = sfr(BASE_ADDR_E, 0x0020);}
namespace PIOF {SFR IFER = sfr(BASE_ADDR_F, 0x0020);}

/* ****************************************
 * Glitch input fiter disable register.
 *****************************************/
namespace PIOA {SFR IFDR = sfr(BASE_ADDR_A, 0x0024);}
namespace PIOB {SFR IFDR = sfr(BASE_ADDR_B, 0x0024);}
namespace PIOC {SFR IFDR = sfr(BASE_ADDR_C, 0x0024);}
namespace PIOD {SFR IFDR = sfr(BASE_ADDR_D, 0x0024);}
namespace PIOE {SFR IFDR = sfr(BASE_ADDR_E, 0x0024);}
namespace PIOF {SFR IFDR = sfr(BASE_ADDR_F, 0x0024);}

/* ****************************************
 * Input fiter status register.
 *****************************************/
namespace PIOA {const SFR IFSR = sfr(BASE_ADDR_A, 0x0028);}
namespace PIOB {const SFR IFSR = sfr(BASE_ADDR_B, 0x0028);}
namespace PIOC {const SFR IFSR = sfr(BASE_ADDR_C, 0x0028);}
namespace PIOD {const SFR IFSR = sfr(BASE_ADDR_D, 0x0028);}
namespace PIOE {const SFR IFSR = sfr(BASE_ADDR_E, 0x0028);}
namespace PIOF {const SFR IFSR = sfr(BASE_ADDR_F, 0x0028);}

/* ****************************************
 * Set output data register.
 *****************************************/
namespace PIOA {SFR SODR = sfr(BASE_ADDR_A, 0x0030);}
namespace PIOB {SFR SODR = sfr(BASE_ADDR_B, 0x0030);}
namespace PIOC {SFR SODR = sfr(BASE_ADDR_C, 0x0030);}
namespace PIOD {SFR SODR = sfr(BASE_ADDR_D, 0x0030);}
namespace PIOE {SFR SODR = sfr(BASE_ADDR_E, 0x0030);}
namespace PIOF {SFR SODR = sfr(BASE_ADDR_F, 0x0030);}

/* ****************************************
 * Clear output data register.
 *****************************************/
namespace PIOA {SFR CODR = sfr(BASE_ADDR_A, 0x0034);}
namespace PIOB {SFR CODR = sfr(BASE_ADDR_B, 0x0034);}
namespace PIOC {SFR CODR = sfr(BASE_ADDR_C, 0x0034);}
namespace PIOD {SFR CODR = sfr(BASE_ADDR_D, 0x0034);}
namespace PIOE {SFR CODR = sfr(BASE_ADDR_E, 0x0034);}
namespace PIOF {SFR CODR = sfr(BASE_ADDR_F, 0x0034);}

/* ****************************************
 * Output data status register.
 *****************************************/
namespace PIOA {SFR ODSR = sfr(BASE_ADDR_A, 0x0038);}
namespace PIOB {SFR ODSR = sfr(BASE_ADDR_B, 0x0038);}
namespace PIOC {SFR ODSR = sfr(BASE_ADDR_C, 0x0038);}
namespace PIOD {SFR ODSR = sfr(BASE_ADDR_D, 0x0038);}
namespace PIOE {SFR ODSR = sfr(BASE_ADDR_E, 0x0038);}
namespace PIOF {SFR ODSR = sfr(BASE_ADDR_F, 0x0038);}

/* ****************************************
 * Pin data status register.
 *****************************************/
namespace PIOA {const SFR PDSR = sfr(BASE_ADDR_A, 0x003C);}
namespace PIOB {const SFR PDSR = sfr(BASE_ADDR_B, 0x003C);}
namespace PIOC {const SFR PDSR = sfr(BASE_ADDR_C, 0x003C);}
namespace PIOD {const SFR PDSR = sfr(BASE_ADDR_D, 0x003C);}
namespace PIOE {const SFR PDSR = sfr(BASE_ADDR_E, 0x003C);}
namespace PIOF {const SFR PDSR = sfr(BASE_ADDR_F, 0x003C);}

/* ****************************************
 * Interrupt enable register.
 *****************************************/
namespace PIOA {SFR IER = sfr(BASE_ADDR_A, 0x0040);}
namespace PIOB {SFR IER = sfr(BASE_ADDR_B, 0x0040);}
namespace PIOC {SFR IER = sfr(BASE_ADDR_C, 0x0040);}
namespace PIOD {SFR IER = sfr(BASE_ADDR_D, 0x0040);}
namespace PIOE {SFR IER = sfr(BASE_ADDR_E, 0x0040);}
namespace PIOF {SFR IER = sfr(BASE_ADDR_F, 0x0040);}

/* ****************************************
 * Interrupt disable register.
 *****************************************/
namespace PIOA {SFR IDR = sfr(BASE_ADDR_A, 0x0044);}
namespace PIOB {SFR IDR = sfr(BASE_ADDR_B, 0x0044);}
namespace PIOC {SFR IDR = sfr(BASE_ADDR_C, 0x0044);}
namespace PIOD {SFR IDR = sfr(BASE_ADDR_D, 0x0044);}
namespace PIOE {SFR IDR = sfr(BASE_ADDR_E, 0x0044);}
namespace PIOF {SFR IDR = sfr(BASE_ADDR_F, 0x0044);}

/* ****************************************
 * Interrupt mask register.
 *****************************************/
namespace PIOA {const SFR IMR = sfr(BASE_ADDR_A, 0x0048);}
namespace PIOB {const SFR IMR = sfr(BASE_ADDR_B, 0x0048);}
namespace PIOC {const SFR IMR = sfr(BASE_ADDR_C, 0x0048);}
namespace PIOD {const SFR IMR = sfr(BASE_ADDR_D, 0x0048);}
namespace PIOE {const SFR IMR = sfr(BASE_ADDR_E, 0x0048);}
namespace PIOF {const SFR IMR = sfr(BASE_ADDR_F, 0x0048);}

/* ****************************************
 * Interrupt status register.
 *****************************************/
namespace PIOA {const SFR ISR = sfr(BASE_ADDR_A, 0x004C);}
namespace PIOB {const SFR ISR = sfr(BASE_ADDR_B, 0x004C);}
namespace PIOC {const SFR ISR = sfr(BASE_ADDR_C, 0x004C);}
namespace PIOD {const SFR ISR = sfr(BASE_ADDR_D, 0x004C);}
namespace PIOE {const SFR ISR = sfr(BASE_ADDR_E, 0x004C);}
namespace PIOF {const SFR ISR = sfr(BASE_ADDR_F, 0x004C);}

/* ****************************************
 * Multi-driver enable register.
 *****************************************/
namespace PIOA {SFR MDER = sfr(BASE_ADDR_A, 0x0050);}
namespace PIOB {SFR MDER = sfr(BASE_ADDR_B, 0x0050);}
namespace PIOC {SFR MDER = sfr(BASE_ADDR_C, 0x0050);}
namespace PIOD {SFR MDER = sfr(BASE_ADDR_D, 0x0050);}
namespace PIOE {SFR MDER = sfr(BASE_ADDR_E, 0x0050);}
namespace PIOF {SFR MDER = sfr(BASE_ADDR_F, 0x0050);}

/* ****************************************
 * Multi-driver disable register.
 *****************************************/
namespace PIOA {SFR MDDR = sfr(BASE_ADDR_A, 0x0054);}
namespace PIOB {SFR MDDR = sfr(BASE_ADDR_B, 0x0054);}
namespace PIOC {SFR MDDR = sfr(BASE_ADDR_C, 0x0054);}
namespace PIOD {SFR MDDR = sfr(BASE_ADDR_D, 0x0054);}
namespace PIOE {SFR MDDR = sfr(BASE_ADDR_E, 0x0054);}
namespace PIOF {SFR MDDR = sfr(BASE_ADDR_F, 0x0054);}

/* ****************************************
 * Multi-driver status register.
 *****************************************/
namespace PIOA {const SFR MDSR = sfr(BASE_ADDR_A, 0x0058);}
namespace PIOB {const SFR MDSR = sfr(BASE_ADDR_B, 0x0058);}
namespace PIOC {const SFR MDSR = sfr(BASE_ADDR_C, 0x0058);}
namespace PIOD {const SFR MDSR = sfr(BASE_ADDR_D, 0x0058);}
namespace PIOE {const SFR MDSR = sfr(BASE_ADDR_E, 0x0058);}
namespace PIOF {const SFR MDSR = sfr(BASE_ADDR_F, 0x0058);}

/* ****************************************
 * Pull-up disable register.
 *****************************************/
namespace PIOA {SFR PUDR = sfr(BASE_ADDR_A, 0x0060);}
namespace PIOB {SFR PUDR = sfr(BASE_ADDR_B, 0x0060);}
namespace PIOC {SFR PUDR = sfr(BASE_ADDR_C, 0x0060);}
namespace PIOD {SFR PUDR = sfr(BASE_ADDR_D, 0x0060);}
namespace PIOE {SFR PUDR = sfr(BASE_ADDR_E, 0x0060);}
namespace PIOF {SFR PUDR = sfr(BASE_ADDR_F, 0x0060);}

/* ****************************************
 * Pull-up enable register.
 *****************************************/
namespace PIOA {SFR PUER = sfr(BASE_ADDR_A, 0x0064);}
namespace PIOB {SFR PUER = sfr(BASE_ADDR_B, 0x0064);}
namespace PIOC {SFR PUER = sfr(BASE_ADDR_C, 0x0064);}
namespace PIOD {SFR PUER = sfr(BASE_ADDR_D, 0x0064);}
namespace PIOE {SFR PUER = sfr(BASE_ADDR_E, 0x0064);}
namespace PIOF {SFR PUER = sfr(BASE_ADDR_F, 0x0064);}

/* ****************************************
 * Pull-up status register.
 *****************************************/
namespace PIOA {const SFR PUSR = sfr(BASE_ADDR_A, 0x0068);}
namespace PIOB {const SFR PUSR = sfr(BASE_ADDR_B, 0x0068);}
namespace PIOC {const SFR PUSR = sfr(BASE_ADDR_C, 0x0068);}
namespace PIOD {const SFR PUSR = sfr(BASE_ADDR_D, 0x0068);}
namespace PIOE {const SFR PUSR = sfr(BASE_ADDR_E, 0x0068);}
namespace PIOF {const SFR PUSR = sfr(BASE_ADDR_F, 0x0068);}

/* ****************************************
 * Perpheral AB select register.
 *****************************************/
namespace PIOA {SFR ABSR = sfr(BASE_ADDR_A, 0x0070);}
namespace PIOB {SFR ABSR = sfr(BASE_ADDR_B, 0x0070);}
namespace PIOC {SFR ABSR = sfr(BASE_ADDR_C, 0x0070);}
namespace PIOD {SFR ABSR = sfr(BASE_ADDR_D, 0x0070);}
namespace PIOE {SFR ABSR = sfr(BASE_ADDR_E, 0x0070);}
namespace PIOF {SFR ABSR = sfr(BASE_ADDR_F, 0x0070);}

/* ****************************************
 * System clock glitch input
 * filtering select register.
 *****************************************/
namespace PIOA {SFR SCIFSR = sfr(BASE_ADDR_A, 0x0080);}
namespace PIOB {SFR SCIFSR = sfr(BASE_ADDR_B, 0x0080);}
namespace PIOC {SFR SCIFSR = sfr(BASE_ADDR_C, 0x0080);}
namespace PIOD {SFR SCIFSR = sfr(BASE_ADDR_D, 0x0080);}
namespace PIOE {SFR SCIFSR = sfr(BASE_ADDR_E, 0x0080);}
namespace PIOF {SFR SCIFSR = sfr(BASE_ADDR_F, 0x0080);}

/* ****************************************
 * Debouncing input filtering select
 * register.
 *****************************************/
namespace PIOA {SFR DIFSR = sfr(BASE_ADDR_A, 0x0084);}
namespace PIOB {SFR DIFSR = sfr(BASE_ADDR_B, 0x0084);}
namespace PIOC {SFR DIFSR = sfr(BASE_ADDR_C, 0x0084);}
namespace PIOD {SFR DIFSR = sfr(BASE_ADDR_D, 0x0084);}
namespace PIOE {SFR DIFSR = sfr(BASE_ADDR_E, 0x0084);}
namespace PIOF {SFR DIFSR = sfr(BASE_ADDR_F, 0x0084);}

/* ****************************************
 * Glitch or debouncing input fiter
 * selection status register.
 *****************************************/
namespace PIOA {const SFR IFDGSR = sfr(BASE_ADDR_A, 0x0088);}
namespace PIOB {const SFR IFDGSR = sfr(BASE_ADDR_B, 0x0088);}
namespace PIOC {const SFR IFDGSR = sfr(BASE_ADDR_C, 0x0088);}
namespace PIOD {const SFR IFDGSR = sfr(BASE_ADDR_D, 0x0088);}
namespace PIOE {const SFR IFDGSR = sfr(BASE_ADDR_E, 0x0088);}
namespace PIOF {const SFR IFDGSR = sfr(BASE_ADDR_F, 0x0088);}

/* ****************************************
 * Slow clock divider debouncing register.
 *****************************************/
namespace PIOA {SFR SCDR = sfr(BASE_ADDR_A, 0x008C);}
namespace PIOB {SFR SCDR = sfr(BASE_ADDR_B, 0x008C);}
namespace PIOC {SFR SCDR = sfr(BASE_ADDR_C, 0x008C);}
namespace PIOD {SFR SCDR = sfr(BASE_ADDR_D, 0x008C);}
namespace PIOE {SFR SCDR = sfr(BASE_ADDR_E, 0x008C);}
namespace PIOF {SFR SCDR = sfr(BASE_ADDR_F, 0x008C);}

namespace PIO_SCDR_BITS {
	constexpr uint32_t SCDR_DIV13 (1 << 13);
	constexpr uint32_t SCDR_DIV12 (1 << 12);
	constexpr uint32_t SCRD_DIV11 (1 << 11);
	constexpr uint32_t SCRD_DIV10 (1 << 10);
	constexpr uint32_t SCDR_DIV9 (1 << 9);
	constexpr uint32_t SCDR_DIV8 (1 << 8);
	constexpr uint32_t SCDR_DIV7 (1 << 7);
	constexpr uint32_t SCDR_DIV6 (1 << 6);
	constexpr uint32_t SCDR_DIV5 (1 << 5);
	constexpr uint32_t SCDR_DIV4 (1 << 4);
	constexpr uint32_t SCDR_DIV3 (1 << 3);
	constexpr uint32_t SCDR_DIV2 (1 << 2);
	constexpr uint32_t SCDR_DIV1 (1 << 1);
	constexpr uint32_t SCDR_DIV0 (1 << 0);
}

/* ****************************************
 * Output write enable register.
 *****************************************/
namespace PIOA {SFR OWER = sfr(BASE_ADDR_A, 0x00A0);}
namespace PIOB {SFR OWER = sfr(BASE_ADDR_B, 0x00A0);}
namespace PIOC {SFR OWER = sfr(BASE_ADDR_C, 0x00A0);}
namespace PIOD {SFR OWER = sfr(BASE_ADDR_D, 0x00A0);}
namespace PIOE {SFR OWER = sfr(BASE_ADDR_E, 0x00A0);}
namespace PIOF {SFR OWER = sfr(BASE_ADDR_F, 0x00A0);}

/* ****************************************
 * Output write disable register.
 *****************************************/
namespace PIOA {SFR OWDR = sfr(BASE_ADDR_A, 0x00A4);}
namespace PIOB {SFR OWDR = sfr(BASE_ADDR_B, 0x00A4);}
namespace PIOC {SFR OWDR = sfr(BASE_ADDR_C, 0x00A4);}
namespace PIOD {SFR OWDR = sfr(BASE_ADDR_D, 0x00A4);}
namespace PIOE {SFR OWDR = sfr(BASE_ADDR_E, 0x00A4);}
namespace PIOF {SFR OWDR = sfr(BASE_ADDR_F, 0x00A4);}

/* ****************************************
 * Output write status register.
 *****************************************/
namespace PIOA {const SFR OWSR = sfr(BASE_ADDR_A, 0x00A8);}
namespace PIOB {const SFR OWSR = sfr(BASE_ADDR_B, 0x00A8);}
namespace PIOC {const SFR OWSR = sfr(BASE_ADDR_C, 0x00A8);}
namespace PIOD {const SFR OWSR = sfr(BASE_ADDR_D, 0x00A8);}
namespace PIOE {const SFR OWSR = sfr(BASE_ADDR_E, 0x00A8);}
namespace PIOF {const SFR OWSR = sfr(BASE_ADDR_F, 0x00A8);}

/* ****************************************
 * Additional interrupt modes
 * enable register.
 *****************************************/
namespace PIOA {SFR AIMER = sfr(BASE_ADDR_A, 0x00B0);}
namespace PIOB {SFR AIMER = sfr(BASE_ADDR_B, 0x00B0);}
namespace PIOC {SFR AIMER = sfr(BASE_ADDR_C, 0x00B0);}
namespace PIOD {SFR AIMER = sfr(BASE_ADDR_D, 0x00B0);}
namespace PIOE {SFR AIMER = sfr(BASE_ADDR_E, 0x00B0);}
namespace PIOF {SFR AIMER = sfr(BASE_ADDR_F, 0x00B0);}

/* ****************************************
 * Additional interrupt modes
 * disable register.
 *****************************************/
namespace PIOA {SFR AIMDR = sfr(BASE_ADDR_A, 0x00B4);}
namespace PIOB {SFR AIMDR = sfr(BASE_ADDR_B, 0x00B4);}
namespace PIOC {SFR AIMDR = sfr(BASE_ADDR_C, 0x00B4);}
namespace PIOD {SFR AIMDR = sfr(BASE_ADDR_D, 0x00B4);}
namespace PIOE {SFR AIMDR = sfr(BASE_ADDR_E, 0x00B4);}
namespace PIOF {SFR AIMDR = sfr(BASE_ADDR_F, 0x00B4);}

/* ****************************************
 * Additional interrupt modes
 * mask register.
 *****************************************/
namespace PIOA {const SFR AIMMR = sfr(BASE_ADDR_A, 0x00B8);}
namespace PIOB {const SFR AIMMR = sfr(BASE_ADDR_B, 0x00B8);}
namespace PIOC {const SFR AIMMR = sfr(BASE_ADDR_C, 0x00B8);}
namespace PIOD {const SFR AIMMR = sfr(BASE_ADDR_D, 0x00B8);}
namespace PIOE {const SFR AIMMR = sfr(BASE_ADDR_E, 0x00B8);}
namespace PIOF {const SFR AIMMR = sfr(BASE_ADDR_F, 0x00B8);}

/* ****************************************
 * Edge select register.
 *****************************************/
namespace PIOA {SFR ESR = sfr(BASE_ADDR_A, 0x00C0);}
namespace PIOB {SFR ESR = sfr(BASE_ADDR_B, 0x00C0);}
namespace PIOC {SFR ESR = sfr(BASE_ADDR_C, 0x00C0);}
namespace PIOD {SFR ESR = sfr(BASE_ADDR_D, 0x00C0);}
namespace PIOE {SFR ESR = sfr(BASE_ADDR_E, 0x00C0);}
namespace PIOF {SFR ESR = sfr(BASE_ADDR_F, 0x00C0);}

/* ****************************************
 * Level select register.
 *****************************************/
namespace PIOA {SFR LSR = sfr(BASE_ADDR_A, 0x00C4);}
namespace PIOB {SFR LSR = sfr(BASE_ADDR_B, 0x00C4);}
namespace PIOC {SFR LSR = sfr(BASE_ADDR_C, 0x00C4);}
namespace PIOD {SFR LSR = sfr(BASE_ADDR_D, 0x00C4);}
namespace PIOE {SFR LSR = sfr(BASE_ADDR_E, 0x00C4);}
namespace PIOF {SFR LSR = sfr(BASE_ADDR_F, 0x00C4);}

/* ****************************************
 * Edge/level status register.
 *****************************************/
namespace PIOA {const SFR ELSR = sfr(BASE_ADDR_A, 0x00C8);}
namespace PIOB {const SFR ELSR = sfr(BASE_ADDR_B, 0x00C8);}
namespace PIOC {const SFR ELSR = sfr(BASE_ADDR_C, 0x00C8);}
namespace PIOD {const SFR ELSR = sfr(BASE_ADDR_D, 0x00C8);}
namespace PIOE {const SFR ELSR = sfr(BASE_ADDR_E, 0x00C8);}
namespace PIOF {const SFR ELSR = sfr(BASE_ADDR_F, 0x00C8);}

/* ****************************************
 * Falling edge/low level select register.
 *****************************************/
namespace PIOA {SFR FELLSR = sfr(BASE_ADDR_A, 0x00D0);}
namespace PIOB {SFR FELLSR = sfr(BASE_ADDR_B, 0x00D0);}
namespace PIOC {SFR FELLSR = sfr(BASE_ADDR_C, 0x00D0);}
namespace PIOD {SFR FELLSR = sfr(BASE_ADDR_D, 0x00D0);}
namespace PIOE {SFR FELLSR = sfr(BASE_ADDR_E, 0x00D0);}
namespace PIOF {SFR FELLSR = sfr(BASE_ADDR_F, 0x00D0);}

/* ****************************************
 * Rising edge/high level select register.
 *****************************************/
namespace PIOA {SFR REHLSR = sfr(BASE_ADDR_A, 0x00D4);}
namespace PIOB {SFR REHLSR = sfr(BASE_ADDR_B, 0x00D4);}
namespace PIOC {SFR REHLSR = sfr(BASE_ADDR_C, 0x00D4);}
namespace PIOD {SFR REHLSR = sfr(BASE_ADDR_D, 0x00D4);}
namespace PIOE {SFR REHLSR = sfr(BASE_ADDR_E, 0x00D4);}
namespace PIOF {SFR REHLSR = sfr(BASE_ADDR_F, 0x00D4);}

/* ****************************************
 * Fall/rise - low/high status register.
 *****************************************/
namespace PIOA {const SFR FRLHSR = sfr(BASE_ADDR_A, 0x00D8);}
namespace PIOB {const SFR FRLHSR = sfr(BASE_ADDR_B, 0x00D8);}
namespace PIOC {const SFR FRLHSR = sfr(BASE_ADDR_C, 0x00D8);}
namespace PIOD {const SFR FRLHSR = sfr(BASE_ADDR_D, 0x00D8);}
namespace PIOE {const SFR FRLHSR = sfr(BASE_ADDR_E, 0x00D8);}
namespace PIOF {const SFR FRLHSR = sfr(BASE_ADDR_F, 0x00D8);}

/* ****************************************
 * Lock status register.
 *****************************************/
namespace PIOA {const SFR LOCKSR = sfr(BASE_ADDR_A, 0x00E0);}
namespace PIOB {const SFR LOCKSR = sfr(BASE_ADDR_B, 0x00E0);}
namespace PIOC {const SFR LOCKSR = sfr(BASE_ADDR_C, 0x00E0);}
namespace PIOD {const SFR LOCKSR = sfr(BASE_ADDR_D, 0x00E0);}
namespace PIOE {const SFR LOCKSR = sfr(BASE_ADDR_E, 0x00E0);}
namespace PIOF {const SFR LOCKSR = sfr(BASE_ADDR_F, 0x00E0);}

/* ****************************************
 * Write protect mode register.
 *****************************************/
namespace PIOA {SFR WPMR = sfr(BASE_ADDR_A, 0x00E4);}
namespace PIOB {SFR WPMR = sfr(BASE_ADDR_B, 0x00E4);}
namespace PIOC {SFR WPMR = sfr(BASE_ADDR_C, 0x00E4);}
namespace PIOD {SFR WPMR = sfr(BASE_ADDR_D, 0x00E4);}
namespace PIOE {SFR WPMR = sfr(BASE_ADDR_E, 0x00E4);}
namespace PIOF {SFR WPMR = sfr(BASE_ADDR_F, 0x00E4);}

namespace PIO_WPMR_BITS {
	constexpr uint32_t WPMR_WPKEY (0x50494F00);
	constexpr uint32_t WPMR_WPEN (1 << 0);
}

/* ****************************************
 * Write protect status register.
 *****************************************/
namespace PIOA {const SFR WPSR = sfr(BASE_ADDR_A, 0x00E8);}
namespace PIOB {const SFR WPSR = sfr(BASE_ADDR_B, 0x00E8);}
namespace PIOC {const SFR WPSR = sfr(BASE_ADDR_C, 0x00E8);}
namespace PIOD {const SFR WPSR = sfr(BASE_ADDR_D, 0x00E8);}
namespace PIOE {const SFR WPSR = sfr(BASE_ADDR_E, 0x00E8);}
namespace PIOF {const SFR WPSR = sfr(BASE_ADDR_F, 0x00E8);}

namespace PIO_WPSR_BITS {
	constexpr uint32_t WPSR_WPVSRC (0x00FFFF00);
	constexpr uint32_t WPSR_WPVS (1 << 0);
}

#endif
