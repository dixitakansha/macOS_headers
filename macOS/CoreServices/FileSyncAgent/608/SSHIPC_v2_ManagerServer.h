//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SSHIPC_v2_ServiceProvider.h"

#import "ServerProxyMethods-Protocol.h"

@class NSArray, NSMutableDictionary;

@interface SSHIPC_v2_ManagerServer : SSHIPC_v2_ServiceProvider <ServerProxyMethods>
{
    struct __CFRunLoop *_runLoop;
    NSMutableDictionary *_providers;
}

+ (void)handleSSHIPC_v2_ProtocolWithServiceProviders:(id)arg1;
+ (id)objectForRefString:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *providers; // @synthesize providers=_providers;
@property(readonly, retain, nonatomic) NSArray *servicesProvided;
- (id)serviceName;
- (void)dealloc;

@end

