//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSDate, NSError, NSObject, NSOperationQueue, TSACachedDocumentInfo, TSKSharingState;
@protocol OS_dispatch_queue;

@interface TSASharingStateRefreshOperation : NSOperation
{
    NSOperationQueue *_accessQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    CDUnknownBlockType _completion;
    BOOL _isExecuting;
    BOOL _isFinished;
    NSDate *_startDate;
    BOOL _isUserInitiated;
    BOOL _refreshShare;
    BOOL _refreshPrivacy;
    BOOL _migrateIfNecessary;
    BOOL _canCoalesce;
    TSACachedDocumentInfo *_cachedDocumentInfo;
    TSKSharingState *_knownSharingState;
    TSKSharingState *_updatedSharingState;
    TSASharingStateRefreshOperation *_equivalentOperation;
    NSError *_error;
}

@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) TSASharingStateRefreshOperation *equivalentOperation; // @synthesize equivalentOperation=_equivalentOperation;
@property(copy, nonatomic) TSKSharingState *updatedSharingState; // @synthesize updatedSharingState=_updatedSharingState;
@property(readonly, nonatomic) TSKSharingState *knownSharingState; // @synthesize knownSharingState=_knownSharingState;
@property(readonly, nonatomic) BOOL canCoalesce; // @synthesize canCoalesce=_canCoalesce;
@property(readonly, nonatomic) BOOL migrateIfNecessary; // @synthesize migrateIfNecessary=_migrateIfNecessary;
@property(readonly, nonatomic) BOOL refreshPrivacy; // @synthesize refreshPrivacy=_refreshPrivacy;
@property(readonly, nonatomic) BOOL refreshShare; // @synthesize refreshShare=_refreshShare;
@property(nonatomic) BOOL isUserInitiated; // @synthesize isUserInitiated=_isUserInitiated;
@property(readonly, nonatomic) TSACachedDocumentInfo *cachedDocumentInfo; // @synthesize cachedDocumentInfo=_cachedDocumentInfo;
- (void).cxx_destruct;
- (id)description;
- (void)start;
- (void)setPossiblyEquivalentOperation:(id)arg1;
- (BOOL)isEquivalentTo:(id)arg1;
- (void)p_didFinishOperation;
- (void)p_didStartOperation;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isAsynchronous;
- (id)initWithCachedDocumentInfo:(id)arg1 refreshShare:(BOOL)arg2 refreshPrivacy:(BOOL)arg3 migrateIfNecessary:(BOOL)arg4 isUserInitiated:(BOOL)arg5 canCoalesce:(BOOL)arg6 knownSharingState:(id)arg7 changedSharingState:(id)arg8 reason:(id)arg9 queue:(id)arg10 completion:(CDUnknownBlockType)arg11;

@end

