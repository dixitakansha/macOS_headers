//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTCellIterator.h"

@class TSTCell, TSTMasterLayout, TSTMutableCellIteratorData;
@protocol TSTCellIteratorData;

@interface TSTLayoutCellIterator : TSTCellIterator
{
    BOOL _queriedModel;
    BOOL _modelIteratorHasCell;
    unsigned int _numberOfLayoutColumns;
    unsigned int _numberOfColumns;
    unsigned int _numberOfRows;
    TSTMasterLayout *_masterLayout;
    struct TSUCellCoord _layoutCellID;
    TSTCell *_layoutCell;
    TSTMutableCellIteratorData *_layoutCellData;
    id <TSTCellIteratorData> _modelIteratorData;
    struct TSUCellRect _layoutRange;
}

@property(nonatomic) id <TSTCellIteratorData> modelIteratorData; // @synthesize modelIteratorData=_modelIteratorData;
@property(retain, nonatomic) TSTMutableCellIteratorData *layoutCellData; // @synthesize layoutCellData=_layoutCellData;
@property(nonatomic) unsigned int numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(nonatomic) unsigned int numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) unsigned int numberOfLayoutColumns; // @synthesize numberOfLayoutColumns=_numberOfLayoutColumns;
@property(nonatomic) BOOL modelIteratorHasCell; // @synthesize modelIteratorHasCell=_modelIteratorHasCell;
@property(nonatomic) BOOL queriedModel; // @synthesize queriedModel=_queriedModel;
@property(readonly, nonatomic) TSTCell *layoutCell; // @synthesize layoutCell=_layoutCell;
@property(readonly, nonatomic) struct TSUCellCoord layoutCellID; // @synthesize layoutCellID=_layoutCellID;
@property(readonly, nonatomic) struct TSUCellRect layoutRange; // @synthesize layoutRange=_layoutRange;
@property(readonly, retain, nonatomic) TSTMasterLayout *masterLayout; // @synthesize masterLayout=_masterLayout;
- (void).cxx_destruct;
- (BOOL)getNextCellData:(id *)arg1;
- (id)initWithMasterLayout:(id)arg1 range:(struct TSUCellRect)arg2 flags:(unsigned long long)arg3 searchFlags:(unsigned long long)arg4;
- (id)initWithLayout:(id)arg1 range:(struct TSUCellRect)arg2 flags:(unsigned long long)arg3 searchFlags:(unsigned long long)arg4;

@end

