//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FSPath, MountObserver, NSDate, NSMutableDictionary, NSRecursiveLock, TMRulesEngine;

@interface DeltaVolumeHierarchy : NSObject
{
    NSMutableDictionary *_volumesByPath;
    NSMutableDictionary *_volumesByName;
    NSRecursiveLock *_fineGrainedVolumeDictionaryLock;
    MountObserver *_mountObserver;
    TMRulesEngine *_rulesEngine;
    BOOL _forceNewRulesEngineOnNextNotification;
    BOOL _createHierarchies;
    FSPath *_volumeRelativePath;
    NSDate *_currentSnapshotDate;
    NSDate *_lastVolumeChangeDate;
    BOOL _doSpotlightLiveIndexing;
    BOOL _avoidRulesEngineForContents;
    id _delegate;
}

@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property BOOL avoidRulesEngineForContents; // @synthesize avoidRulesEngineForContents=_avoidRulesEngineForContents;
@property(readonly) BOOL doSpotlightLiveIndexing; // @synthesize doSpotlightLiveIndexing=_doSpotlightLiveIndexing;
@property(retain) TMRulesEngine *rulesEngine; // @synthesize rulesEngine=_rulesEngine;
@property(retain, nonatomic) MountObserver *mountObserver; // @synthesize mountObserver=_mountObserver;
@property(retain, nonatomic) NSMutableDictionary *volumesByName; // @synthesize volumesByName=_volumesByName;
@property(retain, nonatomic) NSMutableDictionary *volumesByPath; // @synthesize volumesByPath=_volumesByPath;
- (void)dealloc;
- (id)initWithVolumeRelativePath:(id)arg1 create:(BOOL)arg2 spotlightLiveIndexing:(BOOL)arg3;
- (id)initWithVolumeRelativePath:(id)arg1 create:(BOOL)arg2 rulesEngine:(id)arg3 spotlightLiveIndexing:(BOOL)arg4;
@property BOOL observeVolumeMountChanges; // @dynamic observeVolumeMountChanges;
- (void)deltaHierarchy:(id)arg1 removedSnapshot:(id)arg2;
- (void)finishAllIndexing:(BOOL)arg1;
- (id)synthesizeXattrsForVolumeDirectoryOnVolume:(id)arg1 atDate:(id)arg2;
- (id)pathOfItemAtSubPath:(id)arg1 forSnapshot:(id)arg2 removingVolume:(BOOL)arg3;
- (id)pathOfItemAtSubPath:(id)arg1 forSnapshot:(id)arg2 removingVolume:(BOOL)arg3 isInSnapshot:(char *)arg4;
- (id)priorMovePathFromSubPath:(id)arg1 forSnapshot:(id)arg2 removingVolume:(BOOL)arg3;
- (id)snapshotForFullPath:(id)arg1 skipping:(unsigned long long)arg2;
- (id)latestOfKnownSnapshotModifications;
- (id)latestSnapshotBaseName;
- (id)latestSnapshot;
- (id)attributesOfItemAtPath:(id)arg1 forSnapshot:(id)arg2 forceMeta:(BOOL)arg3;
- (id)anyDeltaAtAll;
- (id)anyDeltaContainingSnapshot:(id)arg1;
- (id)contentsOfDirectoryAtPath:(id)arg1 forSnapshot:(id)arg2;
- (id)elideContentsByRulesAtPath:(id)arg1 withContents:(id)arg2 usingDeviceRulesEngine:(id)arg3;
- (id)contentsOfSnapshotDirectory:(id)arg1;
- (id)getDeltasByPath;
- (void)abridgeUsingOptions:(int)arg1 minSizeForChunking:(unsigned long long)arg2;
- (void)thinSnapshotsAfterMigration;
- (void)thinSnapshotsUsingStandardLimits;
- (void)thinSnapshotsUsingHourlyLimit:(double)arg1 dailyLimit:(double)arg2 weeklyLimit:(double)arg3;
- (void)removeAndMergePartiallyDeletedSnapshots;
- (BOOL)removeSnapshotAndMergeForAll:(id)arg1;
- (id)getAllSortedUniqueSnapshotDates;
- (id)getAllSortedSnapshots;
- (void)newSnapshotForAllAt:(id)arg1;
- (id)deltaHierarchyForURL:(id)arg1;
- (id)deltaHierarchyForPath:(id)arg1;
- (id)deltaHierarchyForFSPath:(id)arg1;
- (void)deltaHierarchy:(id)arg1 createdFileAtPath:(id)arg2 wasAtPath:(id)arg3 inSnapshot:(id)arg4;
- (void)deltaHierarchy:(id)arg1 storedFileAtPath:(id)arg2 wasAtPath:(id)arg3 inSnapshot:(id)arg4;
- (id)_indexerForDeltaHierarchy:(id)arg1;
- (BOOL)_shouldIndexDeltaHierarchyPath:(id)arg1;
- (void)mountObserverDiskDescriptionChanged:(struct __DADisk *)arg1 Keys:(id)arg2;
- (void)mountObserverDiskDisappeared:(struct __DADisk *)arg1;
- (void)mountObserverDiskAppeared:(struct __DADisk *)arg1;
@property(readonly, nonatomic) NSDate *lastVolumeChangeDate; // @dynamic lastVolumeChangeDate;
- (void)noticeExclusionsHaveChanged;
- (void)reevaluateVolumes:(id)arg1;
- (void)initializeVolumeDictionary;
- (void)notifyDelegateOfVolumeChange;
- (void)updateVolumesByVolumeName;
- (BOOL)_setVolumeInfo:(id)arg1 forVolumePath:(id)arg2;
- (id)_indexerForVolumePath:(id)arg1;
- (id)_deltaHierarchyForVolumeName:(id)arg1;
- (id)_deltaHierarchyForVolumePath:(id)arg1;
- (id)_volumePaths;
- (id)deltaHierarchies;

@end

