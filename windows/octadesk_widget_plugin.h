#ifndef FLUTTER_PLUGIN_OCTADESK_WIDGET_PLUGIN_H_
#define FLUTTER_PLUGIN_OCTADESK_WIDGET_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace octadesk_widget {

class OctadeskWidgetPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  OctadeskWidgetPlugin();

  virtual ~OctadeskWidgetPlugin();

  // Disallow copy and assign.
  OctadeskWidgetPlugin(const OctadeskWidgetPlugin&) = delete;
  OctadeskWidgetPlugin& operator=(const OctadeskWidgetPlugin&) = delete;

 private:
  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace octadesk_widget

#endif  // FLUTTER_PLUGIN_OCTADESK_WIDGET_PLUGIN_H_
