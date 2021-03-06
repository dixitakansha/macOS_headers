//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface RDDiskSpaceManager : NSObject
{
    NSObject<OS_dispatch_queue> *_volumeQueue;
    NSMutableDictionary *_volumes;
}

+ (unsigned long long)availableUnrequestedBytesForPath:(id)arg1;
+ (unsigned long long)fileSystemSizeForPath:(id)arg1;
+ (unsigned long long)actualAvailableFreeSpaceForPath:(id)arg1;
+ (unsigned long long)availableFreeSpaceForPath:(id)arg1;
+ (unsigned long long)minimumRequiredFreeSpaceForPath:(id)arg1;
+ (id)qualifyPath:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)unregisterBytesRequired:(long long)arg1 forPath:(id)arg2;
- (BOOL)registerBytesRequired:(long long)arg1 forPath:(id)arg2;
- (void)updateFreeSpaceForPath:(id)arg1;
- (id)volumeRequestForPath:(id)arg1 shouldCreate:(BOOL)arg2 updateFreeSpace:(BOOL)arg3 changeAmount:(long long)arg4 reservationSuccess:(char *)arg5;
- (id)init;

@end

