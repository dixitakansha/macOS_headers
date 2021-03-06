//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDMediaInfo.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSDAttachmentAwareContainerInfo-Protocol.h"
#import "TSDCompatibilityAwareMediaContainer-Protocol.h"
#import "TSDContainerInfo-Protocol.h"
#import "TSDKeyValueProxyVending-Protocol.h"
#import "TSDMixing-Protocol.h"
#import "TSDPasteboardImageDataProvider-Protocol.h"
#import "TSDReducibleImageContainer-Protocol.h"
#import "TSKTransformableObject-Protocol.h"
#import "TSSPresetSource-Protocol.h"

@class NSArray, NSObject, NSSet, NSString, TSDImageAdjustments, TSDImageDataHelper, TSDInfoGeometry, TSDMaskInfo, TSDMediaStyle, TSDReplaceableMediaMap, TSPData, TSPObject, TSUBezierPath;
@protocol TSDContainerInfo, TSDOwningAttachment;

@interface TSDImageInfo : TSDMediaInfo <GSSPAutoEncodable, TSDKeyValueProxyVending, TSDPasteboardImageDataProvider, TSDReducibleImageContainer, TSDContainerInfo, TSDMixing, TSSPresetSource, TSKTransformableObject, TSDCompatibilityAwareMediaContainer, TSDAttachmentAwareContainerInfo>
{
    TSPData *mImageData;
    TSPData *mThumbnailImageData;
    TSPData *mOriginalImageData;
    TSDImageAdjustments *mImageAdjustments;
    TSPData *mAdjustedImageData;
    TSPData *mThumbnailAdjustedImageData;
    TSDImageDataHelper *mImageDataHelper;
    TSDImageDataHelper *mAdjustedImageDataHelper;
    TSPData *mEnhancedImageData;
    TSDMediaStyle *mStyle;
    TSDMaskInfo *mMaskInfo;
    TSUBezierPath *mInstantAlphaPath;
    TSUBezierPath *mTracedPath;
    struct CGSize mNaturalSize;
    BOOL mCurrentlyInDocument;
    double mDescentForInlineLayout;
    BOOL mDescentForInlineLayoutValid;
}

