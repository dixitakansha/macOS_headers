//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDStyledDrawableEditor.h"

#import "TSDKeyValueProxyVendingEditor-Protocol.h"
#import "TSDMacInspectorRefreshDelegate-Protocol.h"
#import "TSDStylePresetsInspectorPaneDelegate-Protocol.h"

@class NSSet, NSString, TSDEditorController, TSDPathEditor, TSKDocumentRoot;
@protocol TSKSearchReference;

@interface TSDShapeEditor : TSDStyledDrawableEditor <TSDKeyValueProxyVendingEditor, TSDMacInspectorRefreshDelegate, TSDStylePresetsInspectorPaneDelegate>
{
    BOOL mAnyInfoWasLine;
    BOOL mFillInspectorDisclosed;
    TSDPathEditor *mNextPathEditor;
}

+ (id)keyPathsForValuesAffectingSelectedObjectsSupportingFill;
+ (BOOL)infosSupportEndpoints:(id)arg1;
+ (BOOL)infosAreConnectionLines:(id)arg1;
+ (BOOL)infosAreMixedOpenPathsAndLines:(id)arg1;
+ (BOOL)infosAreMixedOpenAndClosedPaths:(id)arg1;
+ (BOOL)infosAreOpenPaths:(id)arg1;
+ (BOOL)infosAreLines:(id)arg1;
+ (BOOL)anyInfoIsOpenPath:(id)arg1;
+ (BOOL)anyInfoIsLine:(id)arg1;
+ (Class)touchBarProviderClass;
+ (id)keysResolvedByKeyValueProxy;
@property(nonatomic) BOOL p_anyInfoWasLine; // @synthesize p_anyInfoWasLine=mAnyInfoWasLine;
@property(nonatomic) __weak TSDPathEditor *nextPathEditor; // @synthesize nextPathEditor=mNextPathEditor;
@property(nonatomic) BOOL fillInspectorDisclosed; // @synthesize fillInspectorDisclosed=mFillInspectorDisclosed;
- (void).cxx_destruct;
- (void)didReplaceTopLevelInspectors;
- (BOOL)shouldReplaceTopLevelInspectorPanesForChangeRecords:(id)arg1 forChangeSource:(id)arg2;
- (id)observableModelsForTopLevelInspectorReplacement;
- (BOOL)p_leftLineEndIsHeadForInfo:(id)arg1;
- (struct CGSize)imageSizeForPreset:(id)arg1 swatchSize:(struct CGSize)arg2;
- (id)swatchRenderingOperationForPreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect)arg4 view:(id)arg5;
- (id)stylePresetHint;
- (id)imageForPreset:(id)arg1 size:(struct CGSize)arg2;
- (void)stylePresetInspector:(id)arg1 applyPresetForRedefine:(id)arg2 toObject:(id)arg3;
- (void)stylePresetInspector:(id)arg1 didSelectPreset:(id)arg2 useAlternateApplicationBehavior:(BOOL)arg3;
- (void)stylePresetInspector:(id)arg1 didSelectPreset:(id)arg2;
- (id)newApplyPresetCommandFromShape:(id)arg1 preset:(id)arg2 applyTextStyle:(BOOL)arg3;
- (id)stylePresetKindForInspector;
- (BOOL)p_containsOpenPaths;
- (void)addContextualMenuItemsToMenu:(id)arg1 clickAtPoint:(struct CGPoint)arg2 withEvent:(id)arg3;
- (id)newMouseEventHandlerAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)topLevelInspectorAutosaveName;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingSmartShapeAttributes;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingEndpoints;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingFill;
- (void)setLineEnd:(id)arg1 isLeftLineEnd:(BOOL)arg2;
- (void)setStyleValue:(id)arg1 forStyleProperty:(int)arg2;
- (void)p_applyTransformFromInfo:(id)arg1 toEditablePathSource:(id)arg2;
- (void)saveUserDefinedShape:(id)arg1;
- (void)divideCompoundShape:(id)arg1;
- (void)resetTextAndObjectHandles:(id)arg1;
- (void)performBooleanOperationOnPaths:(unsigned long long)arg1;
- (void)intersectPaths:(id)arg1;
- (void)makePathEditable:(id)arg1;
- (void)makePathSmooth:(id)arg1;
- (void)makePathSharp:(id)arg1;
- (BOOL)canAddOrShowComment;
- (BOOL)canSaveUserDefinedShape;
- (BOOL)p_shapeLacksEnoughStyleToBeSavedAsCustom:(id)arg1;
- (BOOL)canDivideCompoundShape;
- (BOOL)canResetTextAndObjectHandles;
- (BOOL)canIntersectPaths;
- (BOOL)canMakePathSmoothOrSharp;
- (BOOL)canMakePathEditable;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)shouldShowShapeIntersectionInspector;
- (BOOL)shouldShowLineInspector;
- (BOOL)shouldShowCalloutInspector;
- (BOOL)shouldShowArrowInspector;
- (BOOL)shouldShowStarInspector;
- (BOOL)shouldShowPolygonInspector;
- (BOOL)shouldShowRoundedRectInspector;
- (BOOL)shouldShowInspectorForPointPathSourceOfTypes:(id)arg1;
- (BOOL)shouldShowInspectorForScalarPathSourceOfType:(int)arg1;
- (BOOL)suppressesPresetInspector;
- (BOOL)suppressesStyleInspector;
- (BOOL)suppressesTextInspector;
- (BOOL)suppressesFillInspector;
- (BOOL)infosSupportEndpoints;
- (BOOL)infosAreConnectionLines;
- (BOOL)infosAreLines;
- (BOOL)infosAreMixedOpenAndClosedPaths;
- (BOOL)infosAreOpenPaths;
- (id)nextEditorForSelection:(id)arg1 withNewEditorStack:(id)arg2 selectionPath:(id)arg3;
- (id)firstShapeInfo;
- (id)pagesFormatInspectorPaneIdentifiers;
- (void)tma_setupStylePickerIdentifiers:(id)arg1;
- (id)tma_formatInspectorPaneIdentifiers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) TSKDocumentRoot *documentRoot;
@property(readonly, nonatomic) id <TSKSearchReference> editingSearchReference;
@property(retain, nonatomic) TSDEditorController *editorController;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingAttribution;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingCalloutAttributes;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingConnectionLineAttributes;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingEditRecording;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingFreehandAnimations;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingOpacity;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingReflection;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingReplacement;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingResize;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingShadow;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingShrinkTextToFit;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingStroke;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingTextInset;
@property(readonly) Class superclass;

@end

