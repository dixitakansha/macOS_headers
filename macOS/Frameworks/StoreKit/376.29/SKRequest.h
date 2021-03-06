//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SKRequestDelegate;

@interface SKRequest : NSObject
{
    id _requestInternal;
}

- (void)_unregisterForNotifications;
- (void)_sendFinishToDelegate;
- (void)_sendErrorToDelegate:(id)arg1;
- (void)_registerForNotifications;
- (id)_newIdentifier;
- (void)handleXPCCallbackForProducts:(id)arg1 invalidIdentifiers:(id)arg2 error:(id)arg3;
- (void)_sendError:(id)arg1;
- (void)_sendFinishedForProducts:(id)arg1 invalidIdentifiers:(id)arg2;
- (void)issueRequestForIdentifier:(id)arg1;
- (BOOL)handleFinishResponseForProducts:(id)arg1 invalidIdentifiers:(id)arg2;
@property id <SKRequestDelegate> delegate;
- (void)start;
- (void)cancel;
- (void)dealloc;
- (id)init;

@end

