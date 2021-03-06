//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorageImplementation-Protocol.h>

@class CPLRecordStatus, NSArray, NSString;

@protocol CPLEngineStatusCenterImplementation <CPLEngineStorageImplementation>
@property(readonly, nonatomic) BOOL hasStatusChanges;
- (BOOL)resetWithError:(id *)arg1;
- (BOOL)discardNotificationForRecordWithIdentifier:(NSString *)arg1 error:(id *)arg2;
- (BOOL)acknowledgeChangedStatus:(CPLRecordStatus *)arg1 hasBeenDeleted:(char *)arg2 error:(id *)arg3;
- (NSArray *)statusChangesMaximumCount:(unsigned long long)arg1;
- (CPLRecordStatus *)statusForRecordWithIdentifier:(NSString *)arg1;
- (BOOL)addStatus:(CPLRecordStatus *)arg1 error:(id *)arg2;
- (BOOL)getNewGeneration:(unsigned long long *)arg1 error:(id *)arg2;
@end

