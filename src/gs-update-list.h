/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*-
 *
 * Copyright (C) 2013-2017 Richard Hughes <richard@hughsie.com>
 * Copyright (C) 2014-2015 Kalev Lember <klember@redhat.com>
 *
 * Licensed under the GNU General Public License Version 2
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef GS_UPDATE_LIST_H
#define GS_UPDATE_LIST_H

#include <gtk/gtk.h>

#include "gnome-software-private.h"

G_BEGIN_DECLS

#define GS_TYPE_UPDATE_LIST (gs_update_list_get_type ())

G_DECLARE_DERIVABLE_TYPE (GsUpdateList, gs_update_list, GS, UPDATE_LIST, GtkListBox)

struct _GsUpdateListClass
{
	GtkListBoxClass		 parent_class;
};

GtkWidget	*gs_update_list_new			(void);
void		 gs_update_list_add_app			(GsUpdateList	*update_list,
							 GsApp		*app);

G_END_DECLS

#endif /* GS_UPDATE_LIST_H */

/* vim: set noexpandtab: */
