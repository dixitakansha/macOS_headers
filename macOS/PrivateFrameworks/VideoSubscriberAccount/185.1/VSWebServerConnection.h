//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, VSWebServerConnectionDelegate;

__attribute__((visibility("hidden")))
@interface VSWebServerConnection : NSObject
{
    id <VSWebServerConnectionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_privateQueue;
    struct _CFHTTPServerConnection *_connection;
}

@property(readonly, nonatomic) struct _CFHTTPServerConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(nonatomic) __weak id <VSWebServerConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)suspend;
- (void)resume;
- (id)server;
- (id)initWithConnection:(struct _CFHTTPServerConnection *)arg1;

@end

