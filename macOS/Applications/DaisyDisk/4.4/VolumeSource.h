//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FileSource.h"

@class DiskProperties, NSString;

@interface VolumeSource : FileSource
{
    BOOL _isFirstSlice;
    BOOL _isLastSlice;
    DiskProperties *_diskProperties;
    unsigned long long _capacityBytes;
    unsigned long long _freeBytes;
    unsigned long long _recoverableBytes;
}

@property(readonly, nonatomic) unsigned long long recoverableBytes; // @synthesize recoverableBytes=_recoverableBytes;
@property(readonly, nonatomic) unsigned long long freeBytes; // @synthesize freeBytes=_freeBytes;
@property(readonly, nonatomic) unsigned long long capacityBytes; // @synthesize capacityBytes=_capacityBytes;
@property(readonly, nonatomic) BOOL isLastSlice; // @synthesize isLastSlice=_isLastSlice;
@property(readonly, nonatomic) BOOL isFirstSlice; // @synthesize isFirstSlice=_isFirstSlice;
@property(readonly, nonatomic) DiskProperties *diskProperties; // @synthesize diskProperties=_diskProperties;
- (void).cxx_destruct;
- (void)notifyBytesDidChange;
- (void)notifySliceDidChange;
@property(readonly, nonatomic) BOOL supportsPhysicalSize;
- (BOOL)strictlySerialScan;
- (BOOL)supportsParallelScan;
- (void)unmount;
@property(readonly, nonatomic) BOOL isUnmountable;
@property(readonly, nonatomic) BOOL isStartupVolume;
- (BOOL)isReadOnlyPhysically;
- (BOOL)isReadOnly;
- (BOOL)isVolume;
- (id)parentVolumeSource;
- (id)volumePath;
- (void)setCapacityBytes:(unsigned long long)arg1 freeBytes:(unsigned long long)arg2 recoverableBytes:(unsigned long long)arg3;
- (void)queryDiskProperties;
@property(readonly, nonatomic) NSString *textDescription;
- (void)setFirstSlice:(BOOL)arg1 isLastSlice:(BOOL)arg2;
- (id)bestAvailableParentDiskName;
- (id)bestAvailablePersistentUniqueId;
- (void)acceptVisitor:(id)arg1;

@end

