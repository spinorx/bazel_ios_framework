load("@build_bazel_rules_apple//apple:ios.bzl",
    "ios_application", "ios_framework", "ios_static_framework")

cc_library(
  name = "cc_lib",
  srcs = [
    "cc.cc",
  ],
  hdrs = [
    "cc.h",
  ],
)

objc_library(
  name = "objc_lib",
  srcs = [
    "objcpp.mm",
  ],
  hdrs = [
    "objcpp.h",
  ],
  deps = [
    ":cc_lib",
  ],
)

ios_static_framework(
  name = "ios_s_fx",
  bundle_id = "com.spinorX.ios_s_fx",
  minimum_os_version = "9.0",
  deps = [
    ":objc_lib",
  ],
)

ios_framework(
  name = "ios_fx",
  bundle_id = "com.spinorX.ios_fx",
  minimum_os_version = "9.0",
  families = [
    "iphone",
    "ipad",
  ],
  infoplists = [
    "Info-fx.plist",
  ],
  deps = [
    ":objc_lib",
  ],
)

ios_application(
  name = "ios_app",
  bundle_id = "com.spinorX.ios_app",
  minimum_os_version = "9.0",
  families = [
    "iphone",
    "ipad",
  ],
  infoplists = [
    "Info-app.plist",
  ],
  deps = [
    ":objc_lib",
  ],
)
