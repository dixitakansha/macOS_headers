//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDDrawableInfo.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSCECalculationEngineRegistration-Protocol.h"
#import "TSCEFormulaOwning-Protocol.h"
#import "TSCEReferenceResolving-Protocol.h"
#import "TSCETableModeling-Protocol.h"
#import "TSDCompatibilityAwareMediaContainer-Protocol.h"
#import "TSDContainerInfo-Protocol.h"
#import "TSDKeyValueProxyVending-Protocol.h"
#import "TSDMixing-Protocol.h"
#import "TSDReducibleImageContainer-Protocol.h"
#import "TSDReplaceableMediaContainer-Protocol.h"
#import "TSDUndoObjectAdditionalCopying-Protocol.h"
#import "TSKCollaborationConvergenceChecking-Protocol.h"
#import "TSKCustomFormatContainingInfo-Protocol.h"
#import "TSKModel-Protocol.h"
#import "TSKSearchable-Protocol.h"
#import "TSSPresetSource-Protocol.h"
#import "TSSStyleClient-Protocol.h"
#import "TSWPStorageParent-Protocol.h"

@class NSDictionary, NSObject, NSSet, NSString, TSDInfoGeometry, TSPObject, TSTActionVerifier, TSTEditingState, TSTMasterLayout, TSTTableModel, TSTTablePartitioner, TSWPStorage;
@protocol TSDContainerInfo, TSDOwningAttachment;

@interface TSTTableInfo : TSDDrawableInfo <TSDReplaceableMediaContainer, TSDReducibleImageContainer, TSDCompatibilityAwareMediaContainer, TSCEReferenceResolving, GSSPAutoEncodable, TSDKeyValueProxyVending, TSCECalculationEngineRegistration, TSCEFormulaOwning, TSCETableModeling, TSKCustomFormatContainingInfo, TSKModel, TSKSearchable, TSSPresetSource, TSSStyleClient, TSDContainerInfo, TSDMixing, TSWPStorageParent, TSKCollaborationConvergenceChecking, TSDUndoObjectAdditionalCopying>
{
    TSTTableModel *mTableModel;
    BOOL mIsFormulaEditing;
    BOOL mHasReference;
    BOOL mMigratingStylesOnly;
    TSTTablePartitioner *mPartitioner;
    TSTMasterLayout *mMasterLayout;
    TSTActionVerifier *mActionVerifier;
    TSTEditingState *mEditingState;
    TSWPStorage *mTableNameEditingStorage;
}

