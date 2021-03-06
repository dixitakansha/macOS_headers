//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDGesture-Protocol.h"

@class NSString, TSDRep;
@protocol TSDGestureDelegate, TSDGestureTarget;

@interface TSDBaseGesture : NSObject <TSDGesture>
{
    id mTarget;
    SEL mAction;
    struct CGPoint mUnscaledLocation;
    int mGestureState;
    id <TSDGestureDelegate> mGestureDelegate;
    id <TSDGestureTarget> mWeaklyCachedGestureTarget;
    NSString *mGestureKind;
    TSDRep *mTargetRep;
    BOOL mGestureShouldEnd;
    int mState;
}

@property(nonatomic) BOOL gestureShouldEnd; // @synthesize gestureShouldEnd=mGestureShouldEnd;
@property(retain, nonatomic) TSDRep *targetRep; // @synthesize targetRep=mTargetRep;
@property(retain, nonatomic) NSString *gestureKind; // @synthesize gestureKind=mGestureKind;
@property(nonatomic) int gestureState; // @synthesize gestureState=mState;
@property(nonatomic) __weak id <TSDGestureDelegate> gestureDelegate; // @synthesize gestureDelegate=mGestureDelegate;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isDone;
- (struct CGPoint)unscaledLocationForICC:(id)arg1;
- (void)reset;
- (void)gestureCancelledAtLocation:(struct CGPoint)arg1;
- (void)gestureRecognizedAtLocation:(struct CGPoint)arg1;
- (void)gestureEndedAtLocation:(struct CGPoint)arg1;
- (void)gestureMovedToLocation:(struct CGPoint)arg1;
- (void)gestureBeganAtLocation:(struct CGPoint)arg1;
- (id)cachedGestureTarget;
- (void)setCachedGestureTarget:(id)arg1;
- (id)init;
- (id)initWithGestureDispatcher:(id)arg1 gestureKind:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