+ (id)presetKinds;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 reservedCount:(unsigned long long)arg4;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)bootstrapPropertyMapForPresetIndex:(unsigned long long)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (void)adjustIncomingImageGeometry:(id)arg1 maskGeometry:(id)arg2 forImageData:(id)arg3 maskedWithInstantAlphaPath:(id)arg4 withNaturalSize:(struct CGSize)arg5 forTargetImageGeometry:(id)arg6 withTargetMaskGeometry:(id)arg7;
+ (id)i_thumbnailForImageData:(id)arg1;
@property(retain, nonatomic) TSPData *adjustedImageData; // @synthesize adjustedImageData=mAdjustedImageData;
@property(copy, nonatomic) TSDImageAdjustments *imageAdjustments; // @synthesize imageAdjustments=mImageAdjustments;
@property(retain, nonatomic) TSDMaskInfo *maskInfo; // @synthesize maskInfo=mMaskInfo;
- (id)style;
@property(retain, nonatomic) TSPData *originalImageData; // @synthesize originalImageData=mOriginalImageData;
@property(retain, nonatomic) TSPData *thumbnailImageData; // @synthesize thumbnailImageData=mThumbnailImageData;
@property(retain, nonatomic) TSPData *imageData; // @synthesize imageData=mImageData;
- (void).cxx_destruct;
- (id)mediaDataForDragging;
- (id)commandForTransformingByTransform:(struct CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect)arg4;
- (void)acceptVisitor:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)propertyNameForOriginalSizeCommand;
- (id)propertyNameForFlagsCommand;
@property(nonatomic) struct CGSize naturalSize;
@property(readonly, nonatomic) TSUBezierPath *tracedPath;
- (void)updateGeometryToReplaceMediaInfo:(id)arg1;
- (void)scaleDownSizeToFitWithinSize:(struct CGSize)arg1;
- (struct CGPoint)centerForReplacingWithNewMedia;
- (id)originalPDFDataForCopy;
- (id)promisedDataForType:(id)arg1;
- (id)typesToPromiseWhenCopyingSingleDrawable;
- (BOOL)hasPDFDataForCopy;
- (BOOL)isPDF;
- (id)updatedMaskInfoGeometryForImageDraggedBy:(struct CGPoint)arg1;
- (id)defaultMaskInfo;
- (id)defaultMaskInfoWithContext:(id)arg1;
- (BOOL)maskCanBeReset;
- (BOOL)isMasked;
- (id)objectForProperty:(int)arg1;
@property(readonly, nonatomic) double descentForInlineLayout;
- (void)setAdjustedImageData:(id)arg1 thumbnailData:(id)arg2;
@property(readonly, nonatomic) BOOL canAdjustImage;
@property(retain, nonatomic) TSUBezierPath *instantAlphaPath;
- (id)i_instantAlphaPathIgnoringNaturalSize;
@property(readonly, nonatomic) BOOL canBeMasked;
- (BOOL)canResetMediaSize;
- (struct CGSize)rawDataSize;
- (struct CGSize)defaultOriginalSize;
- (struct CGSize)originalSize;
- (void)setStyle:(id)arg1;
@property(readonly, nonatomic) BOOL isMathTypeEquation;
- (void)setImageData:(id)arg1 thumbnailData:(id)arg2;
- (id)mediaFileType;
- (id)mediaDisplayName;
- (BOOL)needsDownload;
- (id)compatibilityConverterForData:(id)arg1 associatedHint:(id)arg2 desiredCompatibilityLevel:(long long)arg3;
- (long long)mediaCompatibilityTypeForData:(id)arg1 associatedHint:(id)arg2;
- (id)compatibilityCheckerForData:(id)arg1 associatedHint:(id)arg2;
- (id)imageDataWithObjectContext:(id)arg1;
- (id)commandsForReplacingMediaInOldToNewMap:(id)arg1 associatedHints:(id)arg2;
- (struct CGSize)targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;
@property(readonly, nonatomic) TSDReplaceableMediaMap *datasForReplacingMediaContentsWithAssociatedHints;
@property(readonly, nonatomic) NSSet *infosToObserveForAttachedInfo;
- (BOOL)p_aspectRatioUnlockedResizeWouldCauseSkew;
- (BOOL)allowsParentGroupToBeResizedWithoutAspectRatioLock;
- (struct CGAffineTransform)computeFullTransform;
- (id)geometryWithMask;
- (id)infoForSelectionPath:(id)arg1;
@property(readonly, nonatomic) NSArray *childInfos;
- (id)styleIdentifierTemplateForNewPreset;
- (id)commandToFlipWithOrientation:(int)arg1;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (BOOL)canBeMediaPlaceholder;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
@property(readonly, nonatomic) TSDMediaStyle *imageStyle;
- (id)presetKind;
- (Class)editorClass;
- (Class)repClass;
- (Class)layoutClass;
- (Class)styleClass;
- (void)setExteriorTextWrap:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (id)copyWithContext:(id)arg1 style:(id)arg2;
- (void)dealloc;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 imageData:(id)arg4 thumbnailImageData:(id)arg5 originalImageData:(id)arg6 imageAdjustments:(id)arg7 adjustedImageData:(id)arg8 thumbnailAdjustedImageData:(id)arg9;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 imageData:(id)arg4 originalImageData:(id)arg5;
@property(retain, nonatomic) TSPData *enhancedImageData;
@property(retain, nonatomic) TSPData *thumbnailAdjustedImageData;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (id)p_displayableBuildOrderNameForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2 chunkIndex:(unsigned long long)arg3;
- (id)kn_typeName;
- (id)kn_defaultDescriptiveName;
- (id)initWithContext:(id)arg1 qdWebView:(id)arg2 state:(id)arg3;
- (id)initWithContext:(id)arg1 qdMediaInfo:(id)arg2 state:(id)arg3;
- (id)checkIsValidForInsert;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct ImageArchive *)arg1 archiver:(id)arg2;
- (void)p_upgradeImageThumbnail;
- (void)p_upgradeImageGeometry;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct ImageArchive *)arg1 unarchiver:(id)arg2;
- (id)gsspThumbnailImageDataWithRetainer:(struct GSSPRetainer *)arg1;
- (id)gsspInstantAlphaPath;
- (BOOL)gsspHasAlpha;
- (id)gsspNaturalSizeWithRetainer:(struct GSSPRetainer *)arg1;
- (id)gsspTracedPath;
- (_Bool)p_hasTextWrapFitContour;
- (void)populateGSSPImageInfo:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)newProxyWithEditor:(id)arg1 documentRoot:(id)arg2;
- (void)setMaskInfoGeometryInCanvas:(id)arg1;
- (id)maskInfoGeometryInCanvas;
- (void)setImageAndMaskInfoGeometry:(id)arg1;
- (BOOL)gilligan_computeHasAlpha;
- (void)tsaMoveToPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2;

// Remaining properties
@property(readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText; // @dynamic anchoredToText;
@property(readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText; // @dynamic floatingAboveText;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText; // @dynamic inlineWithText;
@property(nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // @dynamic owningAttachment;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse; // @dynamic owningAttachmentNoRecurse;
@property(readonly) Class superclass;

@end

