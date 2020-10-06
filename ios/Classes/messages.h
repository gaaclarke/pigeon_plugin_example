// Autogenerated from Pigeon (v0.1.9), do not edit directly.
// See also: https://pub.dev/packages/pigeon
#import <Foundation/Foundation.h>
@protocol FlutterBinaryMessenger;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

@class FLTVersion;

@interface FLTVersion : NSObject
@property(nonatomic, copy, nullable) NSString * string;
@end

@protocol FLTExampleApi
-(nullable FLTVersion *)getPlatformVersion:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void FLTExampleApiSetup(id<FlutterBinaryMessenger> binaryMessenger, id<FLTExampleApi> _Nullable api);

NS_ASSUME_NONNULL_END