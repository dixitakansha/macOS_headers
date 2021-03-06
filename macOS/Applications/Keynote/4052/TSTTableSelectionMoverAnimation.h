//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTTableAnimationTask.h"

@class CALayer;

@interface TSTTableSelectionMoverAnimation : TSTTableAnimationTask
{
    CALayer *mTargetLayer;
    CALayer *mContentLayer;
    CALayer *mShadowLayer;
    CALayer *mScreenLayer;
    CALayer *mStartZone;
    BOOL mFinishCalled;
    int mAnimationPhase;
}

- (void)animationDidStopWorker:(id)arg1 finished:(BOOL)arg2;
- (void)finishAnimation:(id)arg1;
- (id)getLayer;
- (BOOL)hasLayer;
- (BOOL)animationsInProgress;
- (void)startAnimation;
- (void)teardown;
- (void)dealloc;
- (void)p_releaseAndClearLayers;
- (id)initWithDirector:(id)arg1 observer:(id)arg2 tableRep:(id)arg3 targetLayer:(id)arg4 contentLayer:(id)arg5 shadowLayer:(id)arg6 screenLayer:(id)arg7 startZone:(id)arg8;

@end

