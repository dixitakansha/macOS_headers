//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDShapeLayout.h"

@class NSObject, TSDConnectionLinePathSource, TSDInfoGeometry, TSDLayout, TSUBezierPath;
@protocol TSDInfo;

@interface TSDConnectionLineAbstractLayout : TSDShapeLayout
{
    TSUBezierPath *mClippedBezierPath;
    TSDConnectionLinePathSource *mOriginalPathSource;
    TSDConnectionLinePathSource *mConnectedPathSource;
    TSDInfoGeometry *mConnectedInfoGeometry;
    TSDLayout *mConnectedFrom;
    TSDLayout *mConnectedTo;
    NSObject<TSDInfo> *mConnectedFromInfo;
    NSObject<TSDInfo> *mConnectedToInfo;
    TSUBezierPath *mCachedFromWrapPath;
    TSUBezierPath *mCachedToWrapPath;
    double mCachedFromOutset;
    double mCachedToOutset;
    TSUBezierPath *mCachedFromOutsetWrapPath;
    TSUBezierPath *mCachedToOutsetWrapPath;
    TSDLayout *mOldConnectedFrom;
    TSDLayout *mOldConnectedTo;
    BOOL mValidConnections;
    BOOL mVisibleLine;
    BOOL mValidLine;
    struct CGPoint mLooseEndPosition;
    struct CGPoint mAcumulatedDrag;
    char mUseResizePoints[3];
    struct CGPoint mResizeControlPoints[3];
    BOOL mUseDynamicOutsets;
    double mDynamicOutsetFrom;
    double mDynamicOutsetTo;
    unsigned long long mDynamicOutsetType;
}

+ (id)localizedDescriptionForConnectionType:(int)arg1;
@property(nonatomic) unsigned long long dynamicOutsetType; // @synthesize dynamicOutsetType=mDynamicOutsetType;
@property(nonatomic) double dynamicOutsetTo; // @synthesize dynamicOutsetTo=mDynamicOutsetTo;
@property(nonatomic) double dynamicOutsetFrom; // @synthesize dynamicOutsetFrom=mDynamicOutsetFrom;
@property(nonatomic) BOOL useDynamicOutsets; // @synthesize useDynamicOutsets=mUseDynamicOutsets;
@property(readonly, nonatomic) BOOL validLine; // @synthesize validLine=mValidLine;
@property(nonatomic) NSObject<TSDInfo> *connectedToInfo; // @synthesize connectedToInfo=mConnectedToInfo;
@property(nonatomic) NSObject<TSDInfo> *connectedFromInfo; // @synthesize connectedFromInfo=mConnectedFromInfo;
@property(nonatomic) TSDLayout *connectedTo; // @synthesize connectedTo=mConnectedTo;
@property(nonatomic) TSDLayout *connectedFrom; // @synthesize connectedFrom=mConnectedFrom;
- (id)p_infoForConnectingToInfo:(id)arg1;
- (BOOL)p_isInfoAKeynoteMasterObject:(id)arg1;
- (BOOL)shouldAdjustForStrokeWidthForCollabCursor;
- (void)dynamicallyMovedSmartShapeKnobTo:(struct CGPoint)arg1 withTracker:(id)arg2;
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;
- (void)takeSizeFromTracker:(id)arg1;
- (void)endDynamicOutsetChange;
- (void)beginDynamicOutsetChange;
- (void)toggleConnectionType;
- (id)commandForSettingConnectionType:(int)arg1;
@property(nonatomic) int connectionType;
- (BOOL)isStraightLine;
- (void)pauseDynamicTransformation;
- (struct CGPoint)i_accumulatedDrag;
- (void)endDynamicOperation;
- (void)beginDynamicOperation;
- (BOOL)shouldDisplayGuides;
- (struct CGPoint)unclippedTailPoint;
- (struct CGPoint)unclippedHeadPoint;
- (id)path;
- (BOOL)pathIsOpen;
- (BOOL)pathIsLineSegment;
- (void)invalidatePath;
- (struct CGRect)boundsForStandardKnobs;
- (id)layoutInfoGeometry;
- (id)pathSource;
@property(readonly, nonatomic) TSDConnectionLinePathSource *connectedPathSource;
- (int)wrapType;
- (BOOL)canResetTextAndObjectHandles;
- (BOOL)canBeIntersected;
- (BOOL)canFlip;
- (BOOL)canEndpointsCoincide;
- (BOOL)isInvisible;
- (void)updateConnectedPath;
- (id)clipPath:(id)arg1 onLayout:(id)arg2 outset:(double)arg3 reversed:(BOOL)arg4 isValid:(char *)arg5;
- (struct CGPoint)controlPointForPointA:(struct CGPoint)arg1 pointB:(struct CGPoint)arg2 andOriginalA:(struct CGPoint)arg3 originalB:(struct CGPoint)arg4;
- (id)createConnectedPathFrom:(id)arg1 to:(id)arg2 withControlPoints:(struct CGPoint [3])arg3;
- (void)checkConnections;
- (void)invalidateSize;
- (void)invalidatePosition;
- (void)invalidateConnections;
- (void)removeConnections;
- (void)invalidateAndCleanupConnectedLayouts;
- (void)connectedLayoutDisconnected:(id)arg1;
- (void)connectedLayoutInvalidated:(id)arg1;
- (void)processChangedProperty:(int)arg1;
- (void)parentDidChange;
- (BOOL)supportsFlipping;
- (BOOL)supportsRotation;
- (BOOL)supportsResize;
- (BOOL)p_isConnectedToLockedObjects;
- (BOOL)isDraggable;
- (id)additionalLayoutsForRepCreation;
- (id)reliedOnLayouts;
- (BOOL)shouldValidate;
- (id)connectionLineInfo;
@property(readonly, nonatomic) double outsetTo;
@property(readonly, nonatomic) double outsetFrom;
- (void)dealloc;
- (id)newProxyWithEditor:(id)arg1 documentRoot:(id)arg2;

@end

