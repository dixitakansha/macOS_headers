//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSAInteractiveCanvasController.h"

#import "TSDPartitioningInteractiveCanvasController-Protocol.h"

@interface TNInteractiveCanvasController : TSAInteractiveCanvasController <TSDPartitioningInteractiveCanvasController>
{
    struct CGRect mSavedCanvasFrame;
    BOOL mShouldUseCachedPartitionRendering;
}

@property(nonatomic) BOOL shouldUseCachedPartitionRendering; // @synthesize shouldUseCachedPartitionRendering=mShouldUseCachedPartitionRendering;
- (BOOL)validateMenuItem:(id)arg1;
- (void)setShowsComments:(BOOL)arg1;
- (BOOL)showsComments;
- (BOOL)contentViewCanResizeToFitScrollView:(id)arg1;
- (BOOL)scrollViewShouldAnchorToLeftEdge:(id)arg1;
- (BOOL)scrollViewShouldAnchorToRightEdge:(id)arg1;
- (void)endEditing;
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (BOOL)shouldAllowKeyCommands;
@property(readonly, nonatomic) BOOL hasOrganizableSelection;
- (BOOL)inPrintPreviewMode;
- (BOOL)wantsCanvasReferenceController;
- (id)additionalVisibleInfosForCanvas:(id)arg1;
- (struct CGPoint)unscaledCanvasUpperLeft;
- (struct CGPoint)unscaledCanvasUpperLeftForViewScale:(double)arg1;
- (double)visibleWidthForCanvas;
- (void)p_restoreSavedCanvasPosition;
- (void)p_moveCanvasBelowEditorAndSavePosition;
- (void)resetCachedPartitionedRendering;
- (void)discardRepForClassChange:(id)arg1;
- (BOOL)spellCheckingSuppressed;
- (double)defaultTargetPointSize;
- (void)tappedCanvasBackgroundAtPoint:(struct CGPoint)arg1;
- (BOOL)canHandleGesture:(id)arg1;
- (id)newCanvasEditor;
- (id)zOrderedInfosForPasteboardFromCanvasSelection:(id)arg1;
- (id)repsInZOrderBackToFront;
- (BOOL)supportsAdaptiveLayout;
- (struct CGSize)defaultMinimumUnscaledCanvasSize;
- (struct CGSize)canvasScrollingOutset;
- (void)transformGuides:(id)arg1 forLayout:(id)arg2;
- (BOOL)shouldGenerateGuidesForLayout:(id)arg1;
- (void)makeUserDefinedGuidesVisible;
- (id)guideStorageProviderAtPoint:(struct CGPoint)arg1;
- (id)provideUserDefinedGuides;
- (id)provideDynamicGuidesForLayout:(id)arg1;
- (id)guideController;
- (void)anchorCanvasAtRight:(BOOL)arg1;
- (id)p_currentSheet;
- (id)p_sheetEditor;
- (void)setDelegate:(id)arg1;

@end

