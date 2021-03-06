//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPContainedObject.h"

@interface TSTTableTileRowInfo : TSPContainedObject
{
    struct __CFData *mStorageBuffer;
    unsigned short mStorageOffsets[255];
    unsigned short mBufferSize;
    unsigned short mTileRowIndex;
    unsigned short mCellCount;
    unsigned char mMaxTileColumnIndex;
    BOOL mMaxTileColumnIndexValid;
    unsigned char mStorageVersion;
}

@property(readonly, nonatomic) unsigned short cellCount; // @synthesize cellCount=mCellCount;
@property(nonatomic) unsigned short tileRowIndex; // @synthesize tileRowIndex=mTileRowIndex;
- (void)enumerateStoragesInColumnRange:(struct _NSRange)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)description;
- (id)p_debugDumpCompact;
- (void)validate;
- (void)debugDump;
- (void)saveToArchive:(struct TileRowInfo *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct TileRowInfo *)arg1 owner:(id)arg2;
- (void)dealloc;
- (id)initWithOwner:(id)arg1 tileRowIndex:(unsigned short)arg2;
- (void)i_upgradeWithDataStore:(id)arg1;

@end

