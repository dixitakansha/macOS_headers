//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSAInteractiveCanvasController.h"

#import "TPPageControllerObserver-Protocol.h"
#import "TPViewStateConsumer-Protocol.h"
#import "TPViewStateProvider-Protocol.h"
#import "TSKSearchCanvasDelegate-Protocol.h"
#import "TSWPEndNoteCitationsControllerDelegate-Protocol.h"

@class CALayer, NSIndexSet, NSString, TPInlineRepDragTrackerDelegate, TPRepDragTrackerDelegate, TPRepTrackerDelegate, TSKSelectionPath, TSWPSelectionModelTranslator, _TtC5Pages20TPCanvasPageAnimator, _TtC5Pages26TPCanvasSelectedPageHelper;
@protocol TPAlternativePageInfosSource, TPCenteredSingleAlternativePageInfoSource, TPMacHUDProviding;

@interface TPInteractiveCanvasController : TSAInteractiveCanvasController <TPPageControllerObserver, TPViewStateProvider, TPViewStateConsumer, TSKSearchCanvasDelegate, TSWPEndNoteCitationsControllerDelegate>
{
    TPRepTrackerDelegate *_repTrackerDelegate;
    CALayer *_canvasBackgroundLayer;
    long long _lastYContentOffset;
    BOOL _autoscrollingUp;
    BOOL _autoscrollingDown;
    BOOL _wordCountHUDVisible;
    int _wordCountHUDType;
    struct CGPoint _wordCountHUDPosition;
    BOOL _showsPageNavigator;
    BOOL _pencilAnnotationsHidden;
    NSIndexSet *_pageIndicesToForceVisible;
    id <TPCenteredSingleAlternativePageInfoSource> _centeredSinglePageInfoSource;
    struct TPCenteredSingleAlternativePageRestorationState _centeredSinglePageRestorationState;
    _TtC5Pages26TPCanvasSelectedPageHelper *_canvasSelectedPageHelper;
    BOOL _isCanvasSizeValid;
    BOOL _isObservingAlternativePageDrawableChanges;
    int _reentrancyCheckValue;
    unsigned long long _userSelectedPageIndex;
    struct CGPoint _contentOffsetWhenUserSelectedPage;
    long long _viewScaleMode;
    BOOL _restoredWindowFrame;
    NSString *_macSelectedInspectorSwitchSegmentIdentifier;
    BOOL _macInspectorHidden;
    _TtC5Pages20TPCanvasPageAnimator *_pageViewStateAnimator;
    BOOL _layoutBordersVisible;
    BOOL _phoneRulerMode;
    BOOL _masterDrawablesSelectable;
    BOOL _showsActivitySidebar;
    BOOL _showsCTMarkup;
    BOOL _showsCTDeletions;
    BOOL _changeTrackingPaused;
    BOOL _layoutBordersTemporarilyVisible;
    BOOL _forceHeaderVisible;
    BOOL _forceFooterVisible;
    TPRepDragTrackerDelegate *_repDragDelegate;
    TPInlineRepDragTrackerDelegate *_inlineRepDragDelegate;
    TSKSelectionPath *_selectionPathRestoredFromViewState;
    long long _pageViewState;
    long long _iOSViewScaleMode;
    struct _NSRange _visiblePageIndexRange;
}

