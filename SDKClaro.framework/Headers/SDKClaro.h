#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SDKCSingle, SDKCRequestMessage, SDKCObservable, SDKCKotlinThrowable, SDKCResponseMessage, SDKCOnErrorReturn, SDKCSubject, SDKCOperator, SDKCKotlinArray, SDKCKotlinException, SDKCKotlinRuntimeException, SDKCUndeliverableNotificationExceptionNotification, SDKCUndeliverableNotificationExceptionNotificationTerminated, SDKCAbstractObserver, SDKCSingleEmitter, SDKCColdEmitter, UIViewController, SDKCExecuteOperationInfo, SDKCInfoApplication, SDKCMicroFrontInfo, WKWebView, UIImage, UIButton, SDKCGKMABEConfigurationImpl, UIImageView, SDKCPaymentMAInfo, SDKCGKMAAMEDBHelper, SDKCActivityWrapper, SDKCWRDSOCRINEFunctionalityService, SDKCUserInfo, SDKCErrorModel, SDKCIneModel, CIRectangleFeature, CIFeature, SDKCKotlinCValue, SDKCKotlinTriple, CIImage, CIDetector, NSObject, NSCoder, SDKCKotlinAutofreeScope, SDKCKotlinCValuesRef, SDKCKotlinCValues, SDKCKotlinx_serialization_runtimeSerialKind, SDKCKotlinNothing, SDKCKotlinx_serialization_runtimeUpdateMode, SDKCSqldelight_runtimeTransacterTransaction, SDKCKotlinDeferScope, SDKCKotlinEnum, SDKCSqldelight_runtimeQuery, SDKCKotlinByteArray, SDKCKotlinByteIterator;

