//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface TMConfigurationDiskEnumerationContext : NSObject
{
    NSSet *_excludedVolumeUUIDs;
    NSSet *_includedVolumeUUIDs;
    NSSet *_pathsForVolumesExcludedByAliases;
    NSSet *_pathsForVolumesIncludedByAliases;
    NSSet *_pathsForVolumesWithLocalUserAccounts;
    NSSet *_pathsForDestinationVolumes;
}

@property(copy) NSSet *pathsForDestinationVolumes; // @synthesize pathsForDestinationVolumes=_pathsForDestinationVolumes;
@property(copy) NSSet *pathsForVolumesWithLocalUserAccounts; // @synthesize pathsForVolumesWithLocalUserAccounts=_pathsForVolumesWithLocalUserAccounts;
@property(copy) NSSet *pathsForVolumesIncludedByAliases; // @synthesize pathsForVolumesIncludedByAliases=_pathsForVolumesIncludedByAliases;
@property(copy) NSSet *pathsForVolumesExcludedByAliases; // @synthesize pathsForVolumesExcludedByAliases=_pathsForVolumesExcludedByAliases;
@property(copy) NSSet *includedVolumeUUIDs; // @synthesize includedVolumeUUIDs=_includedVolumeUUIDs;
@property(copy) NSSet *excludedVolumeUUIDs; // @synthesize excludedVolumeUUIDs=_excludedVolumeUUIDs;
- (void)dealloc;

@end

