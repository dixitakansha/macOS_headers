//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileSync/SFFileSyncManager-Protocol.h>

@class NSArray, SFPHDSyncSet;

@interface SFFileSyncManager : NSObject <SFFileSyncManager>
{
}

+ (id)sharedFileSyncManager;
+ (void)registerUIAppCallbackTarget:(id)arg1 selector:(SEL)arg2;
+ (void)deregisterUIApp;
+ (void)initialize;
+ (BOOL)accessInstanceVariablesDirectly;
- (int)willPerformPHDLogoutSyncForSyncSetNamed:(in id)arg1 withLocalHomePath:(in id)arg2;
- (int)willPerformLogoutSync:(in id)arg1;
- (int)willPerformLogoutSync;
- (int)willPerformPHDLoginSyncForSyncSetNamed:(in id)arg1 withLocalHomePath:(in id)arg2;
- (int)willPerformLoginSync:(in id)arg1;
- (int)willPerformLoginSync;
- (int)willNotPerformPHDLogoutSyncForSyncSetNamed:(in id)arg1;
- (int)willNotPerformPHDLoginSyncForSyncSetNamed:(in id)arg1;
- (int)willNotPerformLoginSync;
- (int)willNotPerformLogoutSync;
@property(readonly, copy) NSArray *syncSetsList;
@property(readonly, copy) SFPHDSyncSet *phdSyncSet;
- (void)printStateTreeAtPath:(in id)arg1 verbosity:(int)arg2 toPath:(in id)arg3;
- (id)findSyncSetByRef:(in id)arg1;
- (id)findSyncSetByName:(in id)arg1;
- (id)createSyncSetWithName:(in id)arg1;
- (id)createPHDSyncSetWithName:(in id)arg1 localHomePath:(in id)arg2 remoteXMLSpec:(in id)arg3 mountSuffixPath:(in id)arg4;
- (id)createPHDSyncSetWithName:(in id)arg1 remoteXMLSpec:(in id)arg2 mountSuffixPath:(in id)arg3;
@property(readonly) BOOL agentIsRunning;

@end

