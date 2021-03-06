/* Aravis - Digital camera library
 *
 * Copyright © 2009-2012 Emmanuel Pacaud
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 * Author: Emmanuel Pacaud <emmanuel@gnome.org>
 */

#ifndef ARV_GC_INVALIDATOR_NODE_H
#define ARV_GC_INVALIDATOR_NODE_H

#include <arvtypes.h>
#include <arvgcpropertynode.h>

G_BEGIN_DECLS

#define ARV_TYPE_GC_INVALIDATOR_NODE             (arv_gc_invalidator_node_get_type ())
#define ARV_GC_INVALIDATOR_NODE(obj)             (G_TYPE_CHECK_INSTANCE_CAST ((obj), ARV_TYPE_GC_INVALIDATOR_NODE, ArvGcInvalidatorNode))
#define ARV_GC_INVALIDATOR_NODE_CLASS(klass)     (G_TYPE_CHECK_CLASS_CAST ((klass), ARV_TYPE_GC_INVALIDATOR_NODE, ArvGcInvalidatorNodeClass))
#define ARV_IS_GC_INVALIDATOR_NODE(obj)          (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ARV_TYPE_GC_INVALIDATOR_NODE))
#define ARV_IS_GC_INVALIDATOR_NODE_CLASS(klass)  (G_TYPE_CHECK_CLASS_TYPE ((klass), ARV_TYPE_GC_INVALIDATOR_NODE))
#define ARV_GC_INVALIDATOR_NODE_GET_CLASS(obj)   (G_TYPE_INSTANCE_GET_CLASS((obj), ARV_TYPE_GC_INVALIDATOR_NODE, ArvGcInvalidatorNodeClass))

typedef struct _ArvGcInvalidatorNodeClass ArvGcInvalidatorNodeClass;

struct _ArvGcInvalidatorNode {
	ArvGcPropertyNode	base;

	gint modification_count;
};

struct _ArvGcInvalidatorNodeClass {
	ArvGcPropertyNodeClass parent_class;
};

GType 		arv_gc_invalidator_node_get_type 		(void);
ArvGcNode * 	arv_gc_invalidator_node_new 			(void);
gint		arv_gc_invalidator_node_get_modification_count	(ArvGcInvalidatorNode *invalidator_node);
void		arv_gc_invalidator_node_set_modification_count	(ArvGcInvalidatorNode *invalidator_node, gint modification_count);

G_END_DECLS

#endif
