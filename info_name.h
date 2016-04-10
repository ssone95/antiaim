
#ifndef INFO_NAME_H
#define INFO_NAME_H

#include "../metamod/vers_meta.h"		// VDATE, VVERSION, etc

#define COPYRIGHT_YEAR "2007"

#define VNAME		"antiaim"
#define VAUTHOR		"Hrvoje Zeba <hrvoje.zeba@fer.hr>"
#define VURL		"http://www.metamod.org/"
#define VLOGTAG		"antiaim"

// Various strings for the Windows DLL Resources in res_plugin.rc
#define RC_COMMENTS		"Adds various server functions.  Requires Metamod; see " VURL
#define RC_DESC			"antiaim"
#define RC_FILENAME		"ANTIAIM_MM.DLL"
#define RC_INTERNAL		"ANTIAIM_MM"
#define RC_COPYRIGHT	"Copyright© 2001-" COPYRIGHT_YEAR  " Hrvoje Zeba <hrvoje.zeba@fer.hr>; GPL licensed"
#define RC_LICENSE      "Licensed under the GNU General Public License"

#endif /* INFO_NAME_H */
