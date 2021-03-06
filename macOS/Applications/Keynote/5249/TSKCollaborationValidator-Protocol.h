//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString, TSKICloudHTTPRequestSenderFactory, TSKSharingState, TSPDocumentRevision;
@protocol OS_dispatch_queue;

@protocol TSKCollaborationValidator <NSObject>
@property(readonly, nonatomic) TSKICloudHTTPRequestSenderFactory *requestSenderFactory;
- (void)cancel;
- (void)close;
- (void)sendCheckRevisionRequestWithRevision:(TSPDocumentRevision *)arg1 passphrase:(NSString *)arg2 expectingNoDiffs:(BOOL)arg3 skipWaitingIfUnsupported:(BOOL)arg4 queueDownloadIfNeeded:(BOOL)arg5 queue:(NSObject<OS_dispatch_queue> *)arg6 completion:(void (^)(BOOL, NSArray *, NSString *, NSError *, TSKMailboxError *))arg7;
- (void)configureWithCacheIdentifier:(struct NSUUID *)arg1 sharingState:(TSKSharingState *)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3 completion:(void (^)(NSError *))arg4;
@end

