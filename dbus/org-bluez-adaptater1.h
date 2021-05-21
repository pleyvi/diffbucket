/*
 * This file is generated by gdbus-codegen, do not modify it.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from. Note that it links to GLib, so must comply with the
 * LGPL linking clauses.
 */

#ifndef ___HOME_USER_BSP_ORANGEPI_BUILD_BUILDROOT_OPL2_IMAGE_OUTPUT_BUILD_GATTLIB_V0_3_RC1_DBUS_ORG_BLUEZ_ADAPTATER1_H__
#define ___HOME_USER_BSP_ORANGEPI_BUILD_BUILDROOT_OPL2_IMAGE_OUTPUT_BUILD_GATTLIB_V0_3_RC1_DBUS_ORG_BLUEZ_ADAPTATER1_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.bluez.Adapter1 */

#define TYPE_ORG_BLUEZ_ADAPTER1 (org_bluez_adapter1_get_type ())
#define ORG_BLUEZ_ADAPTER1(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_ORG_BLUEZ_ADAPTER1, OrgBluezAdapter1))
#define IS_ORG_BLUEZ_ADAPTER1(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_ORG_BLUEZ_ADAPTER1))
#define ORG_BLUEZ_ADAPTER1_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), TYPE_ORG_BLUEZ_ADAPTER1, OrgBluezAdapter1Iface))

struct _OrgBluezAdapter1;
typedef struct _OrgBluezAdapter1 OrgBluezAdapter1;
typedef struct _OrgBluezAdapter1Iface OrgBluezAdapter1Iface;

struct _OrgBluezAdapter1Iface
{
  GTypeInterface parent_iface;


  gboolean (*handle_remove_device) (
    OrgBluezAdapter1 *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_device);

  gboolean (*handle_set_discovery_filter) (
    OrgBluezAdapter1 *object,
    GDBusMethodInvocation *invocation,
    GVariant *arg_properties);

  gboolean (*handle_start_discovery) (
    OrgBluezAdapter1 *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_stop_discovery) (
    OrgBluezAdapter1 *object,
    GDBusMethodInvocation *invocation);

  const gchar * (*get_address) (OrgBluezAdapter1 *object);

  const gchar * (*get_address_type) (OrgBluezAdapter1 *object);

  const gchar * (*get_alias) (OrgBluezAdapter1 *object);

  guint  (*get_class) (OrgBluezAdapter1 *object);

  gboolean  (*get_discoverable) (OrgBluezAdapter1 *object);

  guint  (*get_discoverable_timeout) (OrgBluezAdapter1 *object);

  gboolean  (*get_discovering) (OrgBluezAdapter1 *object);

  const gchar * (*get_modalias) (OrgBluezAdapter1 *object);

  const gchar * (*get_name) (OrgBluezAdapter1 *object);

  gboolean  (*get_pairable) (OrgBluezAdapter1 *object);

  guint  (*get_pairable_timeout) (OrgBluezAdapter1 *object);

  gboolean  (*get_powered) (OrgBluezAdapter1 *object);

  const gchar *const * (*get_uuids) (OrgBluezAdapter1 *object);

};

GType org_bluez_adapter1_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *org_bluez_adapter1_interface_info (void);
guint org_bluez_adapter1_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void org_bluez_adapter1_complete_start_discovery (
    OrgBluezAdapter1 *object,
    GDBusMethodInvocation *invocation);

void org_bluez_adapter1_complete_set_discovery_filter (
    OrgBluezAdapter1 *object,
    GDBusMethodInvocation *invocation);

void org_bluez_adapter1_complete_stop_discovery (
    OrgBluezAdapter1 *object,
    GDBusMethodInvocation *invocation);

void org_bluez_adapter1_complete_remove_device (
    OrgBluezAdapter1 *object,
    GDBusMethodInvocation *invocation);



