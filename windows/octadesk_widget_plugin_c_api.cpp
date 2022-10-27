#include "include/octadesk_widget/octadesk_widget_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "octadesk_widget_plugin.h"

void OctadeskWidgetPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  octadesk_widget::OctadeskWidgetPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