+ (void)ensureAllTablesAreRegisteredInDocumentRoot:(id)arg1;
+ (void)performRewritesForInsertedTableInfos:(id)arg1;
+ (BOOL)validateNewName:(id)arg1 forTable:(id)arg2;
+ (id)presetKinds;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 reservedCount:(unsigned long long)arg4;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (BOOL)canPartition;
+ (BOOL)needsObjectUUID;
+ (id)tablePrototypeWithIndex:(long long)arg1 context:(id)arg2 geometry:(id)arg3 styles:(id)arg4;
+ (id)geometryForPrototypeIndex:(long long)arg1 withCanvasPoint:(struct CGPoint)arg2;
+ (unsigned short)numberOfColumnsForProtoIndex:(unsigned long long)arg1;
+ (unsigned short)numberOfRowsForProtoIndex:(unsigned long long)arg1;
+ (struct TSCETableReference)makeCellReferenceInSameTable:(const struct TSCETableReference *)arg1 cellID:(struct TSUCellCoord)arg2;
+ (void)prefetchData:(struct TSCEReferenceValue *)arg1 fromVectorObject:(struct TSCETableReferenceVector *)arg2 cellID:(struct TSUCellCoord)arg3;
+ (struct TSCETableReferenceVector)makeReferenceVectorWithReference:(const struct TSCETableReference *)arg1 rangeContext:(unsigned char)arg2 apparentRangePtr:(struct TSCERangeCoordinate *)arg3;
+ (struct TSCETableReference)canonicalCellReferenceForReference:(const struct TSCETableReference *)arg1;
+ (id)resolverMatchingNameWithContextContainer:(id)arg1 inDocumentRoot:(id)arg2 contextContainerName:(id)arg3;
+ (id)resolverMatchingName:(id)arg1 inDocumentRoot:(id)arg2 contextResolver:(id)arg3;
+ (id)resolverContainerMatchingName:(id)arg1 inDocumentRoot:(id)arg2;
+ (int)getHidingAction:(const struct TSCETableReference *)arg1;
+ (CDStruct_fc93c73e)getRangeReference:(const struct TSCETableReference *)arg1;
+ (struct TSCERangeCoordinate)getRange:(const struct TSCETableReference *)arg1;
+ (struct TSCEFormat)format:(const struct TSCETableReference *)arg1 fromCell:(struct TSUCellCoord)arg2;
+ (struct TSCEFormat)formatFromVector:(const struct TSCETableReferenceVector *)arg1 atIndex:(unsigned long long)arg2;
+ (int)mergeReferences:(struct TSCETableReference *)arg1 left:(const struct TSCETableReference *)arg2 right:(const struct TSCETableReference *)arg3;
+ (struct TSCEValue)scalarValue:(const struct TSCETableReference *)arg1 fromCell:(struct TSUCellCoord)arg2 permitAccessInsideMergeRegions:(_Bool)arg3 fetchRichTextAttributesIfPlainText:(_Bool)arg4;
+ (struct TSUCellCoord)resolvedCellIDForScalarAccess:(struct TSCETableReference)arg1 fromCell:(struct TSUCellCoord)arg2;
+ (struct TSCEValue)valueForTable:(id)arg1 cellID:(struct TSUCellCoord)arg2 fetchRichTextAttributesIfPlainText:(_Bool)arg3;
+ (id)listStyleWithContext:(id)arg1 stylesheet:(id)arg2;
+ (id)paragraphStyleWithContext:(id)arg1 stylesheet:(id)arg2;
+ (id)shapeStyleWithContext:(id)arg1 stylesheet:(id)arg2;
@property(nonatomic) BOOL hasReference; // @synthesize hasReference=mHasReference;
@property(retain, nonatomic) TSWPStorage *tableNameEditingStorage; // @synthesize tableNameEditingStorage=mTableNameEditingStorage;
@property(readonly, nonatomic) TSTEditingState *editingState; // @synthesize editingState=mEditingState;
- (id)commandToRemoveHyperlinkInRange:(struct _NSRange)arg1 fromCellStorage:(id)arg2;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1 styleComparisonBlock:(CDUnknownBlockType)arg2;
- (void)reassignPasteboardCustomFormatKeys;
- (void)upgradeFormatsForCustomFormatListU2_0;
- (id)commandToReplaceCustomFormat:(id)arg1 withReplacementFormat:(id)arg2;
- (id)changeDetailsForCustomFormatListDidUpdateToCustomFormat:(id)arg1;
- (void)prepareForPasteWithSourceOffset:(CDStruct_1ef3fb1f)arg1;
- (void)setupForPasteboard;
- (void)didReplaceTextsInStoragesWithPlaceHolderString;
@property(readonly, copy, nonatomic) NSSet *allRichTextPayloadStorages;
- (BOOL)textIsVertical;
- (BOOL)autoListTermination;
- (BOOL)autoListRecognition;
- (void)didCopy;
- (void)willCopyWithOtherDrawables:(id)arg1;
- (void)debugDump;
- (void)validate;
@property(readonly, nonatomic) struct TSUCellRect editingCellRange;
- (void)assertCollaborationConvergence;
- (id)commandForTransformingByTransform:(struct CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect)arg4;
- (BOOL)shouldCancelScrollingToSelectionPath:(id)arg1 forChanges:(id)arg2;
- (id)presetKind;
- (id)collaboratorCursorForSelectionPath:(id)arg1;
- (BOOL)prohibitsModificationToChildren;
- (id)infoForSelectionPath:(id)arg1;
- (id)childInfos;
- (id)trackerForController:(id)arg1;
- (id)mergedContainedStorages;
- (id)descriptionForPasteboardWithSource:(id)arg1;
- (id)descriptionForPasteboard;
- (id)p_descriptionOfGeneralInformation;
- (id)p_descriptionOfHeaderFooterAreas;
- (id)p_descriptionOfTableID;
- (void)replaceReferencedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (id)referencedStyles;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)childCommandForReplaceAllCommand:(id)arg1;
- (void)enumerateAllAnnotationsInModelWithHitBlock:(CDUnknownBlockType)arg1;
- (id)searchForAnnotationsWithHitBlock:(CDUnknownBlockType)arg1;
- (id)searchForString:(id)arg1 options:(unsigned long long)arg2 searchCanvasDelegate:(id)arg3 onHit:(CDUnknownBlockType)arg4;
- (void)acceptVisitor:(id)arg1;
- (id)childEnumerator;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (void)scaleInfoGeometry:(struct CGSize)arg1;
@property(nonatomic) long long contentWritingDirection;
@property(copy, nonatomic) TSDInfoGeometry *geometry; // @dynamic geometry;
- (void)setPrimitiveGeometry:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (void)p_bakeMixedCellStrokesIntoTable:(id)arg1 outgoingTable:(id)arg2 incomingTable:(id)arg3 fraction:(double)arg4;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)localizedChunkNameForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2 chunkIndex:(unsigned long long)arg3;
- (id)p_containedTextForTableDeliveryStyle:(int)arg1 chunkIndex:(unsigned long long)arg2;
- (BOOL)reverseChunkingIsSupported;
- (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1;
- (id)textureDeliveryStylesLocalized:(BOOL)arg1 animationFilter:(id)arg2;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2;
- (void)p_performCommentStorageDOLC:(id)arg1;
- (id)applyCellDiff:(id)arg1 atCellID:(struct TSUCellCoord)arg2 migrationMap:(id)arg3 inverseCellDiff:(id)arg4 defaultCellStyle:(id)arg5 defaultTextStyle:(id)arg6;
- (id)applyCellDiff:(id)arg1 atCellID:(struct TSUCellCoord)arg2 migrationMap:(id)arg3;
- (Class)layoutClass;
@property(readonly, nonatomic) BOOL supportsRichTextUndo;
- (BOOL)supportsAttachedComments;
- (int)elementKind;
@property(readonly, nonatomic) TSTActionVerifier *actionVerifier;
- (id)p_masterLayoutCreateIfNeeded:(BOOL)arg1;
@property(readonly, nonatomic) TSTMasterLayout *masterLayout;
- (void)clearPartitioner;
@property(readonly, nonatomic) TSTTablePartitioner *partitioner;
- (BOOL)isSelectable;
- (BOOL)supportsHyperlinks;
- (Class)drawableSelectionTransformerClass;
- (Class)editorClass;
@property(readonly, nonatomic) struct TSUCellCoord previousEditingCellID;
@property(nonatomic) struct TSUCellCoord editingCellID;
- (Class)repClass;
@property(readonly, nonatomic) TSTTableModel *tableModel;
- (id)documentRoot;
- (BOOL)isSafeToConvertToText;
- (BOOL)isSafeToConvertToAttributedString;
- (BOOL)isSafeToConvertToImage;
- (double)masterLayoutEffectiveTableNameHeight;
- (void)shiftGeometryToIncludeTableNameHeight;
- (void)p_didLoadRichTextPayloadTable:(id)arg1;
- (id)componentRootObject;
- (id)additionalObjectsToCopy;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct TableInfoArchive *)arg1 archiver:(id)arg2;
- (id)subclassInitFromUnarchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct TableInfoArchive *)arg1 unarchiver:(id)arg2;
- (void)setupTableModelForPrototypeIndex:(long long)arg1;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1;
- (void)upgradeDuringDocumentUpgradeIfNeeded:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 fromSourceInfo:(id)arg2 cellRegion:(id)arg3 tableModel:(id)arg4 waitForCalcEngine:(BOOL)arg5;
- (id)initWithContext:(id)arg1 fromSourceInfo:(id)arg2 cellRegion:(id)arg3 waitForCalcEngine:(BOOL)arg4;
- (id)initWithContext:(id)arg1 otherTableInfo:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 styles:(id)arg3;
- (id)initForTestingWithContext:(id)arg1 rows:(unsigned short)arg2 columns:(unsigned short)arg3;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 rows:(unsigned short)arg3 columns:(unsigned short)arg4;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 rows:(unsigned short)arg3 columns:(unsigned short)arg4 stylePreset:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 rows:(unsigned short)arg3 columns:(unsigned short)arg4 styles:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 rows:(unsigned short)arg3 columns:(unsigned short)arg4 stylePreset:(id)arg5 styles:(id)arg6;
- (void)p_parseSeparatedValuesWorker:(id)arg1 parsingLock:(id)arg2;
- (id)p_trimmedAndNonEscapedStringFrom:(id)arg1;
- (void)p_parseSeparatedValuesFromParser:(id)arg1;
- (id)initWithContext:(id)arg1 styleMapper:(id)arg2 fileURL:(id)arg3 newDrawable:(BOOL)arg4;
- (id)compatibilityConverterForData:(id)arg1 associatedHint:(id)arg2 desiredCompatibilityLevel:(long long)arg3;
- (long long)mediaCompatibilityTypeForData:(id)arg1 associatedHint:(id)arg2;
- (id)compatibilityCheckerForData:(id)arg1 associatedHint:(id)arg2;
- (id)commandsForReplacingMediaInOldToNewDictionary:(id)arg1 associatedHints:(id)arg2;
- (id)p_combinedTableInfoHintFromReplacementDictionary:(id)arg1 andHintsDictionary:(id)arg2;
- (id)p_propertyMapForReplacingImageFill:(id)arg1 atCellID:(struct TSUCellCoord)arg2;
- (struct CGSize)targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;
@property(readonly, nonatomic) NSDictionary *datasForReplacingMediaContentsWithAssociatedHints;
- (id)p_imageFillAtCellID:(struct TSUCellCoord)arg1;
- (id)mergedStorageRepresentation;
- (id)cellTextStyle:(struct TSUCellCoord)arg1;
- (struct TSCERangeCoordinate)preMergeRangeFromUidTract:(id)arg1;
- (struct TSCERangeCoordinate)expandCellRangeToCoverMergedCells:(struct TSCERangeCoordinate)arg1;
- (id)UIDSetForRange:(struct _NSRange)arg1 isRows:(BOOL)arg2;
- (id)mutableIndexesForUIDSet:(id)arg1 isRows:(BOOL)arg2 notFoundUIDs:(id)arg3;
- (id)UIDSetForIndexes:(id)arg1 isRows:(BOOL)arg2;
- (vector_dadc1b26)UIDsForRange:(struct _NSRange)arg1 isRows:(BOOL)arg2;
- (id)indexesForUIDs:(const vector_dadc1b26 *)arg1 isRows:(BOOL)arg2;
- (vector_dadc1b26)UIDsForIndexes:(id)arg1 isRows:(BOOL)arg2;
- (unsigned short)indexForUID:(const UUIDData_5fbc143e *)arg1 isRows:(BOOL)arg2;
- (UUIDData_5fbc143e)UIDForIndex:(unsigned short)arg1 isRows:(BOOL)arg2;
- (vector_dadc1b26)columnUIDsForColumnRange:(struct _NSRange)arg1;
- (id)columnIndexesForUIDs:(const vector_dadc1b26 *)arg1;
- (vector_dadc1b26)columnUIDsForColumnIndexes:(id)arg1;
- (unsigned char)columnIndexForColumnUID:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)columnUIDForColumnIndex:(unsigned char)arg1;
- (vector_dadc1b26)rowUIDsForRowRange:(struct _NSRange)arg1;
- (id)rowIndexesForUIDs:(const vector_dadc1b26 *)arg1;
- (vector_dadc1b26)allColumnUIDs;
- (vector_dadc1b26)allRowUIDs;
- (vector_dadc1b26)rowUIDsForRowIndexes:(id)arg1;
- (unsigned short)rowIndexForRowUID:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)rowUIDForRowIndex:(unsigned short)arg1;
- (BOOL)hasNamesInHeaders;
- (struct __CFUUID *)conditionalStyleFormulaOwnerID;
- (void)resetAllFormulaDependenciesForCell:(struct TSUCellCoord)arg1;
- (void)resetDependenciesForCell:(struct TSUCellCoord)arg1;
- (BOOL)cellWasModifiedInThisRecalcCycle:(struct TSUCellCoord)arg1;
- (struct TSCERangeCoordinate)apparentRangeForRange:(struct TSCERangeCoordinate)arg1 rangeContext:(unsigned char)arg2;
- (struct TSCERangeCoordinate)footerRange;
- (struct TSCERangeCoordinate)tableRange;
- (struct TSCERangeCoordinate)bodyRange;
- (BOOL)hasCellID:(struct TSUCellCoord)arg1;
- (struct TSCETableReference)makeReference:(struct TSUCellCoord)arg1 bottomRight:(struct TSUCellCoord)arg2;
- (id)cellRangeName:(struct TSCERangeCoordinate)arg1 stickyBits:(unsigned char)arg2 isRangeWithFunction:(BOOL)arg3 quoteComponents:(BOOL)arg4 forceEscaping:(BOOL)arg5;
- (id)tableName;
- (id)sheetName;
- (struct __CFUUID *)mergeOwnerID;
- (BOOL)resolverIsATable;
- (UUIDData_5fbc143e)resolverUID;
- (struct __CFUUID *)resolverID;
- (id)calcEngine;
- (BOOL)p_tableContainsRightToLeft:(id)arg1;
- (void)populateGSSPTableInfo:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)newProxyWithEditor:(id)arg1 documentRoot:(id)arg2;
- (void)p_setupTableUsingDataSourceArchive:(id)arg1;
- (id)initWithContext:(id)arg1 styleMapper:(id)arg2 dataSourceArchive:(id)arg3;
- (void)resetColumnsToUnwrappedFittingWidths;
- (id)unwrappedBodyTextCellStyle;
- (void)resetRowHeightsForImportingFromDataSource;
- (id)initWithContext:(id)arg1 styleMapper:(id)arg2 radarData:(id)arg3;
- (id)initWithContext:(id)arg1 styleMapper:(id)arg2 iTunesData:(id)arg3;
- (id)initWithContext:(id)arg1 styleMapper:(id)arg2 contactsUIDData:(id)arg3;
- (id)initWithContext:(id)arg1 styleMapper:(id)arg2 contactsDictData:(id)arg3;
- (void)coalesceChanges:(id)arg1;
- (id)tableTileSliceIdAtIndex:(unsigned long long)arg1;
- (id)htmlRepresentationWithPromise:(id)arg1;
- (id)rtfdRepresentationWithPromise:(id)arg1;
- (id)rtfRepresentationWithPromise:(id)arg1;
- (id)p_representationWithPromise:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)p_attributedStringRepresentation;
- (id)p_attributedStringForCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2 mergeRange:(struct TSUCellRect)arg3 layout:(id)arg4 textTable:(id)arg5 attributedStringCache:(id)arg6;
- (void)p_mapTextBlockBorderStyle:(id)arg1 fromCellRange:(struct TSUCellRect)arg2;
- (id)p_attributedStringForCellContents:(id)arg1 atCellID:(struct TSUCellCoord)arg2 attributedStringCache:(id)arg3;
- (id)initWithContext:(id)arg1 styleMapper:(id)arg2 attributedString:(id)arg3 textTable:(id)arg4 pasteSource:(int)arg5;
- (CDStruct_1ef3fb1f)p_makeCellsFromAttributedString:(id)arg1 textTable:(id)arg2 atCellOffset:(CDStruct_1ef3fb1f)arg3 pasteSource:(int)arg4;
- (void)updateCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2 fromAttributedString:(id)arg3 andTextTableBlock:(id)arg4 pasteSource:(int)arg5 styleMapper:(id)arg6 pasteAsPlainTextRules:(BOOL)arg7;
- (BOOL)p_strokeIsExcelDefault:(id)arg1 width:(double)arg2;
- (id)tabularTextRepresentation;
- (id)objectToArchiveInDependencyTracker;
- (void)releaseForCalculationEngine:(id)arg1;
- (void)retainForCalculationEngine:(id)arg1;
- (id)endRewriteForCalculationEngine:(id)arg1 spec:(id)arg2;
- (void)beginRewriteForCalculationEngine:(id)arg1 spec:(id)arg2;
- (void)rewriteForCalculationEngine:(id)arg1 formulaID:(CDStruct_a91f2c80)arg2 rewriteSpec:(id)arg3;
- (void)invalidateForCalculationEngine:(id)arg1;
- (void)writeResultsForCalculationEngine:(id)arg1;
- (CDStruct_2c3aca9f)recalculateForCalculationEngine:(id)arg1 formulaID:(CDStruct_a91f2c80)arg2 isInCycle:(BOOL)arg3 hasCalculatedPrecedents:(BOOL)arg4;
- (void)notifyTableOfNewResults;
- (void)performReadForOneOffFormulaEvaluation:(id)arg1 forCellID:(struct TSUCellCoord *)arg2;
- (void)unregisterFromCalculationEngine:(id)arg1;
- (int)registerWithCalculationEngine:(id)arg1;
- (BOOL)isRegisteredWithCalculationEngine:(id)arg1;
- (BOOL)registerLast;
- (struct __CFUUID *)formulaOwnerID;
- (void)registerWithCalculationEngineForDocumentLoad:(id)arg1;
- (id)checkIsValidForInsert;
- (long long)compareToOtherTSTableInfo:(id)arg1;
- (id)csvStringForRows:(unsigned short)arg1 rowCount:(unsigned short)arg2;
- (id)csvString;

// Remaining properties
@property(readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText; // @dynamic anchoredToText;
@property(readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText; // @dynamic floatingAboveText;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText; // @dynamic inlineWithText;
@property(nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // @dynamic owningAttachment;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse; // @dynamic owningAttachmentNoRecurse;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo; // @dynamic parentInfo;
@property(readonly) Class superclass;

@end

