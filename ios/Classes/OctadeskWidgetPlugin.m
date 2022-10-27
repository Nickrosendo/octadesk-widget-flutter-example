#import "OctadeskWidgetPlugin.h"
#if __has_include(<octadesk_widget/octadesk_widget-Swift.h>)
#import <octadesk_widget/octadesk_widget-Swift.h>
#else
// Support project import fallback if the generated compatibility header
// is not copied when this plugin is created as a library.
// https://forums.swift.org/t/swift-static-libraries-dont-copy-generated-objective-c-header/19816
#import "octadesk_widget-Swift.h"
#endif

@implementation OctadeskWidgetPlugin
+ (void)registerWithRegistrar:(NSObject<FlutterPluginRegistrar>*)registrar {
  [SwiftOctadeskWidgetPlugin registerWithRegistrar:registrar];
}
@end