/* D-Bus method calls: */
void org_bluez_adapter1_call_start_discovery (
    OrgBluezAdapter1 *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_bluez_adapter1_call_start_discovery_finish (
    OrgBluezAdapter1 *proxy,
    GAsyncResult *res,
    GError **error);

gboolean org_bluez_adapter1_call_start_discovery_sync (
    OrgBluezAdapter1 *proxy,
    GCancellable *cancellable,
    GError **error);

void org_bluez_adapter1_call_set_discovery_filter (
    OrgBluezAdapter1 *proxy,
    GVariant *arg_properties,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_bluez_adapter1_call_set_discovery_filter_finish (
    OrgBluezAdapter1 *proxy,
    GAsyncResult *res,
    GError **error);

gboolean org_bluez_adapter1_call_set_discovery_filter_sync (
    OrgBluezAdapter1 *proxy,
    GVariant *arg_properties,
    GCancellable *cancellable,
    GError **error);

void org_bluez_adapter1_call_stop_discovery (
    OrgBluezAdapter1 *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_bluez_adapter1_call_stop_discovery_finish (
    OrgBluezAdapter1 *proxy,
    GAsyncResult *res,
    GError **error);

gboolean org_bluez_adapter1_call_stop_discovery_sync (
    OrgBluezAdapter1 *proxy,
    GCancellable *cancellable,
    GError **error);

void org_bluez_adapter1_call_remove_device (
    OrgBluezAdapter1 *proxy,
    const gchar *arg_device,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_bluez_adapter1_call_remove_device_finish (
    OrgBluezAdapter1 *proxy,
    GAsyncResult *res,
    GError **error);

gboolean org_bluez_adapter1_call_remove_device_sync (
    OrgBluezAdapter1 *proxy,
    const gchar *arg_device,
    GCancellable *cancellable,
    GError **error);



/* D-Bus property accessors: */
const gchar *org_bluez_adapter1_get_address (OrgBluezAdapter1 *object);
gchar *org_bluez_adapter1_dup_address (OrgBluezAdapter1 *object);
void org_bluez_adapter1_set_address (OrgBluezAdapter1 *object, const gchar *value);

const gchar *org_bluez_adapter1_get_address_type (OrgBluezAdapter1 *object);
gchar *org_bluez_adapter1_dup_address_type (OrgBluezAdapter1 *object);
void org_bluez_adapter1_set_address_type (OrgBluezAdapter1 *object, const gchar *value);

const gchar *org_bluez_adapter1_get_name (OrgBluezAdapter1 *object);
gchar *org_bluez_adapter1_dup_name (OrgBluezAdapter1 *object);
void org_bluez_adapter1_set_name (OrgBluezAdapter1 *object, const gchar *value);

const gchar *org_bluez_adapter1_get_alias (OrgBluezAdapter1 *object);
gchar *org_bluez_adapter1_dup_alias (OrgBluezAdapter1 *object);
void org_bluez_adapter1_set_alias (OrgBluezAdapter1 *object, const gchar *value);

guint org_bluez_adapter1_get_class (OrgBluezAdapter1 *object);
void org_bluez_adapter1_set_class (OrgBluezAdapter1 *object, guint value);

gboolean org_bluez_adapter1_get_powered (OrgBluezAdapter1 *object);
void org_bluez_adapter1_set_powered (OrgBluezAdapter1 *object, gboolean value);

gboolean org_bluez_adapter1_get_discoverable (OrgBluezAdapter1 *object);
void org_bluez_adapter1_set_discoverable (OrgBluezAdapter1 *object, gboolean value);

guint org_bluez_adapter1_get_discoverable_timeout (OrgBluezAdapter1 *object);
void org_bluez_adapter1_set_discoverable_timeout (OrgBluezAdapter1 *object, guint value);

gboolean org_bluez_adapter1_get_pairable (OrgBluezAdapter1 *object);
void org_bluez_adapter1_set_pairable (OrgBluezAdapter1 *object, gboolean value);

guint org_bluez_adapter1_get_pairable_timeout (OrgBluezAdapter1 *object);
void org_bluez_adapter1_set_pairable_timeout (OrgBluezAdapter1 *object, guint value);

gboolean org_bluez_adapter1_get_discovering (OrgBluezAdapter1 *object);
void org_bluez_adapter1_set_discovering (OrgBluezAdapter1 *object, gboolean value);

const gchar *const *org_bluez_adapter1_get_uuids (OrgBluezAdapter1 *object);
gchar **org_bluez_adapter1_dup_uuids (OrgBluezAdapter1 *object);
void org_bluez_adapter1_set_uuids (OrgBluezAdapter1 *object, const gchar *const *value);

const gchar *org_bluez_adapter1_get_modalias (OrgBluezAdapter1 *object);
gchar *org_bluez_adapter1_dup_modalias (OrgBluezAdapter1 *object);
void org_bluez_adapter1_set_modalias (OrgBluezAdapter1 *object, const gchar *value);


/* ---- */

#define TYPE_ORG_BLUEZ_ADAPTER1_PROXY (org_bluez_adapter1_proxy_get_type ())
#define ORG_BLUEZ_ADAPTER1_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_ORG_BLUEZ_ADAPTER1_PROXY, OrgBluezAdapter1Proxy))
#define ORG_BLUEZ_ADAPTER1_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_ORG_BLUEZ_ADAPTER1_PROXY, OrgBluezAdapter1ProxyClass))
#define ORG_BLUEZ_ADAPTER1_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_ORG_BLUEZ_ADAPTER1_PROXY, OrgBluezAdapter1ProxyClass))
#define IS_ORG_BLUEZ_ADAPTER1_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_ORG_BLUEZ_ADAPTER1_PROXY))
#define IS_ORG_BLUEZ_ADAPTER1_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_ORG_BLUEZ_ADAPTER1_PROXY))

typedef struct _OrgBluezAdapter1Proxy OrgBluezAdapter1Proxy;
typedef struct _OrgBluezAdapter1ProxyClass OrgBluezAdapter1ProxyClass;
typedef struct _OrgBluezAdapter1ProxyPrivate OrgBluezAdapter1ProxyPrivate;

struct _OrgBluezAdapter1Proxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  OrgBluezAdapter1ProxyPrivate *priv;
};

struct _OrgBluezAdapter1ProxyClass
{
  GDBusProxyClass parent_class;
};

GType org_bluez_adapter1_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (OrgBluezAdapter1Proxy, g_object_unref)
#endif

void org_bluez_adapter1_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
OrgBluezAdapter1 *org_bluez_adapter1_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
OrgBluezAdapter1 *org_bluez_adapter1_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void org_bluez_adapter1_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
OrgBluezAdapter1 *org_bluez_adapter1_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
OrgBluezAdapter1 *org_bluez_adapter1_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define TYPE_ORG_BLUEZ_ADAPTER1_SKELETON (org_bluez_adapter1_skeleton_get_type ())
#define ORG_BLUEZ_ADAPTER1_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_ORG_BLUEZ_ADAPTER1_SKELETON, OrgBluezAdapter1Skeleton))
#define ORG_BLUEZ_ADAPTER1_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_ORG_BLUEZ_ADAPTER1_SKELETON, OrgBluezAdapter1SkeletonClass))
#define ORG_BLUEZ_ADAPTER1_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_ORG_BLUEZ_ADAPTER1_SKELETON, OrgBluezAdapter1SkeletonClass))
#define IS_ORG_BLUEZ_ADAPTER1_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_ORG_BLUEZ_ADAPTER1_SKELETON))
#define IS_ORG_BLUEZ_ADAPTER1_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_ORG_BLUEZ_ADAPTER1_SKELETON))

typedef struct _OrgBluezAdapter1Skeleton OrgBluezAdapter1Skeleton;
typedef struct _OrgBluezAdapter1SkeletonClass OrgBluezAdapter1SkeletonClass;
typedef struct _OrgBluezAdapter1SkeletonPrivate OrgBluezAdapter1SkeletonPrivate;

struct _OrgBluezAdapter1Skeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  OrgBluezAdapter1SkeletonPrivate *priv;
};

struct _OrgBluezAdapter1SkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType org_bluez_adapter1_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (OrgBluezAdapter1Skeleton, g_object_unref)
#endif

OrgBluezAdapter1 *org_bluez_adapter1_skeleton_new (void);


G_END_DECLS

#endif /* ___HOME_USER_BSP_ORANGEPI_BUILD_BUILDROOT_OPL2_IMAGE_OUTPUT_BUILD_GATTLIB_V0_3_RC1_DBUS_ORG_BLUEZ_ADAPTATER1_H__ */