@protocol SDKCSubscribableService, SDKCSubscribable, SDKCEmitter, SDKCSource, SDKCObserver, SDKCDisposable, SDKCKotlinx_serialization_runtimeKSerializer, SDKCGKMABBViewFramePresenterInterface, SDKCGKMABBBaseViewFrameInterface, SDKCKotlinIterator, SDKCKotlinx_serialization_runtimeEncoder, SDKCKotlinx_serialization_runtimeSerialDescriptor, SDKCKotlinx_serialization_runtimeSerializationStrategy, SDKCKotlinx_serialization_runtimeDecoder, SDKCKotlinx_serialization_runtimeDeserializationStrategy, SDKCGKMABEExposedFunctionalities, SDKCGKMABEProfileInformation, SDKCGKMABEResources, SDKCGKMABETabBar, SDKCGKMABETopBar, SDKCGKMABEConfiguration, SDKCGKMAAMEDatabase, SDKCKotlinx_serialization_runtimeCompositeEncoder, SDKCKotlinx_serialization_runtimeSerialModule, SDKCKotlinAnnotation, SDKCKotlinx_serialization_runtimeCompositeDecoder, SDKCGKMAAMEApplicationQueries, SDKCGKMAAMERecordMAQueries, SDKCGKMAAMEStateQueries, SDKCSqldelight_runtimeTransacter, SDKCKotlinNativePlacement, SDKCKotlinx_serialization_runtimeSerialModuleCollector, SDKCKotlinKClass, SDKCKotlinComparable, SDKCKotlinKDeclarationContainer, SDKCKotlinKAnnotatedElement, SDKCKotlinKClassifier, SDKCSqldelight_runtimeSqlCursor, SDKCSqldelight_runtimeQueryListener, SDKCSqldelight_runtimeCloseable;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wnullability"

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface SDKCMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface SDKCMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface SDKCNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface SDKCByte : SDKCNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface SDKCUByte : SDKCNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface SDKCShort : SDKCNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface SDKCUShort : SDKCNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface SDKCInt : SDKCNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface SDKCUInt : SDKCNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface SDKCLong : SDKCNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface SDKCULong : SDKCNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface SDKCFloat : SDKCNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface SDKCDouble : SDKCNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface SDKCBoolean : SDKCNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("SubscribableService")))
@protocol SDKCSubscribableService
@required
- (BOOL)interceptTopic:(NSString *)topic priority:(int32_t)priority function:(SDKCSingle *(^)(SDKCRequestMessage *))function __attribute__((swift_name("intercept(topic:priority:function:)")));
- (SDKCSingle *)publishTopic:(NSString *)topic message:(SDKCRequestMessage *)message __attribute__((swift_name("publish(topic:message:)")));
- (SDKCObservable * _Nullable)publishAsyncTopic:(NSString *)topic message:(SDKCRequestMessage *)message __attribute__((swift_name("publishAsync(topic:message:)")));
- (SDKCSingle *)publishAsyncWithoutResponseTopic:(NSString *)topic message:(SDKCRequestMessage *)message __attribute__((swift_name("publishAsyncWithoutResponse(topic:message:)")));
- (SDKCSingle *)subscribeTopic:(NSString *)topic function:(SDKCSingle *(^)(SDKCRequestMessage *))function ex:(void (^ _Nullable)(SDKCKotlinThrowable *))ex __attribute__((swift_name("subscribe(topic:function:ex:)")));
- (SDKCSingle *)unsubscribeSubscriptionId:(NSString *)subscriptionId __attribute__((swift_name("unsubscribe(subscriptionId:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Bus")))
@interface SDKCBus : KotlinBase <SDKCSubscribableService>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bus __attribute__((swift_name("init()")));
- (BOOL)interceptTopic:(NSString *)topic priority:(int32_t)priority function:(SDKCSingle *(^)(SDKCRequestMessage *))function __attribute__((swift_name("intercept(topic:priority:function:)")));
- (SDKCSingle *)publishTopic:(NSString *)topic message:(SDKCRequestMessage *)message __attribute__((swift_name("publish(topic:message:)")));
- (SDKCObservable * _Nullable)publishAsyncTopic:(NSString *)topic message:(SDKCRequestMessage *)message __attribute__((swift_name("publishAsync(topic:message:)")));
- (SDKCSingle *)publishAsyncWithoutResponseTopic:(NSString *)topic message:(SDKCRequestMessage *)message __attribute__((swift_name("publishAsyncWithoutResponse(topic:message:)")));
- (SDKCSingle *)subscribeTopic:(NSString *)topic function:(SDKCSingle *(^)(SDKCRequestMessage *))function ex:(void (^ _Nullable)(SDKCKotlinThrowable *))ex __attribute__((swift_name("subscribe(topic:function:ex:)")));
- (SDKCSingle *)unsubscribeSubscriptionId:(NSString *)subscriptionId __attribute__((swift_name("unsubscribe(subscriptionId:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BusStory")))
@interface SDKCBusStory : KotlinBase <SDKCSubscribableService>
- (instancetype)initWithSubscribable:(id<SDKCSubscribable>)subscribable __attribute__((swift_name("init(subscribable:)"))) __attribute__((objc_designated_initializer));
- (BOOL)interceptTopic:(NSString *)topic priority:(int32_t)priority function:(SDKCSingle *(^)(SDKCRequestMessage *))function __attribute__((swift_name("intercept(topic:priority:function:)")));
- (SDKCSingle *)publishTopic:(NSString *)topic message:(SDKCRequestMessage *)message __attribute__((swift_name("publish(topic:message:)")));
- (SDKCObservable * _Nullable)publishAsyncTopic:(NSString *)topic message:(SDKCRequestMessage *)message __attribute__((swift_name("publishAsync(topic:message:)")));
- (SDKCSingle *)publishAsyncWithoutResponseTopic:(NSString *)topic message:(SDKCRequestMessage *)message __attribute__((swift_name("publishAsyncWithoutResponse(topic:message:)")));
- (SDKCSingle *)subscribeTopic:(NSString *)topic function:(SDKCSingle *(^)(SDKCRequestMessage *))function ex:(void (^ _Nullable)(SDKCKotlinThrowable *))ex __attribute__((swift_name("subscribe(topic:function:ex:)")));
- (SDKCSingle *)unsubscribeSubscriptionId:(NSString *)subscriptionId __attribute__((swift_name("unsubscribe(subscriptionId:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestMessage")))
@interface SDKCRequestMessage : KotlinBase
- (instancetype)initWithId:(NSString *)id headers:(NSString * _Nullable)headers parameters:(NSString * _Nullable)parameters __attribute__((swift_name("init(id:headers:parameters:)"))) __attribute__((objc_designated_initializer));
- (void)complete __attribute__((swift_name("complete()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SDKCRequestMessage *)doCopyId:(NSString *)id headers:(NSString * _Nullable)headers parameters:(NSString * _Nullable)parameters __attribute__((swift_name("doCopy(id:headers:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SDKCEmitter> emitter __attribute__((swift_name("emitter")));
@property (readonly) NSString * _Nullable headers __attribute__((swift_name("headers")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) SDKCObservable *observable __attribute__((swift_name("observable")));
@property (readonly) NSString * _Nullable parameters __attribute__((swift_name("parameters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResponseMessage")))
@interface SDKCResponseMessage : KotlinBase
- (instancetype)initWithId:(NSString * _Nullable)id result:(NSString * _Nullable)result error:(SDKCKotlinThrowable * _Nullable)error __attribute__((swift_name("init(id:result:error:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SDKCKotlinThrowable * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SDKCResponseMessage *)doCopyId:(NSString * _Nullable)id result:(NSString * _Nullable)result error:(SDKCKotlinThrowable * _Nullable)error __attribute__((swift_name("doCopy(id:result:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SDKCKotlinThrowable * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) BOOL isSuccess __attribute__((swift_name("isSuccess")));
@property (readonly) NSString * _Nullable result __attribute__((swift_name("result")));
@end;

__attribute__((swift_name("Subscribable")))
@protocol SDKCSubscribable
@required
- (BOOL)addTopicTopic:(NSString *)topic __attribute__((swift_name("addTopic(topic:)")));
- (BOOL)interceptTopic:(NSString *)topic priority:(int32_t)priority function:(SDKCSingle *(^)(SDKCRequestMessage *))function __attribute__((swift_name("intercept(topic:priority:function:)")));
- (BOOL)isSubscribedSubscriptionId:(NSString *)subscriptionId __attribute__((swift_name("isSubscribed(subscriptionId:)")));
- (SDKCSingle *)publishTopic:(NSString *)topic message:(SDKCRequestMessage *)message __attribute__((swift_name("publish(topic:message:)")));
- (SDKCObservable * _Nullable)publishAsyncTopic:(NSString *)topic message:(SDKCRequestMessage *)message __attribute__((swift_name("publishAsync(topic:message:)")));
- (BOOL)publishAsyncWithoutResponseTopic:(NSString *)topic message_:(SDKCRequestMessage *)message __attribute__((swift_name("publishAsyncWithoutResponse(topic:message_:)")));
- (SDKCSingle *)subscribeTopic:(NSString *)topic function:(SDKCSingle *(^)(SDKCRequestMessage *))function ex:(void (^ _Nullable)(SDKCKotlinThrowable *))ex __attribute__((swift_name("subscribe(topic:function:ex:)")));
- (BOOL)topicExistsTopic:(NSString *)topic __attribute__((swift_name("topicExists(topic:)")));
- (BOOL)unsubscribeSubscriptionId_:(NSString *)subscriptionId __attribute__((swift_name("unsubscribe(subscriptionId_:)")));
@end;

__attribute__((swift_name("Source")))
@protocol SDKCSource
@required
- (id<SDKCSource>)combineLatestOtherSource:(id<SDKCSource>)otherSource transform:(id _Nullable (^)(id _Nullable, id _Nullable))transform __attribute__((swift_name("combineLatest(otherSource:transform:)")));
- (id<SDKCSource>)doOnCompleteOnComplete:(void (^)(void))onComplete __attribute__((swift_name("doOnComplete(onComplete:)")));
- (id<SDKCSource>)doOnEachObserver:(id<SDKCObserver>)observer __attribute__((swift_name("doOnEach(observer:)")));
- (id<SDKCSource>)doOnErrorOnError:(void (^)(SDKCKotlinThrowable *))onError __attribute__((swift_name("doOnError(onError:)")));
- (id<SDKCSource>)doOnNextOnNext:(void (^)(id _Nullable))onNext __attribute__((swift_name("doOnNext(onNext:)")));
- (id<SDKCSource>)filterKeep:(SDKCBoolean *(^)(id _Nullable))keep __attribute__((swift_name("filter(keep:)")));
- (SDKCSingle *)first __attribute__((swift_name("first()")));
- (id<SDKCSource>)flatMapResolveAdditionalSource:(id<SDKCSource> (^)(id _Nullable))resolveAdditionalSource __attribute__((swift_name("flatMap(resolveAdditionalSource:)")));
- (id<SDKCSource>)mapTransform:(id _Nullable (^)(id _Nullable))transform __attribute__((swift_name("map(transform:)")));
- (SDKCOnErrorReturn *)onErrorReturnResolveNewSource:(id<SDKCSource> (^)(SDKCKotlinThrowable *))resolveNewSource __attribute__((swift_name("onErrorReturn(resolveNewSource:)")));
- (id<SDKCDisposable>)subscribeObserver:(id<SDKCObserver>)observer __attribute__((swift_name("subscribe(observer:)")));
- (id<SDKCSource>)switchMapResolveNewSource:(id<SDKCSource> (^)(id _Nullable))resolveNewSource __attribute__((swift_name("switchMap(resolveNewSource:)")));
- (SDKCSingle *)toSingle __attribute__((swift_name("toSingle()")));
@end;

__attribute__((swift_name("Observer")))
@protocol SDKCObserver
@required
- (void)onComplete __attribute__((swift_name("onComplete()")));
- (void)onErrorThrowable:(SDKCKotlinThrowable *)throwable __attribute__((swift_name("onError(throwable:)")));
- (void)onNextValue:(id _Nullable)value __attribute__((swift_name("onNext(value:)")));
@end;

__attribute__((swift_name("Subject")))
@interface SDKCSubject : KotlinBase <SDKCObserver, SDKCSource>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onComplete __attribute__((swift_name("onComplete()")));
- (void)onErrorThrowable:(SDKCKotlinThrowable *)throwable __attribute__((swift_name("onError(throwable:)")));
- (void)onNextValue:(id _Nullable)value __attribute__((swift_name("onNext(value:)")));
- (id<SDKCDisposable>)subscribeObserver:(id<SDKCObserver>)observer __attribute__((swift_name("subscribe(observer:)")));
- (id<SDKCDisposable>)subscribeToSource:(id<SDKCSource>)source __attribute__((swift_name("subscribeTo(source:)")));
@property (readonly) id<SDKCEmitter> emitter __attribute__((swift_name("emitter")));
@end;

__attribute__((swift_name("BehaviorRelay")))
@interface SDKCBehaviorRelay : SDKCSubject
- (instancetype)initWithSeed:(id _Nullable)seed __attribute__((swift_name("init(seed:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onComplete __attribute__((swift_name("onComplete()")));
- (void)onErrorThrowable:(SDKCKotlinThrowable *)throwable __attribute__((swift_name("onError(throwable:)")));
- (void)onNextValue:(id _Nullable)value __attribute__((swift_name("onNext(value:)")));
- (id<SDKCDisposable>)subscribeObserver:(id<SDKCObserver>)observer __attribute__((swift_name("subscribe(observer:)")));
@property (readonly) id<SDKCEmitter> emitter __attribute__((swift_name("emitter")));
@property id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("BehaviorSubject")))
@interface SDKCBehaviorSubject : SDKCSubject
- (instancetype)initWithSeed:(id _Nullable)seed __attribute__((swift_name("init(seed:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onNextValue:(id _Nullable)value __attribute__((swift_name("onNext(value:)")));
- (id<SDKCDisposable>)subscribeObserver:(id<SDKCObserver>)observer __attribute__((swift_name("subscribe(observer:)")));
@property (readonly) id<SDKCEmitter> emitter __attribute__((swift_name("emitter")));
@property id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("PublishSubject")))
@interface SDKCPublishSubject : SDKCSubject
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) id<SDKCEmitter> emitter __attribute__((swift_name("emitter")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CombineLatest")))
@interface SDKCCombineLatest : KotlinBase <SDKCSource>
- (instancetype)initWithSourceOne:(id<SDKCSource>)sourceOne sourceTwo:(id<SDKCSource>)sourceTwo transform:(id _Nullable (^)(id _Nullable, id _Nullable))transform __attribute__((swift_name("init(sourceOne:sourceTwo:transform:)"))) __attribute__((objc_designated_initializer));
- (id<SDKCDisposable>)subscribeObserver:(id<SDKCObserver>)observer __attribute__((swift_name("subscribe(observer:)")));
@property (readonly) id<SDKCEmitter> emitter __attribute__((swift_name("emitter")));
@end;

__attribute__((swift_name("Operator")))
@interface SDKCOperator : KotlinBase <SDKCSource, SDKCObserver>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onComplete __attribute__((swift_name("onComplete()")));
- (void)onErrorThrowable:(SDKCKotlinThrowable *)throwable __attribute__((swift_name("onError(throwable:)")));
- (void)onNextValue:(id _Nullable)value __attribute__((swift_name("onNext(value:)")));
@property (readonly) id<SDKCEmitter> emitter __attribute__((swift_name("emitter")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DoOnEach")))
@interface SDKCDoOnEach : SDKCOperator
- (instancetype)initWithUpstream:(id<SDKCSource>)upstream onEachObserver:(id<SDKCObserver>)onEachObserver __attribute__((swift_name("init(upstream:onEachObserver:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id<SDKCDisposable>)subscribeObserver:(id<SDKCObserver>)observer __attribute__((swift_name("subscribe(observer:)")));
@property (readonly) id<SDKCEmitter> emitter __attribute__((swift_name("emitter")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Filter")))
@interface SDKCFilter : SDKCOperator
- (instancetype)initWithUpstream:(id<SDKCSource>)upstream keep:(SDKCBoolean *(^)(id _Nullable))keep __attribute__((swift_name("init(upstream:keep:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id<SDKCDisposable>)subscribeObserver:(id<SDKCObserver>)observer __attribute__((swift_name("subscribe(observer:)")));
@property (readonly) id<SDKCEmitter> emitter __attribute__((swift_name("emitter")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlatMap")))
@interface SDKCFlatMap : SDKCOperator
- (instancetype)initWithUpstream:(id<SDKCSource>)upstream resolveAdditionalSource:(id<SDKCSource> (^)(id _Nullable))resolveAdditionalSource __attribute__((swift_name("init(upstream:resolveAdditionalSource:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onComplete __attribute__((swift_name("onComplete()")));
- (id<SDKCDisposable>)subscribeObserver:(id<SDKCObserver>)observer __attribute__((swift_name("subscribe(observer:)")));
@property (readonly) id<SDKCEmitter> emitter __attribute__((swift_name("emitter")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapOperator")))
@interface SDKCMapOperator : SDKCOperator
- (instancetype)initWithUpstream:(id<SDKCSource>)upstream transform:(id _Nullable (^)(id _Nullable))transform __attribute__((swift_name("init(upstream:transform:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id<SDKCDisposable>)subscribeObserver:(id<SDKCObserver>)observer __attribute__((swift_name("subscribe(observer:)")));
@property (readonly) id<SDKCEmitter> emitter __attribute__((swift_name("emitter")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnErrorReturn")))
@interface SDKCOnErrorReturn : SDKCOperator
- (instancetype)initWithUpstream:(id<SDKCSource>)upstream onErrorResolveNewSource:(id<SDKCSource> (^)(SDKCKotlinThrowable *))onErrorResolveNewSource __attribute__((swift_name("init(upstream:onErrorResolveNewSource:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id<SDKCDisposable>)subscribeObserver:(id<SDKCObserver>)observer __attribute__((swift_name("subscribe(observer:)")));
@property (readonly) id<SDKCEmitter> emitter __attribute__((swift_name("emitter")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SwitchMap")))
@interface SDKCSwitchMap : SDKCOperator
- (instancetype)initWithUpstream:(id<SDKCSource>)upstream resolveNewSource:(id<SDKCSource> (^)(id _Nullable))resolveNewSource __attribute__((swift_name("init(upstream:resolveNewSource:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onComplete __attribute__((swift_name("onComplete()")));
- (id<SDKCDisposable>)subscribeObserver:(id<SDKCObserver>)observer __attribute__((swift_name("subscribe(observer:)")));
@property (readonly) id<SDKCEmitter> emitter __attribute__((swift_name("emitter")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface SDKCKotlinThrowable : KotlinBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SDKCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SDKCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (SDKCKotlinArray *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SDKCKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("KotlinException")))
@interface SDKCKotlinException : SDKCKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SDKCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SDKCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface SDKCKotlinRuntimeException : SDKCKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SDKCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SDKCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UndeliverableEmissionException")))
@interface SDKCUndeliverableEmissionException : SDKCKotlinRuntimeException
- (instancetype)initWithUndeliverableEmission:(id _Nullable)undeliverableEmission __attribute__((swift_name("init(undeliverableEmission:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SDKCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(SDKCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) id _Nullable undeliverableEmission __attribute__((swift_name("undeliverableEmission")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UndeliverableNotificationException")))
@interface SDKCUndeliverableNotificationException : SDKCKotlinRuntimeException
- (instancetype)initWithNotification:(SDKCUndeliverableNotificationExceptionNotification *)notification __attribute__((swift_name("init(notification:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SDKCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(SDKCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) SDKCUndeliverableNotificationExceptionNotification *notification __attribute__((swift_name("notification")));
@end;

__attribute__((swift_name("UndeliverableNotificationException.Notification")))
@interface SDKCUndeliverableNotificationExceptionNotification : KotlinBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UndeliverableNotificationException.NotificationCompleted")))
@interface SDKCUndeliverableNotificationExceptionNotificationCompleted : SDKCUndeliverableNotificationExceptionNotification
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)completed __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UndeliverableNotificationException.NotificationTerminated")))
@interface SDKCUndeliverableNotificationExceptionNotificationTerminated : SDKCUndeliverableNotificationExceptionNotification
- (instancetype)initWithReason:(SDKCKotlinThrowable *)reason __attribute__((swift_name("init(reason:)"))) __attribute__((objc_designated_initializer));
- (SDKCKotlinThrowable *)component1 __attribute__((swift_name("component1()")));
- (SDKCUndeliverableNotificationExceptionNotificationTerminated *)doCopyReason:(SDKCKotlinThrowable *)reason __attribute__((swift_name("doCopy(reason:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SDKCKotlinThrowable *reason __attribute__((swift_name("reason")));
@end;

__attribute__((swift_name("AbstractObserver")))
@interface SDKCAbstractObserver : KotlinBase <SDKCObserver>
- (instancetype)initWithDoOnNext:(void (^)(id _Nullable))doOnNext doOnError:(void (^)(SDKCKotlinThrowable *))doOnError doOnComplete:(void (^)(void))doOnComplete __attribute__((swift_name("init(doOnNext:doOnError:doOnComplete:)"))) __attribute__((objc_designated_initializer));
- (void)onComplete __attribute__((swift_name("onComplete()")));
- (void)onErrorThrowable:(SDKCKotlinThrowable *)throwable __attribute__((swift_name("onError(throwable:)")));
- (void)onNextValue:(id _Nullable)value __attribute__((swift_name("onNext(value:)")));
@property (readonly) void (^doOnComplete)(void) __attribute__((swift_name("doOnComplete")));
@property (readonly) void (^doOnError)(SDKCKotlinThrowable *) __attribute__((swift_name("doOnError")));
@property (readonly) void (^doOnNext)(id _Nullable) __attribute__((swift_name("doOnNext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AllObserver")))
@interface SDKCAllObserver : SDKCAbstractObserver
- (instancetype)initWithOnNext:(void (^)(id _Nullable))onNext onError:(void (^)(SDKCKotlinThrowable *))onError onComplete:(void (^)(void))onComplete __attribute__((swift_name("init(onNext:onError:onComplete:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDoOnNext:(void (^)(id _Nullable))doOnNext doOnError:(void (^)(SDKCKotlinThrowable *))doOnError doOnComplete:(void (^)(void))doOnComplete __attribute__((swift_name("init(doOnNext:doOnError:doOnComplete:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompleteObserver")))
@interface SDKCCompleteObserver : SDKCAbstractObserver
- (instancetype)initWithOnComplete:(void (^)(void))onComplete __attribute__((swift_name("init(onComplete:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDoOnNext:(void (^)(id _Nullable))doOnNext doOnError:(void (^)(SDKCKotlinThrowable *))doOnError doOnComplete:(void (^)(void))doOnComplete __attribute__((swift_name("init(doOnNext:doOnError:doOnComplete:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NextCompleteObserver")))
@interface SDKCNextCompleteObserver : SDKCAbstractObserver
- (instancetype)initWithOnNext:(void (^)(id _Nullable))onNext onComplete:(void (^)(void))onComplete __attribute__((swift_name("init(onNext:onComplete:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDoOnNext:(void (^)(id _Nullable))doOnNext doOnError:(void (^)(SDKCKotlinThrowable *))doOnError doOnComplete:(void (^)(void))doOnComplete __attribute__((swift_name("init(doOnNext:doOnError:doOnComplete:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NextObserver")))
@interface SDKCNextObserver : SDKCAbstractObserver
- (instancetype)initWithOnNext:(void (^)(id _Nullable))onNext __attribute__((swift_name("init(onNext:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDoOnNext:(void (^)(id _Nullable))doOnNext doOnError:(void (^)(SDKCKotlinThrowable *))doOnError doOnComplete:(void (^)(void))doOnComplete __attribute__((swift_name("init(doOnNext:doOnError:doOnComplete:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NextTerminalObserver")))
@interface SDKCNextTerminalObserver : SDKCAbstractObserver
- (instancetype)initWithOnNext:(void (^)(id _Nullable))onNext onError:(void (^)(SDKCKotlinThrowable *))onError __attribute__((swift_name("init(onNext:onError:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDoOnNext:(void (^)(id _Nullable))doOnNext doOnError:(void (^)(SDKCKotlinThrowable *))doOnError doOnComplete:(void (^)(void))doOnComplete __attribute__((swift_name("init(doOnNext:doOnError:doOnComplete:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TerminalObserver")))
@interface SDKCTerminalObserver : SDKCAbstractObserver
- (instancetype)initWithOnError:(void (^)(SDKCKotlinThrowable *))onError __attribute__((swift_name("init(onError:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDoOnNext:(void (^)(id _Nullable))doOnNext doOnError:(void (^)(SDKCKotlinThrowable *))doOnError doOnComplete:(void (^)(void))doOnComplete __attribute__((swift_name("init(doOnNext:doOnError:doOnComplete:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("Observable")))
@interface SDKCObservable : KotlinBase <SDKCSource>
- (instancetype)initWithCreateWithEmitter:(id<SDKCDisposable> (^)(id<SDKCEmitter>))createWithEmitter __attribute__((swift_name("init(createWithEmitter:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithJust:(id _Nullable)just __attribute__((swift_name("init(just:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithError:(SDKCKotlinThrowable *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCompleteOnSubscribe:(BOOL)completeOnSubscribe __attribute__((swift_name("init(completeOnSubscribe:)"))) __attribute__((objc_designated_initializer));
- (id<SDKCDisposable>)subscribeObserver:(id<SDKCObserver>)observer __attribute__((swift_name("subscribe(observer:)")));
@property (readonly) id<SDKCEmitter> emitter __attribute__((swift_name("emitter")));
@end;

__attribute__((swift_name("Single")))
@interface SDKCSingle : KotlinBase <SDKCSource>
- (instancetype)initWithCreateWithEmitter:(id<SDKCDisposable> (^)(SDKCSingleEmitter *))createWithEmitter __attribute__((swift_name("init(createWithEmitter:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithJust:(id _Nullable)just __attribute__((swift_name("init(just:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithError:(SDKCKotlinThrowable *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<SDKCDisposable>)subscribeObserver:(id<SDKCObserver>)observer __attribute__((swift_name("subscribe(observer:)")));
@property (readonly) SDKCSingleEmitter *emitter __attribute__((swift_name("emitter")));
@end;

__attribute__((swift_name("Disposable")))
@protocol SDKCDisposable
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompositeDisposeBag")))
@interface SDKCCompositeDisposeBag : KotlinBase <SDKCDisposable>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addDisposable:(id<SDKCDisposable>)disposable __attribute__((swift_name("add(disposable:)")));
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Disposables")))
@interface SDKCDisposables : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)disposables __attribute__((swift_name("init()")));
- (id<SDKCDisposable>)createOnDispose:(void (^)(void))onDispose __attribute__((swift_name("create(onDispose:)")));
- (id<SDKCDisposable>)empty __attribute__((swift_name("empty()")));
@end;

__attribute__((swift_name("Emitter")))
@protocol SDKCEmitter
@required
- (void)addObserverObserver:(id<SDKCObserver>)observer __attribute__((swift_name("addObserver(observer:)")));
- (void)complete __attribute__((swift_name("complete()")));
- (void)nextValue:(id _Nullable)value __attribute__((swift_name("next(value:)")));
- (void)removeObserverObserver:(id<SDKCObserver>)observer __attribute__((swift_name("removeObserver(observer:)")));
- (void)terminateThrowable:(SDKCKotlinThrowable *)throwable __attribute__((swift_name("terminate(throwable:)")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) BOOL isDisposed __attribute__((swift_name("isDisposed")));
@property (readonly) BOOL isTerminated __attribute__((swift_name("isTerminated")));
@end;

__attribute__((swift_name("ColdEmitter")))
@interface SDKCColdEmitter : KotlinBase <SDKCEmitter>
- (instancetype)initWithDoOnDispose:(void (^)(void))doOnDispose __attribute__((swift_name("init(doOnDispose:)"))) __attribute__((objc_designated_initializer));
- (void)addObserverObserver:(id<SDKCObserver>)observer __attribute__((swift_name("addObserver(observer:)")));
- (void)complete __attribute__((swift_name("complete()")));
- (void)nextValue:(id _Nullable)value __attribute__((swift_name("next(value:)")));
- (void)removeObserverObserver:(id<SDKCObserver>)observer __attribute__((swift_name("removeObserver(observer:)")));
- (void)terminateThrowable:(SDKCKotlinThrowable *)throwable __attribute__((swift_name("terminate(throwable:)")));
@property (readonly) NSMutableArray<id<SDKCObserver>> *activeObservers __attribute__((swift_name("activeObservers")));
@property BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property BOOL isDisposed __attribute__((swift_name("isDisposed")));
@property BOOL isTerminated __attribute__((swift_name("isTerminated")));
@end;

__attribute__((swift_name("HotEmitter")))
@interface SDKCHotEmitter : KotlinBase <SDKCEmitter>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addObserverObserver:(id<SDKCObserver>)observer __attribute__((swift_name("addObserver(observer:)")));
- (void)complete __attribute__((swift_name("complete()")));
- (void)nextValue:(id _Nullable)value __attribute__((swift_name("next(value:)")));
- (void)removeObserverObserver:(id<SDKCObserver>)observer __attribute__((swift_name("removeObserver(observer:)")));
- (void)terminateThrowable:(SDKCKotlinThrowable *)throwable __attribute__((swift_name("terminate(throwable:)")));
@property (readonly) NSMutableArray<id<SDKCObserver>> *activeObservers __attribute__((swift_name("activeObservers")));
@property BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property BOOL isDisposed __attribute__((swift_name("isDisposed")));
@property BOOL isTerminated __attribute__((swift_name("isTerminated")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SingleEmitter")))
@interface SDKCSingleEmitter : SDKCColdEmitter
- (instancetype)initWithDoOnDispose:(void (^)(void))doOnDispose __attribute__((swift_name("init(doOnDispose:)"))) __attribute__((objc_designated_initializer));
- (void)complete __attribute__((swift_name("complete()"))) __attribute__((unavailable("Only intended for internal use.")));
- (void)nextValue:(id _Nullable)value __attribute__((swift_name("next(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActivityWrapper")))
@interface SDKCActivityWrapper : KotlinBase
- (instancetype)initWithViewController:(UIViewController *)viewController __attribute__((swift_name("init(viewController:)"))) __attribute__((objc_designated_initializer));
- (UIViewController *)getLoginViewPath:(NSString * _Nullable)path isBackDisabled:(BOOL)isBackDisabled disableTopBar:(BOOL)disableTopBar __attribute__((swift_name("getLoginView(path:isBackDisabled:disableTopBar:)")));
- (UIViewController *)getVFCConfiguration:(NSString *)configuration disableTopBar:(BOOL)disableTopBar __attribute__((swift_name("getVFC(configuration:disableTopBar:)")));
- (void)doInitViewConfiguration:(NSString *)configuration disableTopBar:(BOOL)disableTopBar __attribute__((swift_name("doInitView(configuration:disableTopBar:)")));
- (BOOL)showIdentifier:(NSString *)identifier __attribute__((swift_name("show(identifier:)")));
- (void)showLoginPath:(NSString * _Nullable)path isBackDisabled:(BOOL)isBackDisabled disableTopBar:(BOOL)disableTopBar __attribute__((swift_name("showLogin(path:isBackDisabled:disableTopBar:)")));
- (void)showMicroFrontServiceUrl:(NSString *)url data:(NSString *)data isBackDisabled:(BOOL)isBackDisabled disableTopBar:(BOOL)disableTopBar __attribute__((swift_name("showMicroFrontService(url:data:isBackDisabled:disableTopBar:)")));
- (void)showOCRClaroId:(NSString *)claroId __attribute__((swift_name("showOCR(claroId:)")));
- (void)showSiteUrl:(NSString *)url isBackDisabled:(BOOL)isBackDisabled disableTopBar:(BOOL)disableTopBar __attribute__((swift_name("showSite(url:isBackDisabled:disableTopBar:)")));
@property UIViewController *viewController __attribute__((swift_name("viewController")));
@end;

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("AlertViewController")))
@interface SDKCAlertViewController : NSObject
@end;

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("BlackTopbarClaro")))
@interface SDKCBlackTopbarClaro : NSObject
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExecuteOperationInfo")))
@interface SDKCExecuteOperationInfo : KotlinBase
- (instancetype)initWithTypeOperation:(NSString *)typeOperation parameters:(NSString *)parameters __attribute__((swift_name("init(typeOperation:parameters:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SDKCExecuteOperationInfo *)doCopyTypeOperation:(NSString *)typeOperation parameters:(NSString *)parameters __attribute__((swift_name("doCopy(typeOperation:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString *typeOperation __attribute__((swift_name("typeOperation")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExecuteOperationInfo.Companion")))
@interface SDKCExecuteOperationInfoCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SDKCKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("InePhotoAlertViewController")))
@interface SDKCInePhotoAlertViewController : NSObject
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfoApplication")))
@interface SDKCInfoApplication : KotlinBase
- (instancetype)initWithIdOpen:(NSString *)idOpen __attribute__((swift_name("init(idOpen:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SDKCInfoApplication *)doCopyIdOpen:(NSString *)idOpen __attribute__((swift_name("doCopy(idOpen:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *idOpen __attribute__((swift_name("idOpen")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfoApplication.Companion")))
@interface SDKCInfoApplicationCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SDKCKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MicroFrontInfo")))
@interface SDKCMicroFrontInfo : KotlinBase
- (instancetype)initWithStatus:(BOOL)status url:(NSString *)url data:(NSString *)data __attribute__((swift_name("init(status:url:data:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (SDKCMicroFrontInfo *)doCopyStatus:(BOOL)status url:(NSString *)url data:(NSString *)data __attribute__((swift_name("doCopy(status:url:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *data __attribute__((swift_name("data")));
@property (readonly) BOOL status __attribute__((swift_name("status")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MicroFrontInfo.Companion")))
@interface SDKCMicroFrontInfoCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SDKCKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("GKMABBBaseViewFrameInterface")))
@protocol SDKCGKMABBBaseViewFrameInterface
@required
- (void)hideSplashScreen __attribute__((swift_name("hideSplashScreen()")));
- (BOOL)mountComponents __attribute__((swift_name("mountComponents()")));
- (BOOL)setActivityConfigDataConfig:(id)dataConfig __attribute__((swift_name("setActivityConfig(dataConfig:)")));
- (BOOL)setViewFrameTopBar __attribute__((swift_name("setViewFrameTopBar()")));
- (void)showSplashScreen __attribute__((swift_name("showSplashScreen()")));
- (void)switchGoBackButtonButtonState:(BOOL)buttonState __attribute__((swift_name("switchGoBackButton(buttonState:)")));
@property NSString *bvTitle __attribute__((swift_name("bvTitle")));
@property NSString *bvUrl __attribute__((swift_name("bvUrl")));
@property id<SDKCGKMABBViewFramePresenterInterface> presenter __attribute__((swift_name("presenter")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MinimalViewFrame")))
@interface SDKCMinimalViewFrame : KotlinBase <SDKCGKMABBBaseViewFrameInterface>
- (instancetype)initWithUiViewController:(id)uiViewController webView:(WKWebView *)webView xonfigData:(NSString *)xonfigData disableTopBar:(BOOL)disableTopBar __attribute__((swift_name("init(uiViewController:webView:xonfigData:disableTopBar:)"))) __attribute__((objc_designated_initializer));
- (void)hideSplashScreen __attribute__((swift_name("hideSplashScreen()")));
- (BOOL)mountComponents __attribute__((swift_name("mountComponents()")));
- (BOOL)setActivityConfigDataConfig:(id)dataConfig __attribute__((swift_name("setActivityConfig(dataConfig:)")));
- (BOOL)setViewFrameTopBar __attribute__((swift_name("setViewFrameTopBar()")));
- (void)showSplashScreen __attribute__((swift_name("showSplashScreen()")));
- (void)switchGoBackButtonButtonState:(BOOL)buttonState __attribute__((swift_name("switchGoBackButton(buttonState:)")));
@property NSString *back64Image __attribute__((swift_name("back64Image")));
@property UIImage *back64ToImage __attribute__((swift_name("back64ToImage")));
@property NSString *bvTitle __attribute__((swift_name("bvTitle")));
@property NSString *bvUrl __attribute__((swift_name("bvUrl")));
@property NSString *close64Image __attribute__((swift_name("close64Image")));
@property UIImage *close64ToImage __attribute__((swift_name("close64ToImage")));
@property UIButton *closeButton __attribute__((swift_name("closeButton")));
@property SDKCGKMABEConfigurationImpl *dConfig __attribute__((swift_name("dConfig")));
@property BOOL disableTopBar __attribute__((swift_name("disableTopBar")));
@property UIButton *emptyButton __attribute__((swift_name("emptyButton")));
@property UIButton *goBackButton __attribute__((swift_name("goBackButton")));
@property id<SDKCGKMABBViewFramePresenterInterface> presenter __attribute__((swift_name("presenter")));
@property UIImageView *titleView __attribute__((swift_name("titleView")));
@property id uiViewController __attribute__((swift_name("uiViewController")));
@property WKWebView *webView __attribute__((swift_name("webView")));
@property NSString *xonfigData __attribute__((swift_name("xonfigData")));
@end;

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("MinimalViewFrameViewControllerLibrary")))
@interface SDKCMinimalViewFrameViewControllerLibrary : NSObject
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentMAInfo")))
@interface SDKCPaymentMAInfo : KotlinBase
- (instancetype)initWithAppId:(NSString *)appId cardNumber:(NSString *)cardNumber idCom:(NSString *)idCom idGrp:(NSString *)idGrp checkDigit:(int32_t)checkDigit amount:(float)amount transactionNumber:(int32_t)transactionNumber paymentMethod:(NSString *)paymentMethod __attribute__((swift_name("init(appId:cardNumber:idCom:idGrp:checkDigit:amount:transactionNumber:paymentMethod:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (float)component6 __attribute__((swift_name("component6()")));
- (int32_t)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (SDKCPaymentMAInfo *)doCopyAppId:(NSString *)appId cardNumber:(NSString *)cardNumber idCom:(NSString *)idCom idGrp:(NSString *)idGrp checkDigit:(int32_t)checkDigit amount:(float)amount transactionNumber:(int32_t)transactionNumber paymentMethod:(NSString *)paymentMethod __attribute__((swift_name("doCopy(appId:cardNumber:idCom:idGrp:checkDigit:amount:transactionNumber:paymentMethod:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float amount __attribute__((swift_name("amount")));
@property (readonly) NSString *appId __attribute__((swift_name("appId")));
@property (readonly) NSString *cardNumber __attribute__((swift_name("cardNumber")));
@property (readonly) int32_t checkDigit __attribute__((swift_name("checkDigit")));
@property (readonly) NSString *idCom __attribute__((swift_name("idCom")));
@property (readonly) NSString *idGrp __attribute__((swift_name("idGrp")));
@property NSString *paymentMethod __attribute__((swift_name("paymentMethod")));
@property int32_t transactionNumber __attribute__((swift_name("transactionNumber")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentMAInfo.Companion")))
@interface SDKCPaymentMAInfoCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SDKCKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKClaroApi")))
@interface SDKCSDKClaroApi : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDKClaroApi __attribute__((swift_name("init()")));
- (SDKCSingle *)addMetadataToProfileKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("addMetadataToProfile(key:value:)")));
- (SDKCSingle *)changePasswordPreviousPassword:(NSString *)previousPassword newPassword:(NSString *)newPassword __attribute__((swift_name("changePassword(previousPassword:newPassword:)")));
- (SDKCSingle *)confirmForgotPasswordUserName:(NSString *)userName confirmationCode:(NSString *)confirmationCode newPassword:(NSString *)newPassword __attribute__((swift_name("confirmForgotPassword(userName:confirmationCode:newPassword:)")));
- (SDKCSingle *)createNipValueNip:(NSString *)valueNip __attribute__((swift_name("createNip(valueNip:)")));
- (SDKCSingle *)createUserName:(NSString *)name phoneNumber:(NSString *)phoneNumber emailAddress:(NSString *)emailAddress __attribute__((swift_name("createUser(name:phoneNumber:emailAddress:)")));
- (SDKCSingle *)forgotPasswordUserName:(NSString *)userName __attribute__((swift_name("forgotPassword(userName:)")));
- (id<SDKCDisposable>)generateDisposable __attribute__((swift_name("generateDisposable()")));
- (SDKCSingle *)getAllApplicationsOrganizationID:(NSString *)organizationID __attribute__((swift_name("getAllApplications(organizationID:)")));
- (SDKCSingle *)getBasicConfigurationMAMicroAppId:(NSString *)microAppId __attribute__((swift_name("getBasicConfigurationMA(microAppId:)")));
- (SDKCSingle *)getMyApplicationsOrganizationID:(NSString *)organizationID __attribute__((swift_name("getMyApplications(organizationID:)")));
- (SDKCSingle *)getStateIdState:(NSString *)idState encrypt:(BOOL)encrypt __attribute__((swift_name("getState(idState:encrypt:)")));
- (SDKCSingle *)getToken __attribute__((swift_name("getToken()")));
- (SDKCSingle *)getUserInfo __attribute__((swift_name("getUserInfo()")));
- (SDKCSingle *)getUserInfoComplete __attribute__((swift_name("getUserInfoComplete()")));
- (void)doInitSDKDbHelper:(SDKCGKMAAMEDBHelper *)dbHelper __attribute__((swift_name("doInitSDK(dbHelper:)")));
- (SDKCSingle *)installApplicationMicroAppId:(NSString *)microAppId __attribute__((swift_name("installApplication(microAppId:)")));
- (SDKCSingle *)loginUserName:(NSString *)userName password:(NSString *)password __attribute__((swift_name("login(userName:password:)")));
- (SDKCSingle *)logout __attribute__((swift_name("logout()")));
- (SDKCSingle *)openMicroApplicationIdMA:(NSString *)idMA aw:(SDKCActivityWrapper *)aw disableTopBar:(BOOL)disableTopBar __attribute__((swift_name("openMicroApplication(idMA:aw:disableTopBar:)")));
- (SDKCSingle *)queryMetadataFromProfileKey:(NSString *)key __attribute__((swift_name("queryMetadataFromProfile(key:)")));
- (void)removeToken __attribute__((swift_name("removeToken()")));
- (void)requestPayment __attribute__((swift_name("requestPayment()")));
- (void)responsePaymentMessageId:(NSString *)messageId response:(NSString *)response __attribute__((swift_name("responsePayment(messageId:response:)")));
- (void)responsePaymentMAResponseCode:(NSString *)responseCode errorDescription:(NSString * _Nullable)errorDescription authorizationId:(NSString *)authorizationId originalTrxId:(NSString *)originalTrxId paymentMethod:(NSString *)paymentMethod __attribute__((swift_name("responsePaymentMA(responseCode:errorDescription:authorizationId:originalTrxId:paymentMethod:)")));
- (void)scanIFEOcr:(SDKCWRDSOCRINEFunctionalityService *)ocr __attribute__((swift_name("scanIFE(ocr:)")));
- (void)scanIFEIOSAw:(SDKCActivityWrapper *)aw __attribute__((swift_name("scanIFEIOS(aw:)")));
- (SDKCSingle *)setStateIdState:(NSString *)idState data:(NSString *)data encrypt:(BOOL)encrypt __attribute__((swift_name("setState(idState:data:encrypt:)")));
- (void)showCercaDeMiAw:(SDKCActivityWrapper *)aw isBackDisabled:(BOOL)isBackDisabled disableTopBar:(BOOL)disableTopBar url:(NSString *)url params:(NSString *)params __attribute__((swift_name("showCercaDeMi(aw:isBackDisabled:disableTopBar:url:params:)")));
- (void)showChangeEmailAw:(SDKCActivityWrapper *)aw isBackDisabled:(BOOL)isBackDisabled disableTopBar:(BOOL)disableTopBar __attribute__((swift_name("showChangeEmail(aw:isBackDisabled:disableTopBar:)")));
- (void)showChangePasswordAw:(SDKCActivityWrapper *)aw isBackDisabled:(BOOL)isBackDisabled disableTopBar:(BOOL)disableTopBar __attribute__((swift_name("showChangePassword(aw:isBackDisabled:disableTopBar:)")));
- (void)showLoginAw:(SDKCActivityWrapper *)aw isBackDisabled:(BOOL)isBackDisabled disableTopBar:(BOOL)disableTopBar __attribute__((swift_name("showLogin(aw:isBackDisabled:disableTopBar:)")));
- (SDKCSingle *)showMicroFrontAw:(SDKCActivityWrapper *)aw idMicroFront:(NSString *)idMicroFront isBackDisabled:(BOOL)isBackDisabled disableTopBar:(BOOL)disableTopBar __attribute__((swift_name("showMicroFront(aw:idMicroFront:isBackDisabled:disableTopBar:)")));
- (void)showProfileAw:(SDKCActivityWrapper *)aw isBackDisabled:(BOOL)isBackDisabled disableTopBar:(BOOL)disableTopBar __attribute__((swift_name("showProfile(aw:isBackDisabled:disableTopBar:)")));
- (void)showSiteAw:(SDKCActivityWrapper *)aw url:(NSString *)url isBackDisabled:(BOOL)isBackDisabled disableTopBar:(BOOL)disableTopBar __attribute__((swift_name("showSite(aw:url:isBackDisabled:disableTopBar:)")));
- (void)takePhoto __attribute__((swift_name("takePhoto()")));
- (SDKCSingle *)validateNipValueNip:(NSString *)valueNip __attribute__((swift_name("validateNip(valueNip:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserInfo")))
@interface SDKCUserInfo : KotlinBase
- (instancetype)initWithSub:(NSString *)sub phone_number:(NSString *)phone_number username:(NSString *)username __attribute__((swift_name("init(sub:phone_number:username:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (SDKCUserInfo *)doCopySub:(NSString *)sub phone_number:(NSString *)phone_number username:(NSString *)username __attribute__((swift_name("doCopy(sub:phone_number:username:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *phone_number __attribute__((swift_name("phone_number")));
@property (readonly) NSString *sub __attribute__((swift_name("sub")));
@property (readonly) NSString *username __attribute__((swift_name("username")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserInfo.Companion")))
@interface SDKCUserInfoCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SDKCKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValidateInitialized")))
@interface SDKCValidateInitialized : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)validateInitialized __attribute__((swift_name("init()")));
- (BOOL)initialized __attribute__((swift_name("initialized()")));
@end;

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("ViewFrameViewControllerLibrary")))
@interface SDKCViewFrameViewControllerLibrary : NSObject
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorModel")))
@interface SDKCErrorModel : KotlinBase
- (instancetype)initWithEstatus:(NSString *)estatus mensaje:(NSString *)mensaje codigoValidacion:(NSString *)codigoValidacion __attribute__((swift_name("init(estatus:mensaje:codigoValidacion:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (SDKCErrorModel *)doCopyEstatus:(NSString *)estatus mensaje:(NSString *)mensaje codigoValidacion:(NSString *)codigoValidacion __attribute__((swift_name("doCopy(estatus:mensaje:codigoValidacion:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *codigoValidacion __attribute__((swift_name("codigoValidacion")));
@property (readonly) NSString *estatus __attribute__((swift_name("estatus")));
@property (readonly) NSString *mensaje __attribute__((swift_name("mensaje")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorModel.Companion")))
@interface SDKCErrorModelCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SDKCKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("GalleryAndCameraController")))
@interface SDKCGalleryAndCameraController : NSObject
@end;

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("IFEScanController")))
@interface SDKCIFEScanController : NSObject
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IneModel")))
@interface SDKCIneModel : KotlinBase
- (instancetype)initWithClaveElector:(NSString *)claveElector registro:(NSString *)registro vigencia:(NSString *)vigencia tipo:(NSString *)tipo curp:(NSString *)curp colonia:(NSString *)colonia emision:(NSString *)emision subTipo:(NSString *)subTipo codigoValidacion:(NSString *)codigoValidacion segundoApellido:(NSString *)segundoApellido ciudad:(NSString *)ciudad seccion:(NSString *)seccion calle:(NSString *)calle nombres:(NSString *)nombres localidad:(NSString *)localidad estado:(NSString *)estado primerApellido:(NSString *)primerApellido municipio:(NSString *)municipio fechaNacimiento:(NSString *)fechaNacimiento sexo:(NSString *)sexo cic:(NSString *)cic __attribute__((swift_name("init(claveElector:registro:vigencia:tipo:curp:colonia:emision:subTipo:codigoValidacion:segundoApellido:ciudad:seccion:calle:nombres:localidad:estado:primerApellido:municipio:fechaNacimiento:sexo:cic:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString *)component11 __attribute__((swift_name("component11()")));
- (NSString *)component12 __attribute__((swift_name("component12()")));
- (NSString *)component13 __attribute__((swift_name("component13()")));
- (NSString *)component14 __attribute__((swift_name("component14()")));
- (NSString *)component15 __attribute__((swift_name("component15()")));
- (NSString *)component16 __attribute__((swift_name("component16()")));
- (NSString *)component17 __attribute__((swift_name("component17()")));
- (NSString *)component18 __attribute__((swift_name("component18()")));
- (NSString *)component19 __attribute__((swift_name("component19()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component20 __attribute__((swift_name("component20()")));
- (NSString *)component21 __attribute__((swift_name("component21()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (SDKCIneModel *)doCopyClaveElector:(NSString *)claveElector registro:(NSString *)registro vigencia:(NSString *)vigencia tipo:(NSString *)tipo curp:(NSString *)curp colonia:(NSString *)colonia emision:(NSString *)emision subTipo:(NSString *)subTipo codigoValidacion:(NSString *)codigoValidacion segundoApellido:(NSString *)segundoApellido ciudad:(NSString *)ciudad seccion:(NSString *)seccion calle:(NSString *)calle nombres:(NSString *)nombres localidad:(NSString *)localidad estado:(NSString *)estado primerApellido:(NSString *)primerApellido municipio:(NSString *)municipio fechaNacimiento:(NSString *)fechaNacimiento sexo:(NSString *)sexo cic:(NSString *)cic __attribute__((swift_name("doCopy(claveElector:registro:vigencia:tipo:curp:colonia:emision:subTipo:codigoValidacion:segundoApellido:ciudad:seccion:calle:nombres:localidad:estado:primerApellido:municipio:fechaNacimiento:sexo:cic:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *calle __attribute__((swift_name("calle")));
@property NSString *cic __attribute__((swift_name("cic")));
@property NSString *ciudad __attribute__((swift_name("ciudad")));
@property NSString *claveElector __attribute__((swift_name("claveElector")));
@property NSString *codigoValidacion __attribute__((swift_name("codigoValidacion")));
@property NSString *colonia __attribute__((swift_name("colonia")));
@property NSString *curp __attribute__((swift_name("curp")));
@property NSString *emision __attribute__((swift_name("emision")));
@property NSString *estado __attribute__((swift_name("estado")));
@property NSString *fechaNacimiento __attribute__((swift_name("fechaNacimiento")));
@property NSString *localidad __attribute__((swift_name("localidad")));
@property NSString *municipio __attribute__((swift_name("municipio")));
@property NSString *nombres __attribute__((swift_name("nombres")));
@property NSString *primerApellido __attribute__((swift_name("primerApellido")));
@property NSString *registro __attribute__((swift_name("registro")));
@property NSString *seccion __attribute__((swift_name("seccion")));
@property NSString *segundoApellido __attribute__((swift_name("segundoApellido")));
@property NSString *sexo __attribute__((swift_name("sexo")));
@property NSString *subTipo __attribute__((swift_name("subTipo")));
@property NSString *tipo __attribute__((swift_name("tipo")));
@property NSString *vigencia __attribute__((swift_name("vigencia")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IneModel.Companion")))
@interface SDKCIneModelCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SDKCKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProcessImage")))
@interface SDKCProcessImage : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CIRectangleFeature * _Nullable)_biggestRectangleRectangles:(NSArray<id> *)rectangles __attribute__((swift_name("_biggestRectangle(rectangles:)")));
- (CIFeature * _Nullable)biggestRectangleRectangles:(NSArray<id> *)rectangles __attribute__((swift_name("biggestRectangle(rectangles:)")));
- (SDKCKotlinCValue *)cGRectSmallestWithCGPointsPointsArray:(SDKCKotlinArray *)pointsArray numberOfPoints:(int32_t)numberOfPoints __attribute__((swift_name("cGRectSmallestWithCGPoints(pointsArray:numberOfPoints:)")));
- (SDKCKotlinTriple *)captureProcessCop:(void * _Nullable)cop boderDetect:(BOOL)boderDetect lastRectangle:(CIFeature * _Nullable)lastRectangle __attribute__((swift_name("captureProcess(cop:boderDetect:lastRectangle:)")));
- (CIImage *)drawHighlightOverlayRectangleFeature:(CIFeature *)rectangleFeature image:(CIImage *)image __attribute__((swift_name("drawHighlightOverlay(rectangleFeature:image:)")));
- (CIImage *)filteredImageUsingContrastFilterImage:(CIImage *)image __attribute__((swift_name("filteredImageUsingContrastFilter(image:)")));
- (CIImage *)filteredImageUsingEnhanceFilterImage:(CIImage *)image __attribute__((swift_name("filteredImageUsingEnhanceFilter(image:)")));
- (CIDetector * _Nullable)highAccuracyRectangleDetector __attribute__((swift_name("highAccuracyRectangleDetector()")));
@end;

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("QRScannerController")))
@interface SDKCQRScannerController : NSObject
@end;

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("ResourceImageController")))
@interface SDKCResourceImageController : NSObject
@end;

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("VNRectangleFeature")))
@interface SDKCVNRectangleFeature : NSObject
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperatorExtensionsKt")))
@interface SDKCOperatorExtensionsKt : KotlinBase
+ (id<SDKCSource>)combineLatest:(id<SDKCSource>)receiver sourceTwo:(id<SDKCSource>)sourceTwo __attribute__((swift_name("combineLatest(_:sourceTwo:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MinimalViewFrameViewControllerLibraryKt")))
@interface SDKCMinimalViewFrameViewControllerLibraryKt : KotlinBase
+ (NSString *)buildXonfigDataUrl:(NSString *)url data:(NSString *)data __attribute__((swift_name("buildXonfigData(url:data:)")));
+ (NSObject *)getMinimalViewFrameViewControllerLibraryUrl:(NSString *)url data:(NSString *)data uiVC:(UIViewController *)uiVC disableTopBar:(BOOL)disableTopBar path:(NSString * _Nullable)path __attribute__((swift_name("getMinimalViewFrameViewControllerLibrary(url:data:uiVC:disableTopBar:path:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewFrameViewControllerLibraryKt")))
@interface SDKCViewFrameViewControllerLibraryKt : KotlinBase
+ (NSCoder *)createEmptyNSEncoder __attribute__((swift_name("createEmptyNSEncoder()")));
+ (NSObject *)getViewFrameViewControllerLibraryData:(NSString *)data type:(NSString *)type uiVC:(UIViewController *)uiVC disableTopBar:(BOOL)disableTopBar __attribute__((swift_name("getViewFrameViewControllerLibrary(data:type:uiVC:disableTopBar:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SDKCKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(SDKCInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SDKCKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerializationStrategy")))
@protocol SDKCKotlinx_serialization_runtimeSerializationStrategy
@required
- (void)serializeEncoder:(id<SDKCKotlinx_serialization_runtimeEncoder>)encoder obj:(id _Nullable)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<SDKCKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeDeserializationStrategy")))
@protocol SDKCKotlinx_serialization_runtimeDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SDKCKotlinx_serialization_runtimeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<SDKCKotlinx_serialization_runtimeDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)")));
@property (readonly) id<SDKCKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeKSerializer")))
@protocol SDKCKotlinx_serialization_runtimeKSerializer <SDKCKotlinx_serialization_runtimeSerializationStrategy, SDKCKotlinx_serialization_runtimeDeserializationStrategy>
@required
@end;

__attribute__((swift_name("GKMABBViewFramePresenterInterface")))
@protocol SDKCGKMABBViewFramePresenterInterface
@required
- (BOOL)getParsedActivityConfig __attribute__((swift_name("getParsedActivityConfig()")));
- (BOOL)getViewFrameDataStr:(NSString *)str __attribute__((swift_name("getViewFrameData(str:)")));
@end;

__attribute__((swift_name("GKMABEConfiguration")))
@protocol SDKCGKMABEConfiguration
@required
@property NSArray<NSString *> *applicationRelated __attribute__((swift_name("applicationRelated")));
@property NSString *dataPayment __attribute__((swift_name("dataPayment")));
@property NSArray<id<SDKCGKMABEExposedFunctionalities>> *exposedFunctionalities __attribute__((swift_name("exposedFunctionalities")));
@property NSArray<NSString *> *functionalAccess __attribute__((swift_name("functionalAccess")));
@property NSString *icon __attribute__((swift_name("icon")));
@property NSString *iconMime __attribute__((swift_name("iconMime")));
@property NSString *idOpen __attribute__((swift_name("idOpen")));
@property NSString *message __attribute__((swift_name("message")));
@property id<SDKCGKMABEProfileInformation> profileInformation __attribute__((swift_name("profileInformation")));
@property NSArray<id<SDKCGKMABEResources>> *resourceAccess __attribute__((swift_name("resourceAccess")));
@property id<SDKCGKMABETabBar> tabBar __attribute__((swift_name("tabBar")));
@property NSString *tokenSession __attribute__((swift_name("tokenSession")));
@property id<SDKCGKMABETopBar> topBar __attribute__((swift_name("topBar")));
@property NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GKMABEConfigurationImpl")))
@interface SDKCGKMABEConfigurationImpl : KotlinBase <SDKCGKMABEConfiguration>
- (instancetype)initWithTokenSession:(NSString *)tokenSession idOpen:(NSString *)idOpen topBar:(id<SDKCGKMABETopBar>)topBar tabBar:(id<SDKCGKMABETabBar>)tabBar profileInformation:(id<SDKCGKMABEProfileInformation>)profileInformation resourceAccess:(NSArray<id<SDKCGKMABEResources>> *)resourceAccess functionalAccess:(NSArray<NSString *> *)functionalAccess exposedFunctionalities:(NSArray<id<SDKCGKMABEExposedFunctionalities>> *)exposedFunctionalities applicationRelated:(NSArray<NSString *> *)applicationRelated url:(NSString *)url icon:(NSString *)icon iconMime:(NSString *)iconMime message:(NSString *)message dataPayment:(NSString *)dataPayment __attribute__((swift_name("init(tokenSession:idOpen:topBar:tabBar:profileInformation:resourceAccess:functionalAccess:exposedFunctionalities:applicationRelated:url:icon:iconMime:message:dataPayment:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString *)component11 __attribute__((swift_name("component11()")));
- (NSString *)component12 __attribute__((swift_name("component12()")));
- (NSString *)component13 __attribute__((swift_name("component13()")));
- (NSString *)component14 __attribute__((swift_name("component14()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (id<SDKCGKMABETopBar>)component3 __attribute__((swift_name("component3()")));
- (id<SDKCGKMABETabBar>)component4 __attribute__((swift_name("component4()")));
- (id<SDKCGKMABEProfileInformation>)component5 __attribute__((swift_name("component5()")));
- (NSArray<id<SDKCGKMABEResources>> *)component6 __attribute__((swift_name("component6()")));
- (NSArray<NSString *> *)component7 __attribute__((swift_name("component7()")));
- (NSArray<id<SDKCGKMABEExposedFunctionalities>> *)component8 __attribute__((swift_name("component8()")));
- (NSArray<NSString *> *)component9 __attribute__((swift_name("component9()")));
- (SDKCGKMABEConfigurationImpl *)doCopyTokenSession:(NSString *)tokenSession idOpen:(NSString *)idOpen topBar:(id<SDKCGKMABETopBar>)topBar tabBar:(id<SDKCGKMABETabBar>)tabBar profileInformation:(id<SDKCGKMABEProfileInformation>)profileInformation resourceAccess:(NSArray<id<SDKCGKMABEResources>> *)resourceAccess functionalAccess:(NSArray<NSString *> *)functionalAccess exposedFunctionalities:(NSArray<id<SDKCGKMABEExposedFunctionalities>> *)exposedFunctionalities applicationRelated:(NSArray<NSString *> *)applicationRelated url:(NSString *)url icon:(NSString *)icon iconMime:(NSString *)iconMime message:(NSString *)message dataPayment:(NSString *)dataPayment __attribute__((swift_name("doCopy(tokenSession:idOpen:topBar:tabBar:profileInformation:resourceAccess:functionalAccess:exposedFunctionalities:applicationRelated:url:icon:iconMime:message:dataPayment:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<NSString *> *applicationRelated __attribute__((swift_name("applicationRelated")));
@property NSString *dataPayment __attribute__((swift_name("dataPayment")));
@property NSArray<id<SDKCGKMABEExposedFunctionalities>> *exposedFunctionalities __attribute__((swift_name("exposedFunctionalities")));
@property NSArray<NSString *> *functionalAccess __attribute__((swift_name("functionalAccess")));
@property NSString *icon __attribute__((swift_name("icon")));
@property NSString *iconMime __attribute__((swift_name("iconMime")));
@property NSString *idOpen __attribute__((swift_name("idOpen")));
@property NSString *message __attribute__((swift_name("message")));
@property id<SDKCGKMABEProfileInformation> profileInformation __attribute__((swift_name("profileInformation")));
@property NSArray<id<SDKCGKMABEResources>> *resourceAccess __attribute__((swift_name("resourceAccess")));
@property id<SDKCGKMABETabBar> tabBar __attribute__((swift_name("tabBar")));
@property NSString *tokenSession __attribute__((swift_name("tokenSession")));
@property id<SDKCGKMABETopBar> topBar __attribute__((swift_name("topBar")));
@property NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GKMAAMEDBHelper")))
@interface SDKCGKMAAMEDBHelper : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<SDKCGKMAAMEDatabase>)createDb __attribute__((swift_name("createDb()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WRDSOCRINEFunctionalityService")))
@interface SDKCWRDSOCRINEFunctionalityService : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)checkPermission __attribute__((swift_name("checkPermission()")));
- (int32_t)requestPermissionCode __attribute__((swift_name("requestPermissionCode()")));
- (void)requestPermissions __attribute__((swift_name("requestPermissions()")));
- (void)scanINEClaroId:(NSString *)claroId __attribute__((swift_name("scanINE(claroId:)")));
- (BOOL)turnCameraOn __attribute__((swift_name("turnCameraOn()")));
@end;

__attribute__((swift_name("KotlinCValuesRef")))
@interface SDKCKotlinCValuesRef : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void *)getPointerScope:(SDKCKotlinAutofreeScope *)scope __attribute__((swift_name("getPointer(scope:)")));
@end;

__attribute__((swift_name("KotlinCValues")))
@interface SDKCKotlinCValues : SDKCKotlinCValuesRef
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (void *)getPointerScope:(SDKCKotlinAutofreeScope *)scope __attribute__((swift_name("getPointer(scope:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void *)placePlacement:(void *)placement __attribute__((swift_name("place(placement:)")));
@property (readonly) int32_t align __attribute__((swift_name("align")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinCValue")))
@interface SDKCKotlinCValue : SDKCKotlinCValues
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinTriple")))
@interface SDKCKotlinTriple : KotlinBase
- (instancetype)initWithFirst:(id _Nullable)first second:(id _Nullable)second third:(id _Nullable)third __attribute__((swift_name("init(first:second:third:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (SDKCKotlinTriple *)doCopyFirst:(id _Nullable)first second:(id _Nullable)second third:(id _Nullable)third __attribute__((swift_name("doCopy(first:second:third:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) id _Nullable first __attribute__((swift_name("first")));
@property (readonly) id _Nullable second __attribute__((swift_name("second")));
@property (readonly) id _Nullable third __attribute__((swift_name("third")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol SDKCKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeEncoder")))
@protocol SDKCKotlinx_serialization_runtimeEncoder
@required
- (id<SDKCKotlinx_serialization_runtimeCompositeEncoder>)beginCollectionDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc collectionSize:(int32_t)collectionSize typeParams:(SDKCKotlinArray *)typeParams __attribute__((swift_name("beginCollection(desc:collectionSize:typeParams:)")));
- (id<SDKCKotlinx_serialization_runtimeCompositeEncoder>)beginStructureDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc typeParams:(SDKCKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescription:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)enumDescription ordinal:(int32_t)ordinal __attribute__((swift_name("encodeEnum(enumDescription:ordinal:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<SDKCKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SDKCKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeUnit __attribute__((swift_name("encodeUnit()")));
@property (readonly) id<SDKCKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialDescriptor")))
@protocol SDKCKotlinx_serialization_runtimeSerialDescriptor
@required
- (NSArray<id<SDKCKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<SDKCKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) SDKCKotlinx_serialization_runtimeSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeDecoder")))
@protocol SDKCKotlinx_serialization_runtimeDecoder
@required
- (id<SDKCKotlinx_serialization_runtimeCompositeDecoder>)beginStructureDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc typeParams:(SDKCKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescription:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)enumDescription __attribute__((swift_name("decodeEnum(enumDescription:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (SDKCKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SDKCKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SDKCKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (void)decodeUnit __attribute__((swift_name("decodeUnit()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<SDKCKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)")));
- (id _Nullable)updateSerializableValueDeserializer:(id<SDKCKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)")));
@property (readonly) id<SDKCKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) SDKCKotlinx_serialization_runtimeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((swift_name("GKMABEExposedFunctionalities")))
@protocol SDKCGKMABEExposedFunctionalities
@required
@property (getter=description_) NSString *description __attribute__((swift_name("description")));
@property NSString *id __attribute__((swift_name("id")));
@property NSDictionary<NSString *, NSString *> *parameters __attribute__((swift_name("parameters")));
@end;

__attribute__((swift_name("GKMABEProfileInformation")))
@protocol SDKCGKMABEProfileInformation
@required
@property NSArray<NSString *> *profileInformation __attribute__((swift_name("profileInformation")));
@property BOOL requiredApproval __attribute__((swift_name("requiredApproval")));
@end;

__attribute__((swift_name("GKMABEResources")))
@protocol SDKCGKMABEResources
@required
@property NSString *data __attribute__((swift_name("data")));
@property BOOL requiredLoad __attribute__((swift_name("requiredLoad")));
@property NSString *resource __attribute__((swift_name("resource")));
@end;

__attribute__((swift_name("GKMABETabBar")))
@protocol SDKCGKMABETabBar
@required
@property NSString *backgroundColor __attribute__((swift_name("backgroundColor")));
@property NSString *boderStyle __attribute__((swift_name("boderStyle")));
@property NSString *color __attribute__((swift_name("color")));
@property NSString *position __attribute__((swift_name("position")));
@property NSString *selectedColor __attribute__((swift_name("selectedColor")));
@property NSArray<NSDictionary<NSString *, NSString *> *> *tabs __attribute__((swift_name("tabs")));
@end;

__attribute__((swift_name("GKMABETopBar")))
@protocol SDKCGKMABETopBar
@required
@property NSString *backgroundColor __attribute__((swift_name("backgroundColor")));
@property NSString *textStyle __attribute__((swift_name("textStyle")));
@property NSString *titleText __attribute__((swift_name("titleText")));
@end;

__attribute__((swift_name("Sqldelight_runtimeTransacter")))
@protocol SDKCSqldelight_runtimeTransacter
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(SDKCSqldelight_runtimeTransacterTransaction *))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
@end;

__attribute__((swift_name("GKMAAMEDatabase")))
@protocol SDKCGKMAAMEDatabase <SDKCSqldelight_runtimeTransacter>
@required
@property (readonly) id<SDKCGKMAAMEApplicationQueries> applicationQueries __attribute__((swift_name("applicationQueries")));
@property (readonly) id<SDKCGKMAAMERecordMAQueries> recordMAQueries __attribute__((swift_name("recordMAQueries")));
@property (readonly) id<SDKCGKMAAMEStateQueries> stateQueries __attribute__((swift_name("stateQueries")));
@end;

__attribute__((swift_name("KotlinDeferScope")))
@interface SDKCKotlinDeferScope : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)deferBlock:(void (^)(void))block __attribute__((swift_name("defer(block:)")));
@end;

__attribute__((swift_name("KotlinNativePlacement")))
@protocol SDKCKotlinNativePlacement
@required
- (void *)doAllocSize:(int32_t)size align:(int32_t)align __attribute__((swift_name("doAlloc(size:align:)")));
- (void *)doAllocSize:(int64_t)size align_:(int32_t)align __attribute__((swift_name("doAlloc(size:align_:)")));
@end;

__attribute__((swift_name("KotlinAutofreeScope")))
@interface SDKCKotlinAutofreeScope : SDKCKotlinDeferScope <SDKCKotlinNativePlacement>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void *)doAllocSize:(int64_t)size align_:(int32_t)align __attribute__((swift_name("doAlloc(size:align_:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeCompositeEncoder")))
@protocol SDKCKotlinx_serialization_runtimeCompositeEncoder
@required
- (void)encodeBooleanElementDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(desc:index:value:)")));
- (void)encodeByteElementDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(desc:index:value:)")));
- (void)encodeCharElementDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(desc:index:value:)")));
- (void)encodeDoubleElementDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(desc:index:value:)")));
- (void)encodeFloatElementDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(desc:index:value:)")));
- (void)encodeIntElementDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(desc:index:value:)")));
- (void)encodeLongElementDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(desc:index:value:)")));
- (void)encodeNonSerializableElementDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(desc:index:value:)")));
- (void)encodeNullableSerializableElementDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index serializer:(id<SDKCKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(desc:index:serializer:value:)")));
- (void)encodeSerializableElementDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index serializer:(id<SDKCKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(desc:index:serializer:value:)")));
- (void)encodeShortElementDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(desc:index:value:)")));
- (void)encodeStringElementDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(desc:index:value:)")));
- (void)encodeUnitElementDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("encodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (BOOL)shouldEncodeElementDefaultDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(desc:index:)")));
@property (readonly) id<SDKCKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialModule")))
@protocol SDKCKotlinx_serialization_runtimeSerialModule
@required
- (void)dumpToCollector:(id<SDKCKotlinx_serialization_runtimeSerialModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<SDKCKotlinx_serialization_runtimeKSerializer> _Nullable)getContextualKclass:(id<SDKCKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<SDKCKotlinx_serialization_runtimeKSerializer> _Nullable)getPolymorphicBaseClass:(id<SDKCKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<SDKCKotlinx_serialization_runtimeKSerializer> _Nullable)getPolymorphicBaseClass:(id<SDKCKotlinKClass>)baseClass serializedClassName:(NSString *)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol SDKCKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialKind")))
@interface SDKCKotlinx_serialization_runtimeSerialKind : KotlinBase
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeCompositeDecoder")))
@protocol SDKCKotlinx_serialization_runtimeCompositeDecoder
@required
- (BOOL)decodeBooleanElementDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(desc:index:)")));
- (int8_t)decodeByteElementDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeByteElement(desc:index:)")));
- (unichar)decodeCharElementDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeCharElement(desc:index:)")));
- (int32_t)decodeCollectionSizeDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("decodeCollectionSize(desc:)")));
- (double)decodeDoubleElementDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(desc:index:)")));
- (int32_t)decodeElementIndexDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("decodeElementIndex(desc:)")));
- (float)decodeFloatElementDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeFloatElement(desc:index:)")));
- (int32_t)decodeIntElementDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeIntElement(desc:index:)")));
- (int64_t)decodeLongElementDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeLongElement(desc:index:)")));
- (id _Nullable)decodeNullableSerializableElementDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<SDKCKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(desc:index:deserializer:)")));
- (id _Nullable)decodeSerializableElementDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<SDKCKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(desc:index:deserializer:)")));
- (int16_t)decodeShortElementDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeShortElement(desc:index:)")));
- (NSString *)decodeStringElementDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeStringElement(desc:index:)")));
- (void)decodeUnitElementDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (id _Nullable)updateNullableSerializableElementDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<SDKCKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(desc:index:deserializer:old:)")));
- (id _Nullable)updateSerializableElementDesc:(id<SDKCKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<SDKCKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(desc:index:deserializer:old:)")));
@property (readonly) id<SDKCKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) SDKCKotlinx_serialization_runtimeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SDKCKotlinNothing : KotlinBase
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol SDKCKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface SDKCKotlinEnum : KotlinBase <SDKCKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(SDKCKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeUpdateMode")))
@interface SDKCKotlinx_serialization_runtimeUpdateMode : SDKCKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SDKCKotlinx_serialization_runtimeUpdateMode *banned __attribute__((swift_name("banned")));
@property (class, readonly) SDKCKotlinx_serialization_runtimeUpdateMode *overwrite __attribute__((swift_name("overwrite")));
@property (class, readonly) SDKCKotlinx_serialization_runtimeUpdateMode *update __attribute__((swift_name("update")));
- (int32_t)compareToOther:(SDKCKotlinx_serialization_runtimeUpdateMode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("GKMAAMEApplicationQueries")))
@protocol SDKCGKMAAMEApplicationQueries <SDKCSqldelight_runtimeTransacter>
@required
- (void)addIdOpenApplicationIdOpen:(NSString * _Nullable)idOpen status:(NSString * _Nullable)status id:(NSString *)id __attribute__((swift_name("addIdOpenApplication(idOpen:status:id:)")));
- (void)deleteApplicationByIdId:(NSString *)id __attribute__((swift_name("deleteApplicationById(id:)")));
- (void)emptyApplications __attribute__((swift_name("emptyApplications()")));
- (void)insertApplicationId:(NSString *)id physicalId:(NSString *)physicalId name:(NSString *)name embedded:(SDKCBoolean * _Nullable)embedded logo:(NSString * _Nullable)logo url:(NSString *)url status:(NSString * _Nullable)status icon:(NSString * _Nullable)icon iconMime:(NSString * _Nullable)iconMime category:(NSString * _Nullable)category hash:(NSString * _Nullable)hash data:(NSString * _Nullable)data __attribute__((swift_name("insertApplication(id:physicalId:name:embedded:logo:url:status:icon:iconMime:category:hash:data:)")));
- (SDKCSqldelight_runtimeQuery *)selectId:(NSString *)id __attribute__((swift_name("select(id:)")));
- (SDKCSqldelight_runtimeQuery *)selectId:(NSString *)id mapper:(id (^)(NSString *, NSString *, NSString *, NSString * _Nullable, NSString *, NSString * _Nullable, SDKCBoolean * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("select(id:mapper:)")));
- (SDKCSqldelight_runtimeQuery *)selectAll __attribute__((swift_name("selectAll()")));
- (SDKCSqldelight_runtimeQuery *)selectAllMapper:(id (^)(NSString *, NSString *, NSString *, NSString * _Nullable, NSString *, NSString * _Nullable, SDKCBoolean * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectAll(mapper:)")));
- (SDKCSqldelight_runtimeQuery *)selectByOrganizationPhysicalId:(NSString *)physicalId __attribute__((swift_name("selectByOrganization(physicalId:)")));
- (SDKCSqldelight_runtimeQuery *)selectByOrganizationPhysicalId:(NSString *)physicalId mapper:(id (^)(NSString *, NSString *, NSString *, NSString * _Nullable, NSString *, NSString * _Nullable, SDKCBoolean * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectByOrganization(physicalId:mapper:)")));
- (SDKCSqldelight_runtimeQuery *)selectByStatusStatus:(NSString * _Nullable)status __attribute__((swift_name("selectByStatus(status:)")));
- (SDKCSqldelight_runtimeQuery *)selectByStatusStatus:(NSString * _Nullable)status mapper:(id (^)(NSString *, NSString *, NSString *, NSString * _Nullable, NSString *, NSString * _Nullable, SDKCBoolean * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectByStatus(status:mapper:)")));
- (void)updateConfigurationApplicationTopBar:(NSString * _Nullable)topBar tabBar:(NSString * _Nullable)tabBar exposedFunctionalities:(NSString * _Nullable)exposedFunctionalities profileInformation:(NSString * _Nullable)profileInformation resourceAccess:(NSString * _Nullable)resourceAccess applicationRelated:(NSString * _Nullable)applicationRelated functionalAccess:(NSString * _Nullable)functionalAccess status:(NSString * _Nullable)status hash:(NSString * _Nullable)hash icon:(NSString * _Nullable)icon iconMime:(NSString * _Nullable)iconMime data:(NSString * _Nullable)data physicalId:(NSString *)physicalId logo:(NSString * _Nullable)logo name:(NSString *)name url:(NSString *)url category:(NSString * _Nullable)category hash_:(NSString * _Nullable)hash_ id:(NSString *)id __attribute__((swift_name("updateConfigurationApplication(topBar:tabBar:exposedFunctionalities:profileInformation:resourceAccess:applicationRelated:functionalAccess:status:hash:icon:iconMime:data:physicalId:logo:name:url:category:hash_:id:)")));
@end;

__attribute__((swift_name("GKMAAMERecordMAQueries")))
@protocol SDKCGKMAAMERecordMAQueries <SDKCSqldelight_runtimeTransacter>
@required
- (void)deleteRecordMAIdApp:(NSString *)idApp userId:(NSString *)userId id:(NSString *)id type:(NSString *)type __attribute__((swift_name("deleteRecordMA(idApp:userId:id:type:)")));
- (void)insertRecordMAIdApp:(NSString *)idApp userId:(NSString *)userId id:(NSString *)id data:(NSString *)data type:(NSString *)type date:(int64_t)date __attribute__((swift_name("insertRecordMA(idApp:userId:id:data:type:date:)")));
- (SDKCSqldelight_runtimeQuery *)selectRecordMAIdApp:(NSString *)idApp userId:(NSString *)userId type:(NSString *)type value:(int64_t)value __attribute__((swift_name("selectRecordMA(idApp:userId:type:value:)")));
- (SDKCSqldelight_runtimeQuery *)selectRecordMAIdApp:(NSString *)idApp userId:(NSString *)userId type:(NSString *)type value:(int64_t)value mapper:(id (^)(NSString *, NSString *, NSString *, NSString *, NSString *, SDKCLong *))mapper __attribute__((swift_name("selectRecordMA(idApp:userId:type:value:mapper:)")));
- (void)updateRecordMAId:(NSString *)id data:(NSString *)data date:(int64_t)date idApp:(NSString *)idApp userId:(NSString *)userId type:(NSString *)type __attribute__((swift_name("updateRecordMA(id:data:date:idApp:userId:type:)")));
@end;

__attribute__((swift_name("GKMAAMEStateQueries")))
@protocol SDKCGKMAAMEStateQueries <SDKCSqldelight_runtimeTransacter>
@required
- (void)deleteStateId:(NSString *)id __attribute__((swift_name("deleteState(id:)")));
- (void)insertStateId:(NSString *)id data:(NSString *)data __attribute__((swift_name("insertState(id:data:)")));
- (SDKCSqldelight_runtimeQuery *)selectId:(NSString *)id __attribute__((swift_name("select(id:)")));
- (SDKCSqldelight_runtimeQuery *)selectId:(NSString *)id mapper_:(id (^)(NSString *, NSString *))mapper __attribute__((swift_name("select(id:mapper_:)")));
- (void)updateStateData:(NSString *)data id:(NSString *)id __attribute__((swift_name("updateState(data:id:)")));
@end;

__attribute__((swift_name("Sqldelight_runtimeTransacterTransaction")))
@interface SDKCSqldelight_runtimeTransacterTransaction : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
- (void)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(SDKCSqldelight_runtimeTransacterTransaction *))body __attribute__((swift_name("transaction(body:)")));
@property (readonly) SDKCSqldelight_runtimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialModuleCollector")))
@protocol SDKCKotlinx_serialization_runtimeSerialModuleCollector
@required
- (void)contextualKClass:(id<SDKCKotlinKClass>)kClass serializer:(id<SDKCKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SDKCKotlinKClass>)baseClass actualClass:(id<SDKCKotlinKClass>)actualClass actualSerializer:(id<SDKCKotlinx_serialization_runtimeKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SDKCKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SDKCKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol SDKCKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol SDKCKotlinKClass <SDKCKotlinKDeclarationContainer, SDKCKotlinKAnnotatedElement, SDKCKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("Sqldelight_runtimeQuery")))
@interface SDKCSqldelight_runtimeQuery : KotlinBase
- (instancetype)initWithQueries:(NSMutableArray<SDKCSqldelight_runtimeQuery *> *)queries mapper:(id (^)(id<SDKCSqldelight_runtimeSqlCursor>))mapper __attribute__((swift_name("init(queries:mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<SDKCSqldelight_runtimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (id<SDKCSqldelight_runtimeSqlCursor>)execute __attribute__((swift_name("execute()")));
- (NSArray<id> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (id)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (id _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
- (void)notifyDataChanged __attribute__((swift_name("notifyDataChanged()")));
- (void)removeListenerListener:(id<SDKCSqldelight_runtimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) id (^mapper)(id<SDKCSqldelight_runtimeSqlCursor>) __attribute__((swift_name("mapper")));
@end;

__attribute__((swift_name("Sqldelight_runtimeCloseable")))
@protocol SDKCSqldelight_runtimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Sqldelight_runtimeSqlCursor")))
@protocol SDKCSqldelight_runtimeSqlCursor <SDKCSqldelight_runtimeCloseable>
@required
- (SDKCKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (SDKCDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (SDKCLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (BOOL)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((swift_name("Sqldelight_runtimeQueryListener")))
@protocol SDKCSqldelight_runtimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface SDKCKotlinByteArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SDKCByte *(^)(SDKCInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SDKCKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface SDKCKotlinByteIterator : KotlinBase <SDKCKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SDKCByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
