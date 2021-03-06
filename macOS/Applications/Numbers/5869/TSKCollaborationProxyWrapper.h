//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "iWorkCollaboration-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue, TSULogContext, iWorkCollaboration;

@interface TSKCollaborationProxyWrapper : NSObject <iWorkCollaboration>
{
    id <iWorkCollaboration> _collaborationProxy;
    id <TSULogContext> _logContext;
    NSObject<OS_dispatch_queue> *_completionQueue;
}

- (void).cxx_destruct;
- (void)fetchURLForSharingFileWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchFileProviderIdentifierWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)documentIsInUseWithTimeout:(double)arg1;
- (id)fetchPrivacyStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)refreshSharingStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)fetchLatestRevisionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)fetchCollaborationTokenWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setEnvironmentType:(unsigned long long)arg1;
- (void)fetchVersionAndCapabilitiesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)didCallProxyMethodWithIdentifier:(id)arg1;
- (id)willCallProxyMethodWithSelector:(SEL)arg1;
- (id)initWithCollaborationProxy:(id)arg1 logContext:(id)arg2 completionQueue:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

