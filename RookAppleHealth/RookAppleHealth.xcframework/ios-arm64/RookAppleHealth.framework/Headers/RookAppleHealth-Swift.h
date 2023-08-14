#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7 (swiftlang-5.7.0.127.4 clang-1400.0.29.50)
#ifndef ROOKAPPLEHEALTH_SWIFT_H
#define ROOKAPPLEHEALTH_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="RookAppleHealth",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)


@class NSString;

SWIFT_CLASS("_TtC15RookAppleHealth19RookAuthAppleHealth")
@interface RookAuthAppleHealth : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) RookAuthAppleHealth * _Nonnull shared;)
+ (RookAuthAppleHealth * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// Sets your client uuid to configure the sdk
- (void)setClientUUIDWith:(NSString * _Nonnull)uuid;
/// Initializes the rook apple health sdk
/// first you have to set your client uuid
- (void)initRookAH SWIFT_METHOD_FAMILY(none);
- (void)setUserIdWith:(NSString * _Nullable)id;
- (BOOL)isAHAvailable SWIFT_WARN_UNUSED_RESULT;
@end

@class NSDate;
@class RookExtractionActivityLevelGranularObjc;

SWIFT_CLASS("_TtC15RookAppleHealth35RookExtractionActivityDataEventObjc")
@interface RookExtractionActivityDataEventObjc : NSObject
@property (nonatomic, readonly, copy) NSDate * _Nonnull activityStartTimeDateTime;
@property (nonatomic, readonly, copy) NSDate * _Nonnull activityEndTimeDateTime;
@property (nonatomic, readonly) NSInteger activityDurationSeconds;
@property (nonatomic, readonly, copy) NSString * _Nonnull activityTypeName;
@property (nonatomic, readonly) NSInteger activeSeconds;
@property (nonatomic, readonly) NSInteger restSeconds;
@property (nonatomic, readonly) NSInteger lowIntensitySeconds;
@property (nonatomic, readonly) NSInteger moderateIntensitySeconds;
@property (nonatomic, readonly) NSInteger vigorousIntensitySeconds;
@property (nonatomic, readonly) NSInteger inactivitySeconds;
@property (nonatomic, readonly, copy) NSArray<RookExtractionActivityLevelGranularObjc *> * _Nonnull activityLevelGranularDataNumber;
@property (nonatomic, readonly) NSInteger continuousInactivePeriodsNumber;
@property (nonatomic, readonly) NSInteger activityStrainLevelNumber;
@property (nonatomic, readonly) NSInteger activityWorkKilojoules;
@property (nonatomic, readonly) NSInteger activityEnergyKilojoules;
@property (nonatomic, readonly) NSInteger activityEnergyPlannedKilojoules;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class RookExtractionMetaDataEventObjc;
@class RookExtractionCaloriesDataEventObjc;
@class RookExtractionDistanceDataObjc;
@class RookExtractionHeartRateDataObjc;
@class RookExtractionMovementDataObjc;
@class RookExtractionPowerDataObjc;
@class RookExtractionPositionDataObjc;
@class RookExtractionOxygenationDataObjc;
@class RookExtractionStressDataObjc;

SWIFT_CLASS("_TtC15RookAppleHealth31RookExtractionActivityEventObjc")
@interface RookExtractionActivityEventObjc : NSObject
@property (nonatomic, readonly, strong) RookExtractionMetaDataEventObjc * _Nonnull metadata;
@property (nonatomic, readonly, strong) RookExtractionActivityDataEventObjc * _Nullable activityData;
@property (nonatomic, readonly, strong) RookExtractionCaloriesDataEventObjc * _Nullable caloriesData;
@property (nonatomic, readonly, strong) RookExtractionDistanceDataObjc * _Nullable distanceData;
@property (nonatomic, readonly, strong) RookExtractionHeartRateDataObjc * _Nullable heartRateData;
@property (nonatomic, readonly, strong) RookExtractionMovementDataObjc * _Nullable movementData;
@property (nonatomic, readonly, strong) RookExtractionPowerDataObjc * _Nullable powerData;
@property (nonatomic, readonly, strong) RookExtractionPositionDataObjc * _Nullable positionData;
@property (nonatomic, readonly, strong) RookExtractionOxygenationDataObjc * _Nullable oxygenationData;
@property (nonatomic, readonly, strong) RookExtractionStressDataObjc * _Nullable stressData;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_CLASS("_TtC15RookAppleHealth39RookExtractionActivityLevelGranularObjc")
@interface RookExtractionActivityLevelGranularObjc : NSObject
@property (nonatomic, readonly, copy) NSDate * _Nonnull dateTime;
@property (nonatomic, readonly) NSInteger activityLevel;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC15RookAppleHealth52RookExtractionBreathingGranularDataBreathsPerMinObjc")
@interface RookExtractionBreathingGranularDataBreathsPerMinObjc : NSObject
@property (nonatomic, readonly, copy) NSDate * _Nonnull datetime;
@property (nonatomic, readonly) NSInteger breathsPerMin;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC15RookAppleHealth37RookExtractionCadenceGranularItemObjc")
@interface RookExtractionCadenceGranularItemObjc : NSObject
@property (nonatomic, readonly, copy) NSDate * _Nonnull datetime;
@property (nonatomic, readonly) NSInteger intervalDurationSeconds;
@property (nonatomic, readonly) NSInteger cadenceRpm;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC15RookAppleHealth35RookExtractionCaloriesDataEventObjc")
@interface RookExtractionCaloriesDataEventObjc : NSObject
@property (nonatomic, readonly) NSInteger caloriesNetIntakeKilocalories;
@property (nonatomic, readonly) NSInteger caloriesExpenditureKilocalories;
@property (nonatomic, readonly) NSInteger caloriesNetActiveKilocalories;
@property (nonatomic, readonly) NSInteger caloriesBasalMetabolicRateKilocalories;
@property (nonatomic, readonly) NSInteger fatPercentageOfCaloriesPercentage;
@property (nonatomic, readonly) NSInteger carbohydratePercentageOfCaloriesPercentage;
@property (nonatomic, readonly) NSInteger proteinPercentageOfCaloriesPercentage;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class RookExtractionStepsGranularDataStepsPerHrObjc;
@class RookExtractionTraveledDistanceGranularDataMeterObjc;
@class RookExtractionFloorsClimbedGranularDataFloorObjc;
@class RookExtractionElevationGranularDataMeterObjc;
@class RookExtractionSwimmingDistanceGranularDataMeterObjc;

SWIFT_CLASS("_TtC15RookAppleHealth30RookExtractionDistanceDataObjc")
@interface RookExtractionDistanceDataObjc : NSObject
@property (nonatomic) NSInteger stepsNumber;
@property (nonatomic, copy) NSArray<RookExtractionStepsGranularDataStepsPerHrObjc *> * _Nullable stepsGranularDataStepsPerMin;
@property (nonatomic) NSInteger walkedDistanceMeters;
@property (nonatomic) NSInteger traveledDistanceMeters;
@property (nonatomic, copy) NSArray<RookExtractionTraveledDistanceGranularDataMeterObjc *> * _Nullable traveledDistanceGranularDataMeters;
@property (nonatomic) NSInteger floorsClimbedNumber;
@property (nonatomic, copy) NSArray<RookExtractionFloorsClimbedGranularDataFloorObjc *> * _Nullable floorsClimbedGranularDataFloors;
@property (nonatomic) NSInteger elevationAvgAltitudeMeters;
@property (nonatomic) NSInteger elevationMinimumAltitudeMeters;
@property (nonatomic) NSInteger elevationMaxAltitudeMeters;
@property (nonatomic) NSInteger elevationLossActualAltitudeMeters;
@property (nonatomic) NSInteger elevationGainActualAltitudeMeters;
@property (nonatomic) NSInteger elevationPlannedGainMeters;
@property (nonatomic, copy) NSArray<RookExtractionElevationGranularDataMeterObjc *> * _Nullable elevationGranularDataMeters;
@property (nonatomic) NSInteger swimmingStrokesNumber;
@property (nonatomic) NSInteger swimmingNumLapsNumber;
@property (nonatomic) NSInteger swimmingPoolLengthMeters;
@property (nonatomic) NSInteger swimmingTotalDistanceMeters;
@property (nonatomic, copy) NSArray<RookExtractionSwimmingDistanceGranularDataMeterObjc *> * _Nullable swimmingDistanceGranularDataMeters;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC15RookAppleHealth44RookExtractionElevationGranularDataMeterObjc")
@interface RookExtractionElevationGranularDataMeterObjc : NSObject
@property (nonatomic, readonly, copy) NSDate * _Nonnull datetime;
@property (nonatomic, readonly) NSInteger intervalDurationSeconds;
@property (nonatomic, readonly) NSInteger elevationChange;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class RookExtractionHeartRateEventObjc;
@class RookExtractionOxygenationEventObjc;

SWIFT_CLASS("_TtC15RookAppleHealth30RookExtractionEventManagerObjc")
@interface RookExtractionEventManagerObjc : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (void)getPhysicalHeartRateEventsWithDate:(NSDate * _Nonnull)date completion:(void (^ _Nonnull)(NSArray<RookExtractionHeartRateEventObjc *> * _Nullable, NSError * _Nullable))completion;
- (void)getBodyHeartRateEventsWithDate:(NSDate * _Nonnull)date completion:(void (^ _Nonnull)(NSArray<RookExtractionHeartRateEventObjc *> * _Nullable, NSError * _Nullable))completion;
- (void)getPhysicalOxygenationEventsWithDate:(NSDate * _Nonnull)date completion:(void (^ _Nonnull)(NSArray<RookExtractionOxygenationEventObjc *> * _Nullable, NSError * _Nullable))completion;
- (void)getBodyOxygenationEventsWithDate:(NSDate * _Nonnull)date completion:(void (^ _Nonnull)(NSArray<RookExtractionOxygenationEventObjc *> * _Nullable, NSError * _Nullable))completion;
- (void)getActivityEventsWithDate:(NSDate * _Nonnull)date completion:(void (^ _Nonnull)(NSArray<RookExtractionActivityEventObjc *> * _Nullable, NSError * _Nullable))completion;
- (NSDate * _Nullable)getLastExtractionDateOfActivityEvents SWIFT_WARN_UNUSED_RESULT;
- (NSDate * _Nullable)getLastExtractionDateOfBodyHeartRateEvents SWIFT_WARN_UNUSED_RESULT;
- (NSDate * _Nullable)getLastExtractionDateOfPhysicalHeartRateEvents SWIFT_WARN_UNUSED_RESULT;
- (NSDate * _Nullable)getLastExtractionDateOfBodyOxygenationEvents SWIFT_WARN_UNUSED_RESULT;
- (NSDate * _Nullable)getLastExtractionDateOfPhysicalOxygenationEvents SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC15RookAppleHealth48RookExtractionFloorsClimbedGranularDataFloorObjc")
@interface RookExtractionFloorsClimbedGranularDataFloorObjc : NSObject
@property (nonatomic, readonly, copy) NSDate * _Nonnull datetime;
@property (nonatomic, readonly) NSInteger intervalDurationSeconds;
@property (nonatomic, readonly) NSInteger floorsClimbed;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class RookExtractionHrGranularDataBPMObjc;
@class RookExtractionHrvSdnnGranularDatumObjc;
@class RookExtractionHrvRmssdGranularDatumObjc;

SWIFT_CLASS("_TtC15RookAppleHealth31RookExtractionHeartRateDataObjc")
@interface RookExtractionHeartRateDataObjc : NSObject
@property (nonatomic) NSInteger hrMaxBPM;
@property (nonatomic) NSInteger hrMinimumBPM;
@property (nonatomic) NSInteger hrAvgBPM;
@property (nonatomic) NSInteger hrRestingBPM;
@property (nonatomic, copy) NSArray<RookExtractionHrGranularDataBPMObjc *> * _Nullable hrGranularDataBPM;
@property (nonatomic) NSInteger hrvAvgRmssdNumber;
@property (nonatomic) NSInteger hrvAvgSdnnNumber;
@property (nonatomic, copy) NSArray<RookExtractionHrvSdnnGranularDatumObjc *> * _Nullable hrvSdnnGranularDataNumber;
@property (nonatomic, copy) NSArray<RookExtractionHrvRmssdGranularDatumObjc *> * _Nullable hrvRmssdGranularDataNumber;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class RookHeartRateDataEventExtractionObjc;
@class NSData;

SWIFT_CLASS("_TtC15RookAppleHealth32RookExtractionHeartRateEventObjc")
@interface RookExtractionHeartRateEventObjc : NSObject
@property (nonatomic, strong) RookExtractionMetaDataEventObjc * _Nonnull metadata;
@property (nonatomic, strong) RookHeartRateDataEventExtractionObjc * _Nonnull heartRateData;
@property (nonatomic, readonly, copy) NSData * _Nullable dataEvent;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_CLASS("_TtC15RookAppleHealth35RookExtractionHrGranularDataBPMObjc")
@interface RookExtractionHrGranularDataBPMObjc : NSObject
@property (nonatomic, readonly, copy) NSDate * _Nonnull datetime;
@property (nonatomic, readonly) NSInteger bpm;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC15RookAppleHealth39RookExtractionHrvRmssdGranularDatumObjc")
@interface RookExtractionHrvRmssdGranularDatumObjc : NSObject
@property (nonatomic, readonly, copy) NSDate * _Nonnull datetime;
@property (nonatomic, readonly) NSInteger hrvRmssd;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC15RookAppleHealth38RookExtractionHrvSdnnGranularDatumObjc")
@interface RookExtractionHrvSdnnGranularDatumObjc : NSObject
@property (nonatomic, readonly, copy) NSDate * _Nonnull datetime;
@property (nonatomic, readonly) NSInteger hrvSdnn;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC15RookAppleHealth33RookExtractionLapGranularItemObjc")
@interface RookExtractionLapGranularItemObjc : NSObject
@property (nonatomic, readonly, copy) NSDate * _Nonnull datetime;
@property (nonatomic, readonly) NSInteger intervalDurationSeconds;
@property (nonatomic, readonly) NSInteger laps;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC15RookAppleHealth21RookExtractionManager")
@interface RookExtractionManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface RookExtractionManager (SWIFT_EXTENSION(RookAppleHealth))
- (void)getSleepSummayObjcWithDate:(NSDate * _Nonnull)date completion:(void (^ _Nonnull)(NSDictionary<NSString *, id> * _Nullable, NSError * _Nullable))completion;
- (void)getPhysicalSummaryObjcWithDate:(NSDate * _Nonnull)date completion:(void (^ _Nonnull)(NSDictionary<NSString *, id> * _Nullable, NSError * _Nullable))completion;
- (void)getBodySummaryObjcWithDate:(NSDate * _Nonnull)date completion:(void (^ _Nonnull)(NSDictionary<NSString *, id> * _Nullable, NSError * _Nullable))completion;
- (NSDate * _Nullable)getLastExtractionDateOfSleep SWIFT_WARN_UNUSED_RESULT;
- (NSDate * _Nullable)getLastExtractionDateOfPhysical SWIFT_WARN_UNUSED_RESULT;
- (NSDate * _Nullable)getLastExtractionDateOfBody SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC15RookAppleHealth31RookExtractionMetaDataEventObjc")
@interface RookExtractionMetaDataEventObjc : NSObject
@property (nonatomic, copy) NSDate * _Nonnull datetime;
@property (nonatomic, copy) NSString * _Nullable userId;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull sourceOfData;
@property (nonatomic) BOOL wasTheUserUnderPhysicalActivity;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class RookExtractionSpeedGranularItemObjc;
@class RookExtractionVelocityVectorItemObjc;
@class RookExtractionTorqueGranularItemObjc;

SWIFT_CLASS("_TtC15RookAppleHealth30RookExtractionMovementDataObjc")
@interface RookExtractionMovementDataObjc : NSObject
@property (nonatomic, readonly) NSInteger speedNormalizedMetersPerSecond;
@property (nonatomic, readonly) NSInteger speedAvgMetersPerSecond;
@property (nonatomic, readonly) NSInteger speedMaxMetersPerSecond;
@property (nonatomic, readonly, copy) NSArray<RookExtractionSpeedGranularItemObjc *> * _Nullable speedGranularDataMetersPerSecond;
@property (nonatomic, readonly, copy) NSArray<RookExtractionVelocityVectorItemObjc *> * _Nullable velocityVectorAvgSpeedAndDirection;
@property (nonatomic, readonly, copy) NSArray<RookExtractionVelocityVectorItemObjc *> * _Nullable velocityVectorMaxSpeedAndDirection;
@property (nonatomic, readonly) NSInteger paceAvgMinutesPerKilometer;
@property (nonatomic, readonly) NSInteger paceMaxMinutesPerKilometer;
@property (nonatomic, readonly) NSInteger cadenceAvgRpm;
@property (nonatomic, readonly) NSInteger cadenceMaxRpm;
@property (nonatomic, readonly, copy) NSArray<RookExtractionCadenceGranularItemObjc *> * _Nullable cadenceGranularDataRpm;
@property (nonatomic, readonly) NSInteger torqueAvgNewtonMeters;
@property (nonatomic, readonly) NSInteger torqueMaxNewtonMeters;
@property (nonatomic, readonly, copy) NSArray<RookExtractionTorqueGranularItemObjc *> * _Nullable torqueGranularDataNewtonMeters;
@property (nonatomic, readonly, copy) NSArray<RookExtractionLapGranularItemObjc *> * _Nullable lapGranularDataLapsNumber;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class RookExtractionSaturationGranularDataPercentageObjc;
@class RookExtractionVo2GranularDataLiterPerMinObjc;

SWIFT_CLASS("_TtC15RookAppleHealth38RookExtractionOxigenationDataEventObjc")
@interface RookExtractionOxigenationDataEventObjc : NSObject
@property (nonatomic, readonly) NSInteger saturationAvgPercentage;
@property (nonatomic, readonly, copy) NSArray<RookExtractionSaturationGranularDataPercentageObjc *> * _Nullable saturationGranularDataPercentage;
@property (nonatomic, readonly) NSInteger vo2MaxMlPerMinPerKg;
@property (nonatomic, readonly, copy) NSArray<RookExtractionVo2GranularDataLiterPerMinObjc *> * _Nullable vo2GranularDataLiterPerMin;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC15RookAppleHealth33RookExtractionOxygenationDataObjc")
@interface RookExtractionOxygenationDataObjc : NSObject
@property (nonatomic, readonly) NSInteger saturationAvgPercentage;
@property (nonatomic, readonly, copy) NSArray<RookExtractionSaturationGranularDataPercentageObjc *> * _Nullable saturationGranularDataPercentage;
@property (nonatomic, readonly) NSInteger vo2MaxMlPerMinPerKg;
@property (nonatomic, readonly, copy) NSArray<RookExtractionVo2GranularDataLiterPerMinObjc *> * _Nullable vo2GranularDataLiterPerMin;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC15RookAppleHealth34RookExtractionOxygenationEventObjc")
@interface RookExtractionOxygenationEventObjc : NSObject
@property (nonatomic, strong) RookExtractionMetaDataEventObjc * _Nonnull metadata;
@property (nonatomic, strong) RookExtractionOxigenationDataEventObjc * _Nonnull oxygenationData;
@property (nonatomic, readonly, copy) NSData * _Nullable dataEvent;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@class RookExtractionPositionItemObjc;
@class RookExtractionPositionGranularItemObjc;

SWIFT_CLASS("_TtC15RookAppleHealth30RookExtractionPositionDataObjc")
@interface RookExtractionPositionDataObjc : NSObject
@property (nonatomic, readonly, strong) RookExtractionPositionItemObjc * _Nullable positionStartLatLngDeg;
@property (nonatomic, readonly, strong) RookExtractionPositionItemObjc * _Nullable positionCentroidLatLngDeg;
@property (nonatomic, readonly, strong) RookExtractionPositionItemObjc * _Nullable positionEndLatLngDeg;
@property (nonatomic, readonly, copy) NSArray<RookExtractionPositionGranularItemObjc *> * _Nullable positionGranularDataLatLngDeg;
@property (nonatomic, readonly, copy) NSString * _Nullable positionPolylineMapDataSummaryString;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC15RookAppleHealth38RookExtractionPositionGranularItemObjc")
@interface RookExtractionPositionGranularItemObjc : NSObject
@property (nonatomic, readonly, copy) NSDate * _Nonnull datetime;
@property (nonatomic, readonly) NSInteger intervalDurationSeconds;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC15RookAppleHealth30RookExtractionPositionItemObjc")
@interface RookExtractionPositionItemObjc : NSObject
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class RookExtractionPowerGranularItemObjc;

SWIFT_CLASS("_TtC15RookAppleHealth27RookExtractionPowerDataObjc")
@interface RookExtractionPowerDataObjc : NSObject
@property (nonatomic, readonly) NSInteger powerAvgWattsNumber;
@property (nonatomic, readonly) NSInteger powerMaxWattsNumber;
@property (nonatomic, readonly, copy) NSArray<RookExtractionPowerGranularItemObjc *> * _Nonnull powerGranularDataWattsNumber;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC15RookAppleHealth35RookExtractionPowerGranularItemObjc")
@interface RookExtractionPowerGranularItemObjc : NSObject
@property (nonatomic, readonly, copy) NSDate * _Nonnull datetime;
@property (nonatomic, readonly) NSInteger intervalDurationSeconds;
@property (nonatomic, readonly) NSInteger powerWatts;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC15RookAppleHealth50RookExtractionSaturationGranularDataPercentageObjc")
@interface RookExtractionSaturationGranularDataPercentageObjc : NSObject
@property (nonatomic, readonly, copy) NSDate * _Nonnull datetime;
@property (nonatomic, readonly) NSInteger saturationPercentage;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC15RookAppleHealth35RookExtractionSpeedGranularItemObjc")
@interface RookExtractionSpeedGranularItemObjc : NSObject
@property (nonatomic, readonly, copy) NSDate * _Nonnull datetime;
@property (nonatomic, readonly) NSInteger intervalDurationSeconds;
@property (nonatomic, readonly) NSInteger speedMetersPerSecond;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC15RookAppleHealth45RookExtractionStepsGranularDataStepsPerHrObjc")
@interface RookExtractionStepsGranularDataStepsPerHrObjc : NSObject
@property (nonatomic, readonly, copy) NSDate * _Nonnull datetime;
@property (nonatomic, readonly) NSInteger intervalDurationSeconds;
@property (nonatomic, readonly) NSInteger steps;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class RookExtractionTssGranularDataFrom1To500ScoreNumberObjc;

SWIFT_CLASS("_TtC15RookAppleHealth28RookExtractionStressDataObjc")
@interface RookExtractionStressDataObjc : NSObject
@property (nonatomic, readonly) NSInteger stressAtRESTDurationSeconds;
@property (nonatomic, readonly) NSInteger stressDurationSeconds;
@property (nonatomic, readonly) NSInteger lowStressDurationSeconds;
@property (nonatomic, readonly) NSInteger mediumStressDurationSeconds;
@property (nonatomic, readonly) NSInteger highStressDurationSeconds;
@property (nonatomic, readonly, copy) NSArray<RookExtractionTssGranularDataFrom1To500ScoreNumberObjc *> * _Nullable tssGranularDataFrom1To500ScoreNumber;
@property (nonatomic, readonly) NSInteger stressAvgLevelNumber;
@property (nonatomic, readonly) NSInteger stressMaxLevelNumber;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC15RookAppleHealth51RookExtractionSwimmingDistanceGranularDataMeterObjc")
@interface RookExtractionSwimmingDistanceGranularDataMeterObjc : NSObject
@property (nonatomic, readonly, copy) NSDate * _Nonnull datetime;
@property (nonatomic, readonly) NSInteger intervalDurationSeconds;
@property (nonatomic, readonly) NSInteger swimmingDistanceMeters;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC15RookAppleHealth36RookExtractionTorqueGranularItemObjc")
@interface RookExtractionTorqueGranularItemObjc : NSObject
@property (nonatomic, readonly, copy) NSDate * _Nonnull datetime;
@property (nonatomic, readonly) NSInteger intervalDurationSeconds;
@property (nonatomic, readonly) NSInteger torqueNewtonMeters;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC15RookAppleHealth51RookExtractionTraveledDistanceGranularDataMeterObjc")
@interface RookExtractionTraveledDistanceGranularDataMeterObjc : NSObject
@property (nonatomic, readonly, copy) NSDate * _Nonnull datetime;
@property (nonatomic, readonly) NSInteger intervalDurationSeconds;
@property (nonatomic, readonly) NSInteger traveledDistanceMeters;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC15RookAppleHealth54RookExtractionTssGranularDataFrom1To500ScoreNumberObjc")
@interface RookExtractionTssGranularDataFrom1To500ScoreNumberObjc : NSObject
@property (nonatomic, readonly, copy) NSDate * _Nonnull datetime;
@property (nonatomic, readonly) NSInteger intervalDurationSeconds;
@property (nonatomic, readonly) NSInteger tss1To500Score;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC15RookAppleHealth36RookExtractionVelocityVectorItemObjc")
@interface RookExtractionVelocityVectorItemObjc : NSObject
@property (nonatomic, readonly) NSInteger speedMetersPerSecond;
@property (nonatomic, readonly, copy) NSString * _Nonnull direction;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC15RookAppleHealth44RookExtractionVo2GranularDataLiterPerMinObjc")
@interface RookExtractionVo2GranularDataLiterPerMinObjc : NSObject
@property (nonatomic, readonly, copy) NSDate * _Nonnull datetime;
@property (nonatomic, readonly) NSInteger vo2MlPerMinPerKg;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC15RookAppleHealth36RookHeartRateDataEventExtractionObjc")
@interface RookHeartRateDataEventExtractionObjc : NSObject
@property (nonatomic, readonly) NSInteger hrMaxBPM;
@property (nonatomic, readonly) NSInteger hrMinimumBPM;
@property (nonatomic, readonly) NSInteger hrAvgBPM;
@property (nonatomic, readonly) NSInteger hrRestingBPM;
@property (nonatomic, readonly, copy) NSArray<RookExtractionHrGranularDataBPMObjc *> * _Nullable hrGranularDataBPM;
@property (nonatomic, readonly) NSInteger hrvAvgRmssdNumber;
@property (nonatomic, readonly) NSInteger hrvAvgSdnnNumber;
@property (nonatomic, readonly, copy) NSArray<RookExtractionHrvSdnnGranularDatumObjc *> * _Nullable hrvSdnnGranularData;
@property (nonatomic, readonly, copy) NSArray<RookExtractionHrvRmssdGranularDatumObjc *> * _Nullable hrvRmssdGranularData;
- (nonnull instancetype)initWithHrMaxBPM:(NSInteger)hrMaxBPM hrMinimumBPM:(NSInteger)hrMinimumBPM hrAvgBPM:(NSInteger)hrAvgBPM hrRestingBPM:(NSInteger)hrRestingBPM hrGranularDataBPM:(NSArray<RookExtractionHrGranularDataBPMObjc *> * _Nonnull)hrGranularDataBPM hrvAvgRmssdNumber:(NSInteger)hrvAvgRmssdNumber hrvAvgSdnnNumber:(NSInteger)hrvAvgSdnnNumber hrvSdnnGranularData:(NSArray<RookExtractionHrvSdnnGranularDatumObjc *> * _Nonnull)hrvSdnnGranularData hrvRmssdGranularData:(NSArray<RookExtractionHrvRmssdGranularDatumObjc *> * _Nonnull)hrvRmssdGranularData OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC15RookAppleHealth24RookPermissionExtraction")
@interface RookPermissionExtraction : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (void)requestAllPermissionsObjcWithCompletion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
- (void)requestSleepPermissionsObjcWithCompletion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
- (void)requestPhysicalPermissionsObjcWithCompletion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
- (void)requesBodyPermissionsObjcWithCompletion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
