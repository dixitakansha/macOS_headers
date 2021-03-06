//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object, _NCNotificationCenterConnectionDelegate;

@interface _NCNotificationCenterConnection : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connection_queue;
    BOOL _serverConnectionFailure;
    id <_NCNotificationCenterConnectionDelegate> _delegate;
}

@property __weak id <_NCNotificationCenterConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_serverConnection;
- (_Bool)reply:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)sendMessage:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)sendMessage:(CDUnknownBlockType)arg1;
- (id)init;

@end

