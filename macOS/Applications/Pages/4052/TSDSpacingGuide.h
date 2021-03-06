//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDAlignmentGuide.h"

@class TSDSpacing, TSDSpacingGuideUILayer, TSDSwappableAxesGeometry;

@interface TSDSpacingGuide : TSDAlignmentGuide
{
    TSDSpacing *mParentSpacing;
    struct CGRect mGeneratingObjectRect;
    TSDSpacingGuideUILayer *mSpacingUILayer;
    TSDSwappableAxesGeometry *mVerticalGeom;
}

@property(nonatomic) TSDSpacing *parentSpacing; // @synthesize parentSpacing=mParentSpacing;
- (id)description;
- (id)layerWithICC:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)canBeSnappedToByEdge:(int)arg1 ofFrame:(struct CGRect)arg2;
- (void)dealloc;
- (id)initForEdge:(int)arg1 ofGeneratingObjectRect:(struct CGRect)arg2 andParentSpacing:(id)arg3;

@end

