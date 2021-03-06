//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

#import "TSKSelectionTransformer-Protocol.h"

@class NSString, TSDInfoCollectionSelectionTransformerHelper, TSKSelection;

@interface KNNoteCanvasSelectionTransformer : TSPObject <TSKSelectionTransformer>
{
    TSDInfoCollectionSelectionTransformerHelper *_infoCollectionHelper;
}

- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)nextSelectionTransformerForSelection:(id)arg1;
@property(readonly, nonatomic, getter=isShadowedByTransform) BOOL shadowedByTransform;
@property(readonly, nonatomic) TSKSelection *transformedSelection;
- (void)transformWithOperationTransformer:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 infoCollectionHelper:(id)arg2;
- (id)initWithContext:(id)arg1 canvasSelection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