@property(nonatomic) long long iOSViewScaleMode; // @synthesize iOSViewScaleMode=_iOSViewScaleMode;
@property(nonatomic) long long pageViewState; // @synthesize pageViewState=_pageViewState;
@property(nonatomic) BOOL forceFooterVisible; // @synthesize forceFooterVisible=_forceFooterVisible;
@property(nonatomic) BOOL forceHeaderVisible; // @synthesize forceHeaderVisible=_forceHeaderVisible;
@property(nonatomic) BOOL layoutBordersTemporarilyVisible; // @synthesize layoutBordersTemporarilyVisible=_layoutBordersTemporarilyVisible;
@property(nonatomic) BOOL changeTrackingPaused; // @synthesize changeTrackingPaused=_changeTrackingPaused;
@property(nonatomic) BOOL showsCTDeletions; // @synthesize showsCTDeletions=_showsCTDeletions;
@property(nonatomic) BOOL showsCTMarkup; // @synthesize showsCTMarkup=_showsCTMarkup;
@property(copy, nonatomic) TSKSelectionPath *selectionPathRestoredFromViewState; // @synthesize selectionPathRestoredFromViewState=_selectionPathRestoredFromViewState;
@property(nonatomic) BOOL showsActivitySidebar; // @synthesize showsActivitySidebar=_showsActivitySidebar;
@property(nonatomic) BOOL masterDrawablesSelectable; // @synthesize masterDrawablesSelectable=_masterDrawablesSelectable;
@property(nonatomic, getter=isPhoneRulerMode) BOOL phoneRulerMode; // @synthesize phoneRulerMode=_phoneRulerMode;
@property(nonatomic) struct _NSRange visiblePageIndexRange; // @synthesize visiblePageIndexRange=_visiblePageIndexRange;
@property(nonatomic) BOOL macInspectorHidden; // @synthesize macInspectorHidden=_macInspectorHidden;
@property(copy, nonatomic) NSString *macSelectedInspectorSwitchSegmentIdentifier; // @synthesize macSelectedInspectorSwitchSegmentIdentifier=_macSelectedInspectorSwitchSegmentIdentifier;
@property(readonly, nonatomic) BOOL restoredWindowFrame; // @synthesize restoredWindowFrame=_restoredWindowFrame;
@property(nonatomic) long long viewScaleMode; // @synthesize viewScaleMode=_viewScaleMode;
@property(copy, nonatomic) NSIndexSet *pageIndicesToForceVisible; // @synthesize pageIndicesToForceVisible=_pageIndicesToForceVisible;
@property(readonly, nonatomic) TPInlineRepDragTrackerDelegate *inlineRepDragDelegate; // @synthesize inlineRepDragDelegate=_inlineRepDragDelegate;
@property(readonly, nonatomic) TPRepDragTrackerDelegate *repDragDelegate; // @synthesize repDragDelegate=_repDragDelegate;
- (void).cxx_destruct;
- (struct CGRect)p_unscaledRectForSelectionPath:(id)arg1;
- (struct CGRect)p_unscaledUnobscuredRectForSelectionPath:(id)arg1;
- (struct CGRect)p_currentSelectionUnscaledUnobscuredRect;
- (void)p_resizeCanvasToFitAllPages;
- (void)p_invalidateCanvasSize;
- (unsigned long long)p_visiblePageIndexEnd;
- (id)defaultURLForBookmarkHyperlink;
- (Class)hyperlinkControllerClass;
- (id)provideDynamicGuidesForLayout:(id)arg1;
- (id)provideUserDefinedGuides;
- (id)guideStorageProviderAtPageIndex:(unsigned long long)arg1;
- (id)guideStorageProviderAtPoint:(struct CGPoint)arg1;
- (BOOL)supportsUserDefinedGuides;
- (struct CGRect)visualContainerRectForGuideStorage:(id)arg1;
- (double)offsetForTranslatingGuidesInStorage:(id)arg1 guideType:(int)arg2;
- (double)offsetForTranslatingToCenterRulerForGuidesInStorage:(id)arg1 guideType:(int)arg2;
- (Class)userDefinedGuideControllerClass;
- (double)fitSpreadViewScale;
- (double)fitPageViewScale;
- (double)fitPageWidthViewScale;
- (double)fitHeightViewScale;
- (id)postflightCommandForCitationFormatting;
- (id)preflightCommandForCitationFormatting;
@property(readonly, nonatomic) BOOL hasPageViewStateAnimator;
- (void)finishPageViewStateAnimatorWithCompletion:(CDUnknownBlockType)arg1;
- (void)preparePageViewStateAnimator;
- (void)didModifyFacingPages;
- (void)willModifyFacingPages;
- (void)pauseChangeTracking;
- (void)setChangeTrackingViewModeForMarkup:(BOOL)arg1 deletions:(BOOL)arg2;
- (BOOL)willBeginEditingAfterDocumentLoad;
- (void)finishOpeningDocumentWithDelegate:(id)arg1;
- (id)p_emptyDocumentSelectionPath;
- (id)p_emptyDocumentSelection;
- (double)p_emptyDocumentViewScaleForSelectionPath:(id)arg1;
- (struct CGPoint)p_emptyDocumentOffsetForSelectionPath:(id)arg1;
- (long long)p_currentTextEditorWritingDirection;
- (void)p_pageDidLayout:(id)arg1;
- (void)archivedViewState:(id)arg1 setPresentationAutoScrollSpeed:(double)arg2;
- (void)archivedViewState:(id)arg1 setFreehandDrawingToolkitUIState:(id)arg2;
- (void)archivedViewState:(id)arg1 setAuthorFilter:(id)arg2;
- (void)archivedViewState:(id)arg1 setAuthorFilterName:(id)arg2;
- (void)archivedViewState:(id)arg1 setShowUserDefinedGuides:(BOOL)arg2;
- (void)archivedViewState:(id)arg1 setInspectorHidden:(BOOL)arg2;
- (void)archivedViewState:(id)arg1 setSelectedInspectorSwitchSegmentIdentifier:(id)arg2;
- (void)archivedViewState:(id)arg1 setWindowFrame:(struct CGRect)arg2;
- (void)archivedViewState:(id)arg1 setViewScale:(double)arg2;
- (void)archivedViewState:(id)arg1 setViewScaleMode:(long long)arg2;
- (void)archivedViewState:(id)arg1 setShowsActivitySidebar:(BOOL)arg2;
- (void)archivedViewState:(id)arg1 setPencilAnnotationsHidden:(BOOL)arg2;
- (void)archivedViewState:(id)arg1 setShowsPageNavigator:(BOOL)arg2;
- (void)archivedViewState:(id)arg1 setShowsCTDeletions:(BOOL)arg2;
- (void)archivedViewState:(id)arg1 setChangeTrackingPaused:(BOOL)arg2;
- (void)archivedViewState:(id)arg1 setShowsCTMarkup:(BOOL)arg2;
- (void)archivedViewState:(id)arg1 setShowsComments:(BOOL)arg2;
- (void)archivedViewState:(id)arg1 setWordCountHUDPosition:(struct CGPoint)arg2;
- (void)archivedViewState:(id)arg1 setWordCountHUDType:(int)arg2;
- (void)archivedViewState:(id)arg1 setWordCountHUDVisible:(BOOL)arg2;
- (void)archivedViewState:(id)arg1 setLayoutBordersVisible:(BOOL)arg2;
- (void)archivedViewState:(id)arg1 setRulerVisible:(BOOL)arg2;
- (void)archivedViewState:(id)arg1 setChartUIState:(id)arg2;
- (void)archivedViewState:(id)arg1 setMasterDrawablesSelectable:(BOOL)arg2;
- (void)archivedViewState:(id)arg1 setSelectionPath:(id)arg2;
- (void)archivedViewState:(id)arg1 setVisibleRect:(struct CGRect)arg2;
- (void)archivedViewState:(id)arg1 setPageViewState:(long long)arg2;
- (void)archivedViewState:(id)arg1 setiOSViewScaleMode:(long long)arg2;
- (double)presentationAutoScrollSpeedForArchivedViewState:(id)arg1;
- (id)freehandDrawingToolkitUIStateForArchivedViewState:(id)arg1;
- (id)filteredAuthorForArchivedViewState:(id)arg1;
- (id)filteredAuthorNameForArchivedViewState:(id)arg1;
- (BOOL)showUserDefinedGuidesForArchivedViewState:(id)arg1;
- (BOOL)inspectorHiddenForArchivedViewState:(id)arg1;
- (id)selectedInspectorSwitchSegmentIdentifierForArchivedViewState:(id)arg1;
- (struct CGRect)windowFrameForArchivedViewState:(id)arg1;
- (long long)pageViewStateForArchivedViewState:(id)arg1;
- (double)viewScaleForArchivedViewState:(id)arg1;
- (long long)viewScaleModeForArchivedViewState:(id)arg1;
- (BOOL)showsActivitySidebarForArchivedViewState:(id)arg1;
- (BOOL)pencilAnnotationsHiddenForArchivedViewState:(id)arg1;
- (BOOL)showsPageNavigatorForArchivedViewState:(id)arg1;
- (BOOL)changeTrackingPausedForArchivedViewState:(id)arg1;
- (BOOL)showsCTDeletionsForArchivedViewState:(id)arg1;
- (BOOL)showsCTMarkupForArchivedViewState:(id)arg1;
- (BOOL)showsCommentsForArchivedViewState:(id)arg1;
- (struct CGPoint)wordCountHUDPositionForArchivedViewState:(id)arg1;
- (int)wordCountHUDTypeForArchivedViewState:(id)arg1;
- (BOOL)wordCountHUDVisibleForArchivedViewState:(id)arg1;
- (BOOL)layoutBordersVisibleForArchivedViewState:(id)arg1;
- (BOOL)rulerVisibleForArchivedViewState:(id)arg1;
- (id)chartUIStateForAchivedViewState:(id)arg1;
- (BOOL)masterDrawablesSelectableForAchivedViewState:(id)arg1;
- (id)selectionPathForArchivedViewState:(id)arg1;
- (id)p_selectionPathRemovingFreeHandDrawingSelectionsIfNeeded:(id)arg1;
- (id)compatibilitySelectionPathForArchivedViewState:(id)arg1;
- (struct CGRect)visibleRectForArchivedViewState:(id)arg1;
- (long long)iOSViewScaleModeForArchivedViewState:(id)arg1;
- (BOOL)isiOSViewScaleModeValid;
- (id)p_pageTemplateOwningModelForInfos:(id)arg1;
- (id)p_masterDrawablesInInfos:(id)arg1 owningPageMaster:(id *)arg2;
- (id)p_editorForArchivedViewState;
- (id)p_canvasBackgroundLayer;
- (void)pageController:(id)arg1 willDestroyBodyStartingAtPageIndex:(unsigned long long)arg2;
- (void)pageController:(id)arg1 didLayOutPageLayout:(id)arg2;
- (void)needLayoutForPageController:(id)arg1;
- (void)canvasSizeWillChangeForPageController:(id)arg1;
- (void)forLayoutNearestVisibleRectForInfosForSelectionPath:(id)arg1 performBlock:(CDUnknownBlockType)arg2;
- (id)modelsForSelectionPath:(id)arg1;
- (void)withLayoutNearestPoint:(struct CGPoint)arg1 forStorage:(id)arg2 performBlock:(CDUnknownBlockType)arg3;
- (id)p_selectionModelTranslator;
- (void)withLayoutForSelectionPath:(id)arg1 flags:(unsigned long long)arg2 performBlock:(CDUnknownBlockType)arg3;
- (void)p_withPageLayoutAtIndex:(unsigned long long)arg1 selectionPath:(id)arg2 info:(id)arg3 isBody:(_Bool)arg4 executeBlock:(CDUnknownBlockType)arg5;
- (BOOL)paginationIsCompleteForSelectionPath:(id)arg1;
- (id)p_layoutForInfo:(id)arg1 selectionPath:(id)arg2 descendentOfLayout:(id)arg3;
- (id)layoutsForSelectionPath:(id)arg1;
- (id)masterDrawableProviderForSelectionPath:(id)arg1;
- (id)headerFooterProviderForSelectionPath:(id)arg1;
- (id)pageMasterForSelectionPath:(id)arg1;
- (Class)annotationControllerClass;
- (id)smartAnnotationLayoutHelper;
- (id)pInfoForObjectInAlternativePage:(id)arg1;
- (id)pageInfoForInfo:(id)arg1 withSelection:(id)arg2;
@property(readonly, nonatomic) unsigned long long indexOfPageContainingCurrentSelection;
@property(readonly, nonatomic) struct _NSRange visibleRootIndexRange;
- (Class)wpSelectionClassForStorage:(id)arg1;
- (id)selectionPathForSearchReference:(id)arg1;
- (void)p_setCenteredSinglePageModeEnabled:(BOOL)arg1;
- (void)p_restoreContentOffsetAndRelativeViewScale;
- (double)p_restoredViewScale;
- (void)p_resetRestorableContentPropertiesIfNeeded;
- (void)p_resetRestorableContentProperties;
- (struct CGRect)p_unscaledCanvasRectForCenteredSinglePageInfoSource;
- (struct CGRect)p_centeredSinglePageAllowedLayoutFrame;
@property(readonly, nonatomic) struct TPCenteredSingleAlternativePageRestorationState centeredSinglePageRestorationState;
@property(readonly, nonatomic) struct NSEdgeInsets centeredSinglePageDefaultViewScalePageInsets;
- (double)centeredSinglePageMinimumViewScaleForWidth:(double)arg1;
- (double)centeredSinglePageFitWidthViewScaleForWidth:(double)arg1;
@property(readonly, nonatomic) double centeredSinglePageDefaultViewScale;
@property(readonly, nonatomic) BOOL isShowingCenteredSinglePage;
- (void)updateSelectionForTapOnSelectedRep:(id)arg1;
- (int)defaultKnobTypeForRep:(id)arg1;
- (id)unitStringForPoint:(struct CGPoint)arg1;
- (struct CGSize)rulerCenterOffsetSizeForPoint:(struct CGPoint)arg1;
- (struct CGRect)boundingRectForActiveGuidesForPoint:(struct CGPoint)arg1;
- (BOOL)attachedCommentsAllowedForDrawable:(id)arg1;
- (void)getColumnLeftPosition:(double *)arg1 columnRightPosition:(double *)arg2;
- (void)getColumnLeftPosition:(double *)arg1 columnRightPosition:(double *)arg2 singleColumnAtSelectionPoint:(BOOL)arg3;
- (id)newCanvasEditor;
- (BOOL)canCustomizeHyperlinkViewController;
- (BOOL)handleHyperlinksWithTextGRs;
- (void)canvasDidValidateLayouts:(id)arg1;
- (void)canvasWillValidateLayouts:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillScroll:(id)arg1;
- (BOOL)scrollViewShouldAnchorToRightEdge:(id)arg1;
- (BOOL)allowNegativeAutoscroll;
- (void)backgroundLayoutAndRenderStateDidPerformBackgroundWork:(id)arg1;
- (void)unobscuredFrameDidChange;
- (void)setContentOffset:(struct CGPoint)arg1 scrollOptions:(unsigned long long)arg2;
- (struct CGPoint)p_unscaledContentCenterForContentOffset:(struct CGPoint)arg1 viewScale:(double)arg2 maintainingVisibleSelection:(BOOL)arg3;
- (struct CGPoint)unscaledContentCenterForViewScale:(double)arg1;
- (void)p_setViewScale:(double)arg1 andScrollViewFrame:(struct CGRect)arg2 contentCenter:(struct CGPoint)arg3 animated:(BOOL)arg4;
- (void)setViewScale:(double)arg1 andScrollViewFrame:(struct CGRect)arg2 contentOffset:(struct CGPoint)arg3 animated:(BOOL)arg4;
- (void)setViewScale:(double)arg1 andScrollViewFrame:(struct CGRect)arg2 maintainPosition:(BOOL)arg3 animated:(BOOL)arg4;
- (void)setViewScale:(double)arg1 andScrollViewFrame:(struct CGRect)arg2 animated:(BOOL)arg3;
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)preprocessChanges:(id)arg1 forChangeSource:(id)arg2;
- (Class)canvasRootLayoutClass;
- (void)unloadDocument;
- (void)loadDocument;
- (BOOL)tappedFootnoteContainerRep:(id)arg1;
- (void)flashHeaderFooterType:(long long)arg1;
- (void)updateCanvasSublayerProperties;
- (BOOL)drawablesToReanchorContainsDrawable:(id)arg1;
- (id)additionalLayersUnderRepLayers;
- (void)updatePageCountForPageController:(id)arg1;
- (void)scrollSearchReferenceToVisible:(id)arg1 scrollOptions:(unsigned long long)arg2;
- (struct CGRect)p_findScrollTargetRectInPageLayout:(id)arg1 withSearchReference:(id)arg2;
- (struct CGRect)rectInRootForScrollingToSelectionPath:(id)arg1 onLayout:(id)arg2 allowingZooming:(BOOL)arg3;
- (void)scrollToPageIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) unsigned long long manuallySelectedPageIndex;
- (void)didManuallySelectPageIndex:(unsigned long long)arg1;
- (unsigned long long)currentPageIndex;
@property(readonly, nonatomic) unsigned long long mostVisiblePageIndex;
- (unsigned long long)p_mostVisiblePageIndexIgnoringAlternativeInfos;
- (struct CGRect)visiblePageRectForPageIndex:(unsigned long long)arg1;
- (struct CGPoint)smartZoomCenterForNoSelection;
- (void)setIsDraggingToInsertDrawables:(BOOL)arg1;
- (id)stringFromIndex:(unsigned long long)arg1;
- (struct CGPoint)pageOriginForPageIndex:(unsigned long long)arg1;
- (unsigned long long)pageIndexFromCanvasPoint:(struct CGPoint)arg1;
- (struct _NSRange)pageIndexRangeForRect:(struct CGRect)arg1;
- (id)topLevelZOrderedSiblingsOfInfos:(id)arg1;
- (id)topLevelRepsForDragSelecting;
- (void)updateInfosToDisplay;
- (id)p_delegateCenteredSingleAlternativePageInfoSource;
@property(readonly, nonatomic) id <TPAlternativePageInfosSource> alternativePageInfosSource;
- (void)updateVisiblePageInfosWithPadding:(BOOL)arg1;
- (struct _NSRange)visiblePageInfoRangeWithPadding:(BOOL)arg1;
- (void)updateVisiblePageInfos;
- (void)p_preprocessAlternativePageInfoChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)p_stopObservingDrawablesForAlternativePageInfosSource;
- (void)p_startObservingDrawablesForAlternativePageInfosSource;
- (void)p_updateCanvasForAlternativePageInfosSourceChange;
- (void)setNeedsInfosToDisplayUpdate;
- (void)willUpdateInfosToDisplayWithAlternativeInfos:(BOOL)arg1;
@property(readonly, nonatomic) id <TPMacHUDProviding> hudProvidingDelegate;
@property(readonly, nonatomic) TPRepTrackerDelegate *repTrackerDelegate;
- (id)repDragTrackerDelegateForRep:(id)arg1;
- (BOOL)shouldForceHeaderFooterVisibleForType:(long long)arg1;
- (BOOL)annotationsPresentedViaSidebar;
- (void)setPencilAnnotationsHidden:(BOOL)arg1;
@property(nonatomic) BOOL showsPageNavigator;
- (void)setShowsComments:(BOOL)arg1;
- (BOOL)pencilAnnotationsHidden;
- (BOOL)showsComments;
@property(nonatomic) struct CGPoint wordCountHUDPosition;
@property(nonatomic) int wordCountHUDType;
@property(nonatomic) BOOL wordCountHUDVisible;
@property(nonatomic) BOOL layoutBordersVisible; // @synthesize layoutBordersVisible=_layoutBordersVisible;
@property(readonly, nonatomic) BOOL supportsFooterEditing;
@property(readonly, nonatomic) BOOL supportsHeaderEditing;
@property(readonly, nonatomic) BOOL supportsHeaderOrFooterEditing;
- (void)endFieldEditingSession;
- (void)setSelectionPath:(id)arg1 withSelectionFlags:(unsigned long long)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)activePageController;
- (void)setDelegate:(id)arg1;
- (void)teardown;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) TSWPSelectionModelTranslator *selectionModelTranslator;
@property(readonly) Class superclass;

@end

