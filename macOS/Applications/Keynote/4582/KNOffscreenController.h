//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, KNAnimatedSlideView, KNPlaybackSession, KNShow, KNSlide, KNSlideNode;

@interface KNOffscreenController : NSObject
{
    KNShow *mShow;
    KNPlaybackSession *mSession;
    KNAnimatedSlideView *mAnimator;
    struct CGSize mOutputSize;
    unsigned long long mSlideIndex;
    BOOL mFirstEvent;
    BOOL mIsImageGenerationCancelled;
    CALayer *_baseLayer;
}

@property(readonly, nonatomic) CALayer *baseLayer; // @synthesize baseLayer=_baseLayer;
@property(readonly, nonatomic) KNAnimatedSlideView *animatedSlideView; // @synthesize animatedSlideView=mAnimator;
@property(readonly, nonatomic) KNSlideNode *currentSlideNode;
@property(readonly, nonatomic) KNSlide *currentSlide;
@property(readonly, nonatomic) long long playMode;
- (id)transitionRendererAtCurrentEvent;
@property(readonly, nonatomic) KNPlaybackSession *playbackSession;
@property(readonly, nonatomic) KNShow *show;
@property(readonly, nonatomic) unsigned long long slideCount;
@property(readonly, nonatomic) unsigned long long slideIndex;
@property(readonly, nonatomic) unsigned long long eventCount;
@property(readonly, nonatomic) unsigned long long eventIndex;
@property(readonly, nonatomic) struct CGSize outputSize;
- (void)cancelImageGeneration;
- (void)drawCurrentEventIntoContext:(struct CGContext *)arg1 intoRect:(struct CGRect)arg2 ignoreBuildVisibility:(BOOL)arg3;
- (void)generateImageOfCurrentEventWithCompletonHandler:(CDUnknownBlockType)arg1;
- (struct CGImage *)copyImageOfCurrentEventIgnoringBuildVisilibity:(BOOL)arg1;
- (BOOL)gotoLastSlide;
- (BOOL)gotoPreviousSlide;
- (BOOL)gotoFirstSlide;
- (BOOL)gotoSlideNode:(id)arg1 andEvent:(unsigned long long)arg2;
- (BOOL)gotoEventIndex:(unsigned long long)arg1;
- (BOOL)gotoNextEvent;
- (BOOL)gotoNextSlide;
- (void)p_setAnimator:(id)arg1;
- (id)initWithShow:(id)arg1 canvasDelegate:(id)arg2 outputSize:(struct CGSize)arg3;
- (id)initWithShow:(id)arg1 canvasDelegate:(id)arg2;
- (void)dealloc;

@end

