//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol POPAnimatorDelegate;

@interface POPAnimator : NSObject
{
    struct __CVDisplayLink *_displayLink;
    struct dispatch_source_s *_displayTimer;
    BOOL _displayTimerRunning;
    int _enqueuedRender;
    list_20bec4f3 _list;
    struct __CFDictionary *_dict;
    NSMutableArray *_observers;
    list_20bec4f3 _pendingList;
    struct __CFRunLoopObserver *_pendingListObserver;
    double _slowMotionStartTime;
    double _slowMotionLastTime;
    double _slowMotionAccumulator;
    double _beginTime;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _lock;
    BOOL _disableDisplayLink;
    id <POPAnimatorDelegate> _delegate;
}

+ (void)setDisplayTimerFrequency:(unsigned long long)arg1;
+ (unsigned long long)displayTimerFrequency;
+ (void)setDisableBackgroundThread:(BOOL)arg1;
+ (BOOL)disableBackgroundThread;
+ (id)sharedAnimator;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(nonatomic) BOOL disableDisplayLink; // @synthesize disableDisplayLink=_disableDisplayLink;
@property(nonatomic) __weak id <POPAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)renderTime:(double)arg1;
- (void)render;
- (double)_currentRenderTime;
@property(readonly, nonatomic) double refreshPeriod;
- (id)animationForObject:(id)arg1 key:(id)arg2;
- (id)animationKeysForObject:(id)arg1;
- (void)removeAnimationForObject:(id)arg1 key:(id)arg2;
- (void)removeAnimationForObject:(id)arg1 key:(id)arg2 cleanupDict:(BOOL)arg3;
- (void)removeAllAnimationsForObject:(id)arg1;
- (void)addAnimation:(id)arg1 forObject:(id)arg2 key:(id)arg3;
- (id)observers;
- (void)_renderTime:(double)arg1 item:(shared_ptr_1553c9f8)arg2;
- (void)_renderTime:(double)arg1 items:(list_20bec4f3)arg2;
- (void)_scheduleProcessPendingList;
- (void)_clearPendingListObserver;
- (void)_processPendingList;
- (void)dealloc;
- (id)initWithDisplayID:(unsigned int)arg1;
- (id)init;

@end

