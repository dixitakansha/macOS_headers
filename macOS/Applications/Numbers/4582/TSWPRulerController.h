//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CALayerDelegate-Protocol.h"
#import "TSKChangeSourceObserver-Protocol.h"
#import "TSWPRulerMarkerControllerDelegate-Protocol.h"

@class CALayer, NSDictionary, NSMutableDictionary, NSString, TSWPColumn, TSWPInteractiveCanvasController, TSWPRulerMarkerController, TSWPStorage;
@protocol TSWPRulerControllerDelegate, TSWPRulerMarkerEditor;

@interface TSWPRulerController : NSObject <TSWPRulerMarkerControllerDelegate, TSKChangeSourceObserver, CALayerDelegate>
{
    TSWPInteractiveCanvasController *_interactiveCanvasController;
    int _tickDictRulerUnits;
    NSDictionary *_horizontalTickDict;
    NSDictionary *_verticalTickDict;
    double _tickDictViewScale;
    BOOL _tickDictShowAsPercentage;
    NSMutableDictionary *_rulerUnitRegistrationDict;
    CALayer *_ticksLayers[2];
    BOOL _includeVertical;
    struct CGPoint _lastContentOffset;
    BOOL _addedObserversAndHandlers;
    NSObject<TSWPRulerControllerDelegate> *_delegate;
    int _writingDirection;
    BOOL _verticalRulerDrawsOnRight;
    BOOL _ignoreSelectionContentsChanged;
    BOOL _enabled;
    BOOL _liveUpdateInProgress;
    TSWPRulerMarkerController *_rulerMarkerController;
    unsigned long long _cachedParagraphIndex;
    unsigned long long _cachedParagraphCount;
    TSWPColumn *_cachedCurrentColumn;
    TSWPStorage *_cachedStorage;
}

