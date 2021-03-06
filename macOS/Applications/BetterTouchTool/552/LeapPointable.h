//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LeapFrame, LeapHand, LeapVector;

__attribute__((visibility("hidden")))
@interface LeapPointable : NSObject
{
    struct Pointable *_interfacePointable;
    LeapFrame *_frame;
    LeapHand *_hand;
}

+ (id)invalid;
+ (id)typedPointableAlloc:(void *)arg1;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic, getter=hand) __weak LeapHand *hand; // @synthesize hand=_hand;
@property(readonly, nonatomic, getter=frame) __weak LeapFrame *frame; // @synthesize frame=_frame;
@property(readonly, nonatomic, getter=timeVisible) float timeVisible;
@property(readonly, nonatomic, getter=stabilizedTipPosition) LeapVector *stabilizedTipPosition;
@property(readonly, nonatomic, getter=touchDistance) float touchDistance;
@property(readonly, nonatomic, getter=touchZone) int touchZone;
@property(readonly, nonatomic, getter=isValid) BOOL isValid;
@property(readonly, nonatomic, getter=isTool) BOOL isTool;
@property(readonly, nonatomic, getter=isFinger) BOOL isFinger;
@property(readonly, nonatomic, getter=length) float length;
@property(readonly, nonatomic, getter=width) float width;
@property(readonly, nonatomic, getter=direction) LeapVector *direction;
@property(readonly, nonatomic, getter=tipVelocity) LeapVector *tipVelocity;
@property(readonly, nonatomic, getter=tipPosition) LeapVector *tipPosition;
@property(readonly, nonatomic, getter=id) int id;
- (void *)interfacePointable;
- (id)description;
- (id)initWithPointable:(void *)arg1 frame:(id)arg2 hand:(id)arg3;

@end

