/* stats_tree_plugin.c
* Stats tree plugin registration file
* Automatically generated by make_stat_tree_registration.pl
*
* $Id$
*
* Ethereal - Network traffic analyzer
* By Gerald Combs <gerald@ethereal.com>
* Copyright 1998 Gerald Combs
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* as published by the Free Software Foundation; either version 2
* of the License, or (at your option) any later version.
* 
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
* 
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
*/

#ifndef ENABLE_STATIC
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "plugins/plugin_api.h"
#include <gmodule.h>
#include "plugins/plugin_api_defs.h"
#include <epan/stats_tree.h>

extern void register_pinfo_stat_trees(void);

G_MODULE_EXPORT const gchar version[] = "0.0";

G_MODULE_EXPORT void plugin_init(plugin_address_table_t *pat _U_ ) {
	/* initialise the table of pointers needed in Win32 DLLs */
	plugin_address_table_init(pat);

}

G_MODULE_EXPORT void plugin_register_tap_listener(void)
{
	register_pinfo_stat_trees();
}

#endif
