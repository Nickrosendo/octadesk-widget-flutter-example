//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <octadesk_widget/octadesk_widget_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) octadesk_widget_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "OctadeskWidgetPlugin");
  octadesk_widget_plugin_register_with_registrar(octadesk_widget_registrar);
}
