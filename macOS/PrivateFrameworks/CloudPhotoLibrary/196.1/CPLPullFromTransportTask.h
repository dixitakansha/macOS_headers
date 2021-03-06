//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@class NSData, NSObject, NSString;
@protocol CPLEngineTransportDownloadBatchTask, CPLEngineTransportGetAssetCountsTask, CPLPullFromTransportTaskDelegate, OS_dispatch_queue;

@interface CPLPullFromTransportTask : CPLEngineSyncTask
{
    NSObject<OS_dispatch_queue> *_queue;
    NSData *_initialSyncAnchor;
    id <CPLEngineTransportDownloadBatchTask> _downloadTask;
    id <CPLEngineTransportGetAssetCountsTask> _getAssetCountsTask;
    NSString *_clientCacheIdentifier;
    BOOL _resetSyncAnchor;
    BOOL _didGetSomeChanges;
    BOOL _shouldGetAssetCounts;
    BOOL _isPostPushPhase;
}

@property(nonatomic) BOOL isPostPushPhase; // @synthesize isPostPushPhase=_isPostPushPhase;
@property(nonatomic) BOOL shouldGetAssetCounts; // @synthesize shouldGetAssetCounts=_shouldGetAssetCounts;
@property(readonly, nonatomic) BOOL didGetSomeChanges; // @synthesize didGetSomeChanges=_didGetSomeChanges;
- (void).cxx_destruct;
- (id)taskIdentifier;
- (void)cancel;
- (void)resume;
- (void)pause;
- (void)taskDidFinishWithError:(id)arg1;
- (void)launch;
- (void)_launch;
- (void)_launchPullTasks;
- (void)_handleNewBatch:(id)arg1 newSyncAnchor:(id)arg2;
- (void)_finishTaskWithErrorAndCleanupIfNecessary:(id)arg1;
- (id)initWithEngineLibrary:(id)arg1;

// Remaining properties
@property(retain) id <CPLPullFromTransportTaskDelegate> delegate; // @dynamic delegate;

@end

