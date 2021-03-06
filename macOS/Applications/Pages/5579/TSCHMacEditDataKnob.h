//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDKnob.h"

@class NSString, TSUImage;

@interface TSCHMacEditDataKnob : TSDKnob
{
    struct CGSize mSize;
    BOOL mIsBeingTracked;
    TSUImage *mKnobImageHighlighted;
    TSUImage *mKnobImage;
    NSString *mKnobButtonLabel;
    NSString *mButtonImageName;
    NSString *mHighlightedButtonImageName;
    double mContentsScale;
    SEL mAction;
}

@property(nonatomic) SEL action; // @synthesize action=mAction;
@property(retain, nonatomic) NSString *highlightedButtonImageName; // @synthesize highlightedButtonImageName=mHighlightedButtonImageName;
@property(retain, nonatomic) NSString *buttonImageName; // @synthesize buttonImageName=mButtonImageName;
@property(retain, nonatomic) NSString *title; // @synthesize title=mKnobButtonLabel;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=mSize;
@property(nonatomic) BOOL isBeingTracked; // @synthesize isBeingTracked=mIsBeingTracked;
- (void).cxx_destruct;
- (void)p_updateLayerContents;
- (void)p_unlockFocusOnNewImage;
- (id)p_lockedFocusImageWithSize:(struct CGSize)arg1 scale:(double)arg2 flipped:(BOOL)arg3;
- (id)p_drawKnobImageWithImageName:(id)arg1;
- (struct CGSize)p_sizeOfString:(id)arg1;
- (id)p_styleKnobButtonLabel;
- (struct CGSize)p_sizeOfEditDataKnobButtonForLabel:(id)arg1;
- (id)buttonImage;
- (id)highlightedButtonImage;
- (void)updateHitRegionPathForRep:(id)arg1;
- (BOOL)isHitByUnscaledPoint:(struct CGPoint)arg1 andRep:(id)arg2 returningDistance:(double *)arg3;
- (BOOL)obscuresKnob:(id)arg1;
- (BOOL)overlapsWithKnob:(id)arg1;
@property(nonatomic, getter=isVisible) BOOL visible;
- (id)knobImage;
- (id)initWithSize:(struct CGSize)arg1 onRep:(id)arg2;

@end

