//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLCloudKitTransportTask.h>

#import <CloudPhotoLibrary/CPLEngineTransportDownloadBatchTask-Protocol.h>

@class CKServerChangeToken, NSString, NSURL;

@interface CPLCloudKitDownloadBatchTask : CPLCloudKitTransportTask <CPLEngineTransportDownloadBatchTask>
{
    CDUnknownBlockType _completionHandler;
    CKServerChangeToken *_syncAnchor;
    NSURL *_destinationURL;
}

@property(copy, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(readonly, copy, nonatomic) CKServerChangeToken *syncAnchor; // @synthesize syncAnchor=_syncAnchor;
- (void).cxx_destruct;
- (void)run;
- (id)initForSyncAnchor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL foreground;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

