//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface OSAXPCServices : NSObject
{
    NSObject<OS_xpc_object> *_listenerConnection;
}

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)generateJetsamWithParams:(id)arg1;
- (void)postNotification:(id)arg1;
- (BOOL)isInternalInstall;
- (BOOL)serviceRequest:(id)arg1 fromPID:(int)arg2;
- (id)initWithServiceName:(const char *)arg1;

@end

