// SPDX-License-Identifier: GPL-2.0-or-later

#ifndef _EXFAT_TABLES_H
#define _EXFAT_TABLES_H

/* Upcase table macro */
#define EXFAT_NUM_UPCASE	(2918)
#define EXFAT_UTBL_COUNT	(0x10000)

/* Tables */
extern const unsigned short exfat_uni_def_upcase[EXFAT_NUM_UPCASE];
extern const unsigned short exfat_bad_uni_chars[];

#endif /* !_EXFAT_TABLES_H */
