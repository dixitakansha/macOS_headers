//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSLayoutManager.h>

#import "ICTrackedAttributeDelegate-Protocol.h"

@class ICSelectorDelayer, ICTextController, NSDictionary, NSMutableDictionary, NSTextContainer, NSTextView;

@interface ICLayoutManager : NSLayoutManager <ICTrackedAttributeDelegate>
{
    BOOL _isZooming;
    BOOL _isUpdatingForAttachmentViewTypeChange;
    BOOL _lineHeightIncludeParagraphSpacing;
    BOOL _shouldManuallyRenderSeparateSubviews;
    BOOL _isRenderingPreviewForDragAndDrop;
    BOOL _needsClearRemovedAttachments;
    NSDictionary *_trackedToDoParagraphs;
    double _checklistZoomFactor;
    NSMutableDictionary *_todoButtonsByTrackingUUID;
    NSMutableDictionary *_activeSupplementalViews;
    NSMutableDictionary *_hiddenSupplementalViews;
    NSMutableDictionary *_supplementalViewControllers;
    NSMutableDictionary *_supplementalViewProviders;
    ICSelectorDelayer *_updateHiddenViewsSelectorDelayer;
    NSMutableDictionary *_delayedScrollOutViewDictionary;
    struct CGPoint _cachedOrigin;
    struct CGSize _cachedTextContainerSize;
}