+ (Class)tickLayerClass;
@property(retain, nonatomic) TSWPStorage *cachedStorage; // @synthesize cachedStorage=_cachedStorage;
@property(retain, nonatomic) TSWPColumn *cachedCurrentColumn; // @synthesize cachedCurrentColumn=_cachedCurrentColumn;
@property(nonatomic) unsigned long long cachedParagraphCount; // @synthesize cachedParagraphCount=_cachedParagraphCount;
@property(nonatomic) unsigned long long cachedParagraphIndex; // @synthesize cachedParagraphIndex=_cachedParagraphIndex;
@property(nonatomic) BOOL liveUpdateInProgress; // @synthesize liveUpdateInProgress=_liveUpdateInProgress;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) TSWPRulerMarkerController *rulerMarkerController; // @synthesize rulerMarkerController=_rulerMarkerController;
@property(nonatomic) BOOL ignoreSelectionContentsChanged; // @synthesize ignoreSelectionContentsChanged=_ignoreSelectionContentsChanged;
@property(readonly, nonatomic) BOOL verticalRulerDrawsOnRight; // @synthesize verticalRulerDrawsOnRight=_verticalRulerDrawsOnRight;
@property(nonatomic) int writingDirection; // @synthesize writingDirection=_writingDirection;
@property(retain, nonatomic) NSObject<TSWPRulerControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL includeVertical; // @synthesize includeVertical=_includeVertical;
@property(nonatomic) TSWPInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=_interactiveCanvasController;
- (unsigned long long)p_pageCountForOrientation:(int)arg1;
- (double)p_pageDimensionForOrientation:(int)arg1;
- (double)p_contentOffsetForOrientation:(int)arg1;
- (id)p_rulerMarkerDataForSelection;
- (void)p_invalidateMarkersIfEditingStorage:(id)arg1;
- (BOOL)p_isEditingStorage:(id)arg1;
- (void)p_canvasUpdateZoomNotification:(id)arg1;
- (void)p_canvasDidZoomNotification:(id)arg1;
- (void)p_canvasUpdateScrollNotification:(id)arg1;
- (void)p_canvasDidScrollNotification:(id)arg1;
- (id)p_tickMarkDictionaryForOrientation:(int)arg1 viewScale:(double)arg2;
- (id)p_percentageTickMarkDictionaryForOrientation:(int)arg1 viewScale:(double)arg2;
- (void)p_setUpTickCycles;
- (id)_registrationDictionaryForRulerUnits:(int)arg1;
- (void)p_registerUnitWithRulerUnits:(int)arg1 unitToPointsConversionFactor:(double)arg2 stepUpCycle:(id)arg3 stepDownCycle:(id)arg4;
- (void)p_removeObserversAndHandlers;
- (void)p_addObserversAndHandlers;
- (void)p_createTicksLayer:(int)arg1;
- (void)p_invalidateRulerMarkersAndVisibility;
- (void)p_invalidateRulerMarkersAndVisibilityForTextEditorSelectionChangedNotification:(id)arg1;
- (void)p_invalidateRulerForTextEditor:(id)arg1;
- (void)p_editorControllerSelectionContentsChangedNotification:(id)arg1;
- (void)p_editorControllerSelectionPathChangedNotification:(id)arg1;
- (void)p_textEditorSelectionChangedNotification:(id)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)i_drawTicksLayerForOrientation:(int)arg1 inContext:(struct CGContext *)arg2;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (BOOL)willSelectionMoveBetweenParagraphsForChangeRecord:(id)arg1;
- (void)p_invalidateCachedSelectionInfo;
- (BOOL)willSelectionMoveBetweenParagraphsForSelectionRange:(struct _NSRange)arg1;
- (double)rulerXFromScaledCanvasX:(double)arg1;
- (double)scaledCanvasXFromRulerX:(double)arg1;
@property(readonly, nonatomic) id <TSWPRulerMarkerEditor> markerEditor;
@property(readonly, nonatomic) double rulerThickness;
- (struct CGPoint)rulerPointFromWindowPoint:(struct CGPoint)arg1;
- (double)tickFrameSpacingForOrientation:(int)arg1;
- (double)liveViewScale;
- (struct CGPoint)contentOffset;
- (void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (CDStruct_825d95ef)rulerProperties;
- (BOOL)i_isRightToLeftWritingDirection;
- (void)i_updateRulerVisibilityIfNecessary;
- (id)i_ticksLayerForOrientation:(int)arg1;
- (BOOL)i_showMarkers;
- (void)i_showRulerAsPercentageDidChange:(id)arg1;
- (void)i_centerRulerOriginDidChange:(id)arg1;
- (void)i_rulerUnitsDidChange:(id)arg1;
- (void)i_removeObserversAndHandlers;
- (void)i_addObserversAndHandlers;
- (void)i_drawLabelsStartTickIndex:(long long)arg1 endTickIndex:(long long)arg2 labelFrameInterval:(long long)arg3 tickFrameSpacing:(double)arg4 docViewToRulerConversion:(double)arg5 originOffset:(double)arg6 tickBase:(double)arg7 orientation:(int)arg8 intoContext:(struct CGContext *)arg9;
- (void)i_drawTickRects:(vector_b8c73e0a *)arg1 tickType:(unsigned long long)arg2 tickBase:(double)arg3 intoContext:(struct CGContext *)arg4;
- (BOOL)i_drawPageTrailingEdgeTickForOrientation:(int)arg1;
- (BOOL)i_drawPageLeadingEdgeTickForOrientation:(int)arg1;
- (id)i_layerForRulerSublayers:(int)arg1;
- (double)i_contentsScaleForLayer:(id)arg1;
- (Class)i_rulerMarkerControllerClass;
- (void)updateMarkersWithAnimation:(int)arg1;
- (void)invalidateRuler;
- (void)invalidateMarkers;
- (void)invalidateTicksAndLabels;
- (void)performBlockWithTicksLayers:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)p_teardownTicksLayers;
- (void)p_teardownTicksLayer:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

