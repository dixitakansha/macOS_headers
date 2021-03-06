//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSWPPageRep.h"

#import "TSDMasterDrawableDelegate-Protocol.h"
#import "TSKChangeSourceObserver-Protocol.h"

@class CALayer, CAShapeLayer, NSString, TSDFill;

@interface TPPageRep : TSWPPageRep <TSKChangeSourceObserver, TSDMasterDrawableDelegate>
{
    CALayer *_horizontalSeparatorLayer;
    CALayer *_verticalSeparatorLayer;
    CAShapeLayer *_bodyBorderLayer;
    BOOL _backgroundFillRequiresLayerUpdate;
    BOOL _fillCanApplyToCALayer;
    TSDFill *_cachedBackgroundFill;
}

@property(retain, nonatomic) TSDFill *cachedBackgroundFill; // @synthesize cachedBackgroundFill=_cachedBackgroundFill;
- (void).cxx_destruct;
- (void)p_listenForDataChangesIfAppropriate;
- (id)bodyReps;
- (BOOL)masksToBounds;
- (void)drawInContext:(struct CGContext *)arg1;
- (BOOL)directlyManagesLayerContent;
- (id)layerClass;
- (int)tilingMode;
- (void)p_updateBorderLayers;
- (void)p_updateBodyBorderLayer;
- (void)p_updateVerticalSeparatorLayer;
- (BOOL)p_pageRequiresVerticalSeparator;
- (void)p_updateHorizontalSeparatorLayer;
- (BOOL)p_pageRequiresHorizontalSeparator;
- (BOOL)childRepIsMasterDrawable:(id)arg1;
- (BOOL)childRepIsOnDocSetupCanvas:(id)arg1;
- (id)childRepsForHitTesting;
- (id)visibleChildLayouts;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)willBeRemoved;
- (id)colorBehindBodyTextLayer:(id)arg1;
- (BOOL)p_wantsLayoutBorders;
- (void)updateFromLayout;
- (void)didUpdateLayer:(id)arg1;
- (void)p_updateBackgroundFillForLayer:(id)arg1;
- (void)viewScrollingEnded;
- (void)viewScrollDidChange;
- (void)p_updateLayoutBordersVisibility;
- (BOOL)allowsChildRepContentPlatformViews;
- (id)p_bodyRepThatCanSelectChildRep:(id)arg1;
- (void)selectChildRep:(id)arg1 extendingSelection:(BOOL)arg2;
- (BOOL)canSelectChildRep:(id)arg1;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (id)additionalLayersUnderLayer;
- (void)viewScaleDidChange;
- (void)showHUDForWPRep:(id)arg1 withFlags:(unsigned long long)arg2;
- (id)hitMasterRep:(struct CGPoint)arg1;
- (void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(BOOL)arg3;
- (id)p_hitRep:(struct CGPoint)arg1 withPrecision:(BOOL)arg2 passingTest:(CDUnknownBlockType)arg3;
- (long long)p_hitHeaderFooterFragment:(long long)arg1 atPoint:(struct CGPoint)arg2;
- (id)hitRep:(struct CGPoint)arg1 withPrecision:(BOOL)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)childRepForInfo:(id)arg1;
- (BOOL)p_headerFooterIsVisibleAndInteractive:(long long)arg1;
- (BOOL)isOpaque;
- (id)backgroundFill;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

