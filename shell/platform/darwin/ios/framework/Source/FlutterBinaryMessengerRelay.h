// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "flutter/shell/platform/darwin/common/framework/Headers/FlutterBinaryMessenger.h"

@interface FlutterBinaryMessengerRelay : NSObject <FlutterBinaryMessenger>
@property (nonatomic, assign) NSObject<FlutterBinaryMessenger>* parent;
- (instancetype)initWithParent:(NSObject<FlutterBinaryMessenger>*)parent;
@end
