//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class LiAddress, NSString, RDDatabase;

@protocol PAVersionResourceOnDiskUpdate

@optional
- (void)smallPreviewsOnDiskWereUpdatedForVersionAddress:(LiAddress *)arg1;
- (void)faceTilesOnDiskWereUpdatedForVersionAddress:(LiAddress *)arg1;
- (void)largePreviewOnDiskWereUpdatedForVersionAddress:(LiAddress *)arg1;
- (void)masterOnDiskWasUpdatedForMasterUuid:(NSString *)arg1 database:(RDDatabase *)arg2;
@end

