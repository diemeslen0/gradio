/*
 * Copyright (c) 2011 Red Hat, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by 
 * the Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public 
 * License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License 
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * Author: Cosimo Cecchi <cosimoc@redhat.com>
 *
 */

#ifndef _GD_TOGGLE_PIXBUF_RENDERER_H
#define _GD_TOGGLE_PIXBUF_RENDERER_H

#include <glib-object.h>

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define GD_TYPE_TOGGLE_PIXBUF_RENDERER gd_toggle_pixbuf_renderer_get_type()

#define GD_TOGGLE_PIXBUF_RENDERER(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST ((obj), \
   GD_TYPE_TOGGLE_PIXBUF_RENDERER, GdTogglePixbufRenderer))

#define GD_TOGGLE_PIXBUF_RENDERER_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_CAST ((klass), \
   GD_TYPE_TOGGLE_PIXBUF_RENDERER, GdTogglePixbufRendererClass))

#define GD_IS_TOGGLE_PIXBUF_RENDERER(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE ((obj), \
   GD_TYPE_TOGGLE_PIXBUF_RENDERER))

#define GD_IS_TOGGLE_PIXBUF_RENDERER_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_TYPE ((klass), \
   GD_TYPE_TOGGLE_PIXBUF_RENDERER))

#define GD_TOGGLE_PIXBUF_RENDERER_GET_CLASS(obj) \
  (G_TYPE_INSTANCE_GET_CLASS ((obj), \
   GD_TYPE_TOGGLE_PIXBUF_RENDERER, GdTogglePixbufRendererClass))

typedef struct _GdTogglePixbufRenderer GdTogglePixbufRenderer;
typedef struct _GdTogglePixbufRendererClass GdTogglePixbufRendererClass;
typedef struct _GdTogglePixbufRendererPrivate GdTogglePixbufRendererPrivate;

struct _GdTogglePixbufRenderer
{
  GtkCellRendererPixbuf parent;

  GdTogglePixbufRendererPrivate *priv;
};

struct _GdTogglePixbufRendererClass
{
  GtkCellRendererPixbufClass parent_class;
};

GType gd_toggle_pixbuf_renderer_get_type (void) G_GNUC_CONST;

GtkCellRenderer *gd_toggle_pixbuf_renderer_new (void);

G_END_DECLS

#endif /* _GD_TOGGLE_PIXBUF_RENDERER_H */