@property(retain, nonatomic) NSMutableDictionary *delayedScrollOutViewDictionary; // @synthesize delayedScrollOutViewDictionary=_delayedScrollOutViewDictionary;
@property(retain, nonatomic) ICSelectorDelayer *updateHiddenViewsSelectorDelayer; // @synthesize updateHiddenViewsSelectorDelayer=_updateHiddenViewsSelectorDelayer;
@property(nonatomic) struct CGSize cachedTextContainerSize; // @synthesize cachedTextContainerSize=_cachedTextContainerSize;
@property(retain, nonatomic) NSMutableDictionary *supplementalViewProviders; // @synthesize supplementalViewProviders=_supplementalViewProviders;
@property(retain, nonatomic) NSMutableDictionary *supplementalViewControllers; // @synthesize supplementalViewControllers=_supplementalViewControllers;
@property(retain, nonatomic) NSMutableDictionary *hiddenSupplementalViews; // @synthesize hiddenSupplementalViews=_hiddenSupplementalViews;
@property(retain, nonatomic) NSMutableDictionary *activeSupplementalViews; // @synthesize activeSupplementalViews=_activeSupplementalViews;
@property(nonatomic) struct CGPoint cachedOrigin; // @synthesize cachedOrigin=_cachedOrigin;
@property(retain, nonatomic) NSMutableDictionary *todoButtonsByTrackingUUID; // @synthesize todoButtonsByTrackingUUID=_todoButtonsByTrackingUUID;
@property(nonatomic) BOOL needsClearRemovedAttachments; // @synthesize needsClearRemovedAttachments=_needsClearRemovedAttachments;
@property(nonatomic) double checklistZoomFactor; // @synthesize checklistZoomFactor=_checklistZoomFactor;
@property(copy, nonatomic) NSDictionary *trackedToDoParagraphs; // @synthesize trackedToDoParagraphs=_trackedToDoParagraphs;
@property(nonatomic) BOOL isRenderingPreviewForDragAndDrop; // @synthesize isRenderingPreviewForDragAndDrop=_isRenderingPreviewForDragAndDrop;
@property(nonatomic) BOOL shouldManuallyRenderSeparateSubviews; // @synthesize shouldManuallyRenderSeparateSubviews=_shouldManuallyRenderSeparateSubviews;
@property(nonatomic) BOOL lineHeightIncludeParagraphSpacing; // @synthesize lineHeightIncludeParagraphSpacing=_lineHeightIncludeParagraphSpacing;
@property(nonatomic) BOOL isUpdatingForAttachmentViewTypeChange; // @synthesize isUpdatingForAttachmentViewTypeChange=_isUpdatingForAttachmentViewTypeChange;
@property(nonatomic) BOOL isZooming; // @synthesize isZooming=_isZooming;
- (void).cxx_destruct;
- (id)icaxTodoButtonForParagraphStyle:(id)arg1;
- (void)fillBackgroundRectArray:(const struct CGRect *)arg1 count:(unsigned long long)arg2 forCharacterRange:(struct _NSRange)arg3 color:(struct NSColor *)arg4;
- (void)invalidateLayoutAfterAttachmentViewTypeChange;
- (void)invalidateLayoutAfterAttachmentViewTypeChangeIfNecessary;
- (void)clearViewForTextAttachment:(id)arg1;
- (void)clearViewsForAllTextAttachmentsThatSupportThumbnailMode;
- (struct NSViewController *)viewControllerForTextAttachmentNoCreate:(id)arg1;
- (struct NSViewController *)viewControllerForTextAttachment:(id)arg1;
- (struct NSViewController *)viewControllerForTextAttachment:(id)arg1 createIfNeeded:(BOOL)arg2;
- (struct NSView *)viewForTextAttachmentNoCreate:(id)arg1;
- (struct NSView *)viewForTextAttachment:(id)arg1;
- (void)clearSupplementalViewForIdentifier:(id)arg1;
- (struct NSView *)supplementalViewForIdentifier:(id)arg1 allowHiddenViews:(BOOL)arg2;
- (void)attachmentInlineDrawingMergeableDataDidChange:(id)arg1;
- (void)invalidateLayoutForAttachment:(id)arg1;
- (void)mediaDidLoad:(id)arg1;
- (void)attachmentDidLoad:(id)arg1;
@property(readonly, nonatomic) NSTextContainer *textContainer;
@property(readonly, nonatomic) ICTextController *textController;
- (struct ICMacBaseTextView *)icTextView;
@property(nonatomic) __weak NSTextView *textView;
- (void)updateInlineDrawingViews;
- (void)updateVisibleSupplementalViews;
- (void)hideSupplementalView:(struct NSView *)arg1 forIdentifier:(id)arg2;
- (BOOL)unhideSupplementalView:(struct NSView *)arg1 forIdentifier:(id)arg2;
- (void)updateHiddenSupplementalViews;
- (id)paragraphStyleForCharacterIndex:(unsigned long long)arg1;
- (void)didAddViewForTextAttachment:(id)arg1;
- (void)willPlaceView:(struct NSView *)arg1 forTextAttachment:(id)arg2;
- (id)viewProviderForTextAttachment:(id)arg1 parentView:(struct NSView *)arg2 characterIndex:(unsigned long long)arg3;
- (void)enumerateAttachmentViewsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct _NSRange)rangeForAttachment:(id)arg1 withTextAttachment:(id *)arg2;
- (void)ensureViewIsAddedForAttachment:(id)arg1 inCharacterRange:(struct _NSRange)arg2;
- (void)_clearRemovedAttachments;
- (void)clearRemovedAttachmentsIfNeeded;
- (void)removeClearingControllerForView:(struct NSView *)arg1 viewIdentifier:(id)arg2;
- (void)removeClearingControllerForView:(struct NSView *)arg1;
- (void)textStorageDidEndEditingNotification:(id)arg1;
- (void)clearAllSupplementalViews;
- (void)updateSubviewsForCharacterRange:(struct _NSRange)arg1;
- (void)updateSubviewsForCharacterRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;
- (void)cleanupStaleTodoButtons;
- (void)cleanupStaleTodoButtonsAndUpdateSupplementalViewsForDictionary:(id)arg1;
- (id)todoButtonsForCharacterRange:(struct _NSRange)arg1;
- (void)manuallyRenderSubviewsForCharacterRange:(struct _NSRange)arg1;
- (void)clearAllTodos;
- (void)drawBulletsForListRange:(struct _NSRange)arg1 paragraphStyle:(id)arg2 atPoint:(struct CGPoint)arg3;
- (double)bulletYOffsetForCharacterAtIndex:(unsigned long long)arg1;
- (BOOL)selectedRangesIntersectWithRange:(struct _NSRange)arg1;
- (void)didPressTodoButton:(id)arg1;
- (id)drawTodoViewForListRange:(struct _NSRange)arg1 paragraphStyle:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)drawListStylesForCharacterRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;
- (void)zoomFactorOrInsetsDidChange;
- (void)contentSizeCategoryDidChange;
- (void)textController:(id)arg1 updatedTrackedAttribute:(id)arg2;
- (void)textController:(id)arg1 removedTrackedAttribute:(id)arg2;
- (void)textController:(id)arg1 addedTrackedAttribute:(id)arg2;
- (struct CGRect)usedLineRectForRange:(struct _NSRange)arg1;
- (struct CGRect)lineRectForRange:(struct _NSRange)arg1;
- (void)enumerateLineFragmentsForGlyphRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)textContainerChangedGeometry:(id)arg1;
- (void)textStorage:(id)arg1 edited:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4 invalidatedRange:(struct _NSRange)arg5;
- (void)replaceTextStorage:(id)arg1;
- (void)icReplaceTextStorage:(id)arg1;
- (void)drawGlyphsForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2 updateAttachments:(BOOL)arg3;
- (id)textContainerForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (void)drawGlyphsForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;
- (void)dealloc;
- (id)initForTemporaryProcessing:(BOOL)arg1;
- (id)init;

@end

