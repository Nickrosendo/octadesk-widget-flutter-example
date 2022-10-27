import 'package:flutter/material.dart';
import 'package:webview_flutter/webview_flutter.dart';

class OctadeskWidget extends StatelessWidget {
  final String subdomain;
  const OctadeskWidget({required this.subdomain, super.key});

  @override
  Widget build(BuildContext context) {
    return WebView(
      javascriptMode: JavascriptMode.unrestricted,
      initialUrl:
          'https://cdn.octadesk.com/old-widget-static/index.html?subdomain=$subdomain&id=chat&showButton=true&openOnMessage=true&forceSelectFields=false&reopen=true&url=http://localhost:8080/',
    );
  }
}
