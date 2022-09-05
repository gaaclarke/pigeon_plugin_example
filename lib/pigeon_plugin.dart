import 'dart:async';
import 'messages.dart';

class PigeonPlugin {
  static final ExampleApi _api = ExampleApi();
  static Future<String> get platformVersion async {
    Version version = await _api.getPlatformVersion();
    return version.string!;
  }
}
