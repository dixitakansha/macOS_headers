//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/_GEOETARequesterServerProxy-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOETARequesterServerRemoteProxy : NSObject <_GEOETARequesterServerProxy>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_pendingRequests;
}

- (void).cxx_destruct;
- (void)cancelSimpleETARequest:(id)arg1;
- (void)startSimpleETARequest:(id)arg1 auditToken:(id)arg2 requestMode:(int)arg3 finished:(CDUnknownBlockType)arg4 networkActivity:(CDUnknownBlockType)arg5 error:(CDUnknownBlockType)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

