//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTDropHandler.h"

@interface TSTCellRangeDropHandler : TSTDropHandler
{
    BOOL _dropTargettingSameTable;
    BOOL _dropTargettingSameDocument;
    BOOL _allowDrop;
    CDStruct_0bda8247 _cellRangeDropHidden;
    struct TSUCellRect _sourceTableCellRange;
    CDStruct_945081a1 _cellRangeDropOffset;
}

@property(nonatomic) BOOL allowDrop; // @synthesize allowDrop=_allowDrop;
@property(nonatomic) BOOL dropTargettingSameDocument; // @synthesize dropTargettingSameDocument=_dropTargettingSameDocument;
@property(nonatomic) BOOL dropTargettingSameTable; // @synthesize dropTargettingSameTable=_dropTargettingSameTable;
@property(nonatomic) CDStruct_1ef3fb1f cellRangeDropOffset; // @synthesize cellRangeDropOffset=_cellRangeDropOffset;
@property(nonatomic) CDStruct_d65e47c4 cellRangeDropHidden; // @synthesize cellRangeDropHidden=_cellRangeDropHidden;
@property(nonatomic) struct TSUCellRect sourceTableCellRange; // @synthesize sourceTableCellRange=_sourceTableCellRange;
- (BOOL)allowDropAtPoint:(struct CGPoint)arg1 dragInfo:(id)arg2;
- (void)updateDragAndDropCellRegionForPoint:(struct CGPoint)arg1;
- (unsigned long long)dragOperationForDragInfo:(id)arg1 atPoint:(struct CGPoint)arg2;

@end

